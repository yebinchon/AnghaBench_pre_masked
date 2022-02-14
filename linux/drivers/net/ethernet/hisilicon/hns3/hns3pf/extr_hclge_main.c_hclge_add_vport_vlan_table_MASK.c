
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hclge_vport_vlan_cfg {int hd_tbl_status; int node; int vlan_id; } ;
struct hclge_vport {int vlan_list; } ;


 int VAR_0 ;
 struct hclge_vport_vlan_cfg* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct hclge_vport *VAR_1, u16 VAR_2,
           bool VAR_3)
{
 struct hclge_vport_vlan_cfg *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;

 VAR_4->hd_tbl_status = VAR_3;
 VAR_4->vlan_id = VAR_2;

 FUNC_1(&VAR_4->node, &VAR_1->vlan_list);
}
