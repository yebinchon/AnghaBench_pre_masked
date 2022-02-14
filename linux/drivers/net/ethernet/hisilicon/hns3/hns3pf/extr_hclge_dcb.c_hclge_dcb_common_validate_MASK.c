
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct hclge_dev {TYPE_2__* vport; TYPE_1__* pdev; int tc_max; } ;
struct TYPE_4__ {int alloc_tqps; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int ,...) ;

__attribute__((used)) static int FUNC_1(struct hclge_dev *VAR_2, u8 VAR_3,
         u8 *VAR_4)
{
 int VAR_5;

 if (VAR_3 > VAR_2->tc_max) {
  FUNC_0(&VAR_2->pdev->dev,
   "tc num checking failed, %u > tc_max(%u)\n",
   VAR_3, VAR_2->tc_max);
  return -VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_4[VAR_5] >= VAR_3) {
   FUNC_0(&VAR_2->pdev->dev,
    "prio_tc[%u] checking failed, %u >= num_tc(%u)\n",
    VAR_5, VAR_4[VAR_5], VAR_3);
   return -VAR_0;
  }
 }

 if (VAR_3 > VAR_2->vport[0].alloc_tqps) {
  FUNC_0(&VAR_2->pdev->dev,
   "allocated tqp checking failed, %u > tqp(%u)\n",
   VAR_3, VAR_2->vport[0].alloc_tqps);
  return -VAR_0;
 }

 return 0;
}
