
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hclge_vport {int vlan_del_fail_bmap; int vport_id; } ;
struct hclge_dev {int num_alloc_vport; struct hclge_vport* vport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct hclge_vport*,int ,int) ;
 int FUNC_3 (struct hclge_dev*,int ,int ,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct hclge_dev *VAR_4)
{


 int VAR_5, VAR_6, VAR_7 = 0;
 u16 VAR_8;


 for (VAR_5 = 0; VAR_5 < VAR_4->num_alloc_vport; VAR_5++) {
  struct hclge_vport *VAR_9 = &VAR_4->vport[VAR_5];

  VAR_8 = FUNC_1(VAR_9->vlan_del_fail_bmap,
      VAR_3);
  while (VAR_8 != VAR_3) {
   VAR_6 = FUNC_3(VAR_4, FUNC_4(VAR_1),
             VAR_9->vport_id, VAR_8,
             1);
   if (VAR_6 && VAR_6 != -VAR_0)
    return;

   FUNC_0(VAR_8, VAR_9->vlan_del_fail_bmap);
   FUNC_2(VAR_9, VAR_8, 0);

   VAR_7++;
   if (VAR_7 >= 60)
    return;

   VAR_8 = FUNC_1(VAR_9->vlan_del_fail_bmap,
       VAR_3);
  }
 }
}
