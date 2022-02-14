
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct list_head {int dummy; } ;
struct hclge_vport_mac_addr_cfg {int hd_tbl_status; int node; int mac_addr; } ;
struct hclge_vport {struct list_head mc_mac_list; struct list_head uc_mac_list; int vport_id; } ;
typedef enum HCLGE_MAC_ADDR_TYPE { ____Placeholder_HCLGE_MAC_ADDR_TYPE } HCLGE_MAC_ADDR_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hclge_vport_mac_addr_cfg* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (int ,int const*,int ) ;

void FUNC_3(struct hclge_vport *VAR_3, const u8 *VAR_4,
          enum HCLGE_MAC_ADDR_TYPE VAR_5)
{
 struct hclge_vport_mac_addr_cfg *VAR_6;
 struct list_head *VAR_7;

 if (!VAR_3->vport_id)
  return;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return;

 VAR_6->hd_tbl_status = 1;
 FUNC_2(VAR_6->mac_addr, VAR_4, VAR_0);

 VAR_7 = (VAR_5 == VAR_2) ?
        &VAR_3->uc_mac_list : &VAR_3->mc_mac_list;

 FUNC_1(&VAR_6->node, VAR_7);
}
