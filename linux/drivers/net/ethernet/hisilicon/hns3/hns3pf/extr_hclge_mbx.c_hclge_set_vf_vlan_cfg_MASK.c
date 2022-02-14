
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct hnae3_handle {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct hclge_vport {TYPE_1__ port_base_vlan_cfg; struct hnae3_handle nic; } ;
struct hclge_vlan_info {int dummy; } ;
struct hclge_vf_vlan_cfg {scalar_t__ subcode; int is_kill; int proto; int vlan; } ;
struct hclge_mbx_vf_to_pf_cmd {scalar_t__* msg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hnae3_handle*,int) ;
 int FUNC_2 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*,int ,int *,int) ;
 int FUNC_3 (struct hnae3_handle*,int ,int ,int) ;
 int FUNC_4 (struct hclge_vport*,int ,struct hclge_vlan_info*) ;

__attribute__((used)) static int FUNC_5(struct hclge_vport *VAR_4,
     struct hclge_mbx_vf_to_pf_cmd *VAR_5)
{
 struct hclge_vf_vlan_cfg *VAR_6;
 int VAR_7 = 0;

 VAR_6 = (struct hclge_vf_vlan_cfg *)VAR_5->msg;
 if (VAR_6->subcode == VAR_2) {
  struct hnae3_handle *VAR_8 = &VAR_4->nic;
  u16 VAR_9, VAR_10;
  bool VAR_11;

  VAR_11 = !!VAR_6->is_kill;
  VAR_9 = VAR_6->vlan;
  VAR_10 = VAR_6->proto;
  VAR_7 = FUNC_3(VAR_8, FUNC_0(VAR_10),
            VAR_9, VAR_11);
 } else if (VAR_6->subcode == VAR_3) {
  struct hnae3_handle *VAR_12 = &VAR_4->nic;
  bool VAR_13 = VAR_6->is_kill ? 1 : 0;

  VAR_7 = FUNC_1(VAR_12, VAR_13);
 } else if (VAR_5->msg[1] == VAR_1) {
  struct hclge_vlan_info *VAR_14;
  u16 *VAR_15;

  VAR_15 = (u16 *)&VAR_5->msg[2];
  VAR_14 = (struct hclge_vlan_info *)&VAR_5->msg[4];
  VAR_7 = FUNC_4(VAR_4, *VAR_15,
        VAR_14);
 } else if (VAR_5->msg[1] == VAR_0) {
  u8 VAR_16;

  VAR_16 = VAR_4->port_base_vlan_cfg.state;
  VAR_7 = FUNC_2(VAR_4, VAR_5, 0, &VAR_16,
           sizeof(u8));
 }

 return VAR_7;
}
