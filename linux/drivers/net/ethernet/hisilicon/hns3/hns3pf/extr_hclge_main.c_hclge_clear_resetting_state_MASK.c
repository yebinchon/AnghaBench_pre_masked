
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct hclge_vport {int vport_id; } ;
struct hclge_dev {size_t num_alloc_vport; TYPE_1__* pdev; struct hclge_vport* vport; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (struct hclge_dev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hclge_dev *VAR_0)
{
 u16 VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_alloc_vport; VAR_1++) {
  struct hclge_vport *VAR_2 = &VAR_0->vport[VAR_1];
  int VAR_3;


  VAR_3 = FUNC_1(VAR_0, VAR_2->vport_id, 0);
  if (VAR_3)
   FUNC_0(&VAR_0->pdev->dev,
     "clear vf(%d) rst failed %d!\n",
     VAR_2->vport_id, VAR_3);
 }
}
