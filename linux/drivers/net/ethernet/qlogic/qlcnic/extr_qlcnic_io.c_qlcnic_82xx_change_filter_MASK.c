
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct qlcnic_vlan_req {int vlan_id; } ;
struct qlcnic_nic_req {int * words; void* req_hdr; void* qhdr; } ;
struct qlcnic_mac_req {int mac_addr; int op; } ;
struct qlcnic_host_tx_ring {size_t producer; int num_desc; struct cmd_desc_type0* desc_head; } ;
struct qlcnic_adapter {scalar_t__ portnum; } ;
struct cmd_desc_type0 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int) ;
 size_t FUNC_2 (size_t,int ) ;
 int FUNC_3 (int ,int*,int ) ;
 int FUNC_4 (struct qlcnic_nic_req*,int ,int) ;
 int FUNC_5 () ;

void FUNC_6(struct qlcnic_adapter *VAR_5, u64 *VAR_6,
          u16 VAR_7, struct qlcnic_host_tx_ring *VAR_8)
{
 struct cmd_desc_type0 *VAR_9;
 struct qlcnic_nic_req *VAR_10;
 struct qlcnic_mac_req *VAR_11;
 struct qlcnic_vlan_req *VAR_12;
 u32 VAR_13;
 u64 VAR_14;

 VAR_13 = VAR_8->producer;
 VAR_9 = &VAR_8->desc_head[VAR_8->producer];

 VAR_10 = (struct qlcnic_nic_req *)VAR_9;
 FUNC_4(VAR_10, 0, sizeof(struct qlcnic_nic_req));
 VAR_10->qhdr = FUNC_1(VAR_4 << 23);

 VAR_14 = VAR_2 | ((u64)(VAR_5->portnum) << 16);
 VAR_10->req_hdr = FUNC_1(VAR_14);

 VAR_11 = (struct qlcnic_mac_req *)&(VAR_10->words[0]);
 VAR_11->op = VAR_7 ? VAR_3 : VAR_1;
 FUNC_3(VAR_11->mac_addr, VAR_6, VAR_0);

 VAR_12 = (struct qlcnic_vlan_req *)&VAR_10->words[1];
 VAR_12->vlan_id = FUNC_0(VAR_7);

 VAR_8->producer = FUNC_2(VAR_13, VAR_8->num_desc);
 FUNC_5();
}
