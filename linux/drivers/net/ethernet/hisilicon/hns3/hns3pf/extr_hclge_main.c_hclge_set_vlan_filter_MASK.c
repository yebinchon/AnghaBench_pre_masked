
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hnae3_handle {scalar_t__ port_base_vlan_state; } ;
struct hclge_vport {int vlan_del_fail_bmap; int vport_id; struct hclge_dev* back; } ;
struct hclge_dev {int state; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hclge_vport*,int ,int) ;
 struct hclge_vport* FUNC_1 (struct hnae3_handle*) ;
 int FUNC_2 (struct hclge_vport*,int ,int) ;
 int FUNC_3 (struct hclge_dev*,int ,int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct hnae3_handle *VAR_3, __be16 VAR_4,
     u16 VAR_5, bool VAR_6)
{
 struct hclge_vport *VAR_7 = FUNC_1(VAR_3);
 struct hclge_dev *VAR_8 = VAR_7->back;
 bool VAR_9 = 0;
 int VAR_10 = 0;





 if (FUNC_5(VAR_1, &VAR_8->state) && VAR_6) {
  FUNC_4(VAR_5, VAR_7->vlan_del_fail_bmap);
  return -VAR_0;
 }







 if (VAR_3->port_base_vlan_state == VAR_2) {
  VAR_10 = FUNC_3(VAR_8, VAR_4, VAR_7->vport_id,
            VAR_5, VAR_6);
  VAR_9 = 1;
 }

 if (!VAR_10) {
  if (VAR_6)
   FUNC_2(VAR_7, VAR_5, 0);
  else
   FUNC_0(VAR_7, VAR_5,
         VAR_9);
 } else if (VAR_6) {




  FUNC_4(VAR_5, VAR_7->vlan_del_fail_bmap);
 }
 return VAR_10;
}
