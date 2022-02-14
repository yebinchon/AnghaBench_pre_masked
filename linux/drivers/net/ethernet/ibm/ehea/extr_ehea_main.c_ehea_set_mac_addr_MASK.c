
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sockaddr {int * sa_data; } ;
struct net_device {int* dev_addr; int addr_len; } ;
struct hcp_ehea_port_cb0 {int port_mac_addr; } ;
struct ehea_port {scalar_t__ state; int mac_addr; int logical_port_id; TYPE_1__* adapter; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct ehea_port*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,struct hcp_ehea_port_cb0*) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int*,int *,int ) ;
 struct ehea_port* FUNC_8 (struct net_device*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_11, void *VAR_12)
{
 struct ehea_port *VAR_13 = FUNC_8(VAR_11);
 struct sockaddr *VAR_14 = VAR_12;
 struct hcp_ehea_port_cb0 *VAR_15;
 int VAR_16;
 u64 VAR_17;

 if (!FUNC_6(VAR_14->sa_data)) {
  VAR_16 = -VAR_0;
  goto out;
 }

 VAR_15 = (void *)FUNC_5(VAR_5);
 if (!VAR_15) {
  FUNC_9("no mem for cb0\n");
  VAR_16 = -VAR_3;
  goto out;
 }

 FUNC_7(&(VAR_15->port_mac_addr), &(VAR_14->sa_data[0]), VAR_4);

 VAR_15->port_mac_addr = VAR_15->port_mac_addr >> 16;

 VAR_17 = FUNC_2(VAR_13->adapter->handle,
           VAR_13->logical_port_id, VAR_7,
           FUNC_0(VAR_8, 1), VAR_15);
 if (VAR_17 != VAR_10) {
  VAR_16 = -VAR_2;
  goto out_free;
 }

 FUNC_7(VAR_11->dev_addr, VAR_14->sa_data, VAR_11->addr_len);


 if (VAR_13->state == VAR_1) {
  VAR_16 = FUNC_1(VAR_13, VAR_6);
  if (VAR_16)
   goto out_upregs;
 }

 VAR_13->mac_addr = VAR_15->port_mac_addr << 16;


 if (VAR_13->state == VAR_1) {
  VAR_16 = FUNC_1(VAR_13, VAR_9);
  if (VAR_16)
   goto out_upregs;
 }

 VAR_16 = 0;

out_upregs:
 FUNC_3();
out_free:
 FUNC_4((unsigned long)VAR_15);
out:
 return VAR_16;
}
