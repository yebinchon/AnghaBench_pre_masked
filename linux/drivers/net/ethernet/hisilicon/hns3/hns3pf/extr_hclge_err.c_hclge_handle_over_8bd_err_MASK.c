
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct hclge_dev {int num_alloc_vport; TYPE_2__* vport; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int vport_id; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct hclge_dev*,int*,int*) ;
 int FUNC_3 (int ,unsigned long*) ;

__attribute__((used)) static void FUNC_4(struct hclge_dev *VAR_1,
          unsigned long *VAR_2)
{
 struct device *VAR_3 = &VAR_1->pdev->dev;
 u16 VAR_4;
 u16 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, &VAR_4, &VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_3, "fail(%d) to query over_8bd_no_fe info\n",
   VAR_6);
  return;
 }

 FUNC_0(VAR_3, "PPU_PF_ABNORMAL_INT_ST over_8bd_no_fe found, vf_id(%u), queue_id(%u)\n",
  VAR_4, VAR_5);

 if (VAR_4) {
  if (VAR_4 >= VAR_1->num_alloc_vport) {
   FUNC_0(VAR_3, "invalid vf id(%d)\n", VAR_4);
   return;
  }





  if (*VAR_2 != 0)
   return;

  VAR_6 = FUNC_1(&VAR_1->vport[VAR_4]);
  if (VAR_6)
   FUNC_0(VAR_3, "inform reset to vf(%u) failed %d!\n",
    VAR_1->vport->vport_id, VAR_6);
 } else {
  FUNC_3(VAR_0, VAR_2);
 }
}
