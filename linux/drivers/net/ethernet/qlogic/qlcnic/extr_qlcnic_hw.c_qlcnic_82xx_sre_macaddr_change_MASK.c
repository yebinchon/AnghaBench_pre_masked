
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct qlcnic_vlan_req {int vlan_id; } ;
struct qlcnic_nic_req {int * words; void* req_hdr; void* qhdr; } ;
struct qlcnic_mac_req {int mac_addr; int op; } ;
struct qlcnic_adapter {scalar_t__ portnum; } ;
struct cmd_desc_type0 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (struct qlcnic_nic_req*,int ,int) ;
 int FUNC_4 (struct qlcnic_adapter*,struct cmd_desc_type0*,int) ;

int FUNC_5(struct qlcnic_adapter *VAR_3, u8 *VAR_4,
       u16 VAR_5, u8 VAR_6)
{
 struct qlcnic_nic_req VAR_7;
 struct qlcnic_mac_req *VAR_8;
 struct qlcnic_vlan_req *VAR_9;
 u64 VAR_10;

 FUNC_3(&VAR_7, 0, sizeof(struct qlcnic_nic_req));
 VAR_7.qhdr = FUNC_1(VAR_2 << 23);

 VAR_10 = VAR_1 | ((u64)VAR_3->portnum << 16);
 VAR_7.req_hdr = FUNC_1(VAR_10);

 VAR_8 = (struct qlcnic_mac_req *)&VAR_7.words[0];
 VAR_8->op = VAR_6;
 FUNC_2(VAR_8->mac_addr, VAR_4, VAR_0);

 VAR_9 = (struct qlcnic_vlan_req *)&VAR_7.words[1];
 VAR_9->vlan_id = FUNC_0(VAR_5);

 return FUNC_4(VAR_3, (struct cmd_desc_type0 *)&VAR_7, 1);
}
