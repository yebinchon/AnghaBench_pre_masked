
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hclge_vport {int vport_id; struct hclge_dev* back; } ;
struct hclge_vlan_info {int vlan_tag; int vlan_proto; } ;
struct hclge_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hclge_vport*) ;
 int FUNC_1 (struct hclge_vport*,int) ;
 int FUNC_2 (struct hclge_dev*,int ,int ,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct hclge_vport *VAR_1,
         u16 VAR_2,
         struct hclge_vlan_info *VAR_3,
         struct hclge_vlan_info *VAR_4)
{
 struct hclge_dev *VAR_5 = VAR_1->back;
 int VAR_6;

 if (VAR_2 == VAR_0) {
  FUNC_1(VAR_1, 0);
  return FUNC_2(VAR_5,
       FUNC_3(VAR_3->vlan_proto),
       VAR_1->vport_id,
       VAR_3->vlan_tag,
       0);
 }

 VAR_6 = FUNC_2(VAR_5, FUNC_3(VAR_4->vlan_proto),
           VAR_1->vport_id, VAR_4->vlan_tag,
           1);
 if (VAR_6)
  return VAR_6;

 return FUNC_0(VAR_1);
}
