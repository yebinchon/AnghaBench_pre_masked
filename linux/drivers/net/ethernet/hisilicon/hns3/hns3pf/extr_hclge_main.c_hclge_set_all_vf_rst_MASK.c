
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_vport {int vport_id; int state; } ;
struct hclge_dev {int num_vmdq_vport; int num_alloc_vport; TYPE_1__* pdev; struct hclge_vport* vport; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (struct hclge_vport*) ;
 int FUNC_3 (struct hclge_dev*,int ,int) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct hclge_dev *VAR_1, bool VAR_2)
{
 int VAR_3;

 for (VAR_3 = VAR_1->num_vmdq_vport + 1; VAR_3 < VAR_1->num_alloc_vport; VAR_3++) {
  struct hclge_vport *VAR_4 = &VAR_1->vport[VAR_3];
  int VAR_5;


  VAR_5 = FUNC_3(VAR_1, VAR_4->vport_id, VAR_2);
  if (VAR_5) {
   FUNC_0(&VAR_1->pdev->dev,
    "set vf(%d) rst failed %d!\n",
    VAR_4->vport_id, VAR_5);
   return VAR_5;
  }

  if (!VAR_2 || !FUNC_4(VAR_0, &VAR_4->state))
   continue;





  VAR_5 = FUNC_2(VAR_4);
  if (VAR_5)
   FUNC_1(&VAR_1->pdev->dev,
     "inform reset to vf(%d) failed %d!\n",
     VAR_4->vport_id, VAR_5);
 }

 return 0;
}
