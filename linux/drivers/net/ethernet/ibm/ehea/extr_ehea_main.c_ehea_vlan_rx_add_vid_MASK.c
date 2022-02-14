
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct hcp_ehea_port_cb1 {scalar_t__* vlan_filter; } ;
struct ehea_port {int logical_port_id; struct ehea_adapter* adapter; } ;
struct ehea_adapter {int handle; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,struct hcp_ehea_port_cb1*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,struct hcp_ehea_port_cb1*) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 struct ehea_port* FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_6, __be16 VAR_7, u16 VAR_8)
{
 struct ehea_port *VAR_9 = FUNC_4(VAR_6);
 struct ehea_adapter *VAR_10 = VAR_9->adapter;
 struct hcp_ehea_port_cb1 *VAR_11;
 int VAR_12;
 u64 VAR_13;
 int VAR_14 = 0;

 VAR_11 = (void *)FUNC_3(VAR_2);
 if (!VAR_11) {
  FUNC_5("no mem for cb1\n");
  VAR_14 = -VAR_1;
  goto out;
 }

 VAR_13 = FUNC_1(VAR_10->handle, VAR_9->logical_port_id,
          VAR_3, VAR_4, VAR_11);
 if (VAR_13 != VAR_5) {
  FUNC_5("query_ehea_port failed\n");
  VAR_14 = -VAR_0;
  goto out;
 }

 VAR_12 = (VAR_8 / 64);
 VAR_11->vlan_filter[VAR_12] |= ((u64)(0x8000000000000000 >> (VAR_8 & 0x3F)));

 VAR_13 = FUNC_0(VAR_10->handle, VAR_9->logical_port_id,
           VAR_3, VAR_4, VAR_11);
 if (VAR_13 != VAR_5) {
  FUNC_5("modify_ehea_port failed\n");
  VAR_14 = -VAR_0;
 }
out:
 FUNC_2((unsigned long)VAR_11);
 return VAR_14;
}
