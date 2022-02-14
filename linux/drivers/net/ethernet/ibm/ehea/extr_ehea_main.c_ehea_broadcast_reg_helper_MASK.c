
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct ehea_port {int mac_addr; int logical_port_id; TYPE_1__* adapter; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int,int ,int ,int ) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(struct ehea_port *VAR_6, u32 VAR_7)
{
 int VAR_8 = 0;
 u64 VAR_9;
 u8 VAR_10;


 VAR_10 = VAR_0 | VAR_1;
 VAR_9 = FUNC_0(VAR_6->adapter->handle,
         VAR_6->logical_port_id,
         VAR_10, VAR_6->mac_addr, 0, VAR_7);
 if (VAR_9 != VAR_5) {
  FUNC_1("%sregistering bc address failed (tagged)\n",
         VAR_7 == VAR_4 ? "" : "de");
  VAR_8 = -VAR_3;
  goto out_herr;
 }


 VAR_10 = VAR_0 | VAR_2;
 VAR_9 = FUNC_0(VAR_6->adapter->handle,
         VAR_6->logical_port_id,
         VAR_10, VAR_6->mac_addr, 0, VAR_7);
 if (VAR_9 != VAR_5) {
  FUNC_1("%sregistering bc address failed (vlan)\n",
         VAR_7 == VAR_4 ? "" : "de");
  VAR_8 = -VAR_3;
 }
out_herr:
 return VAR_8;
}
