
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_dev {int state; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct hclge_dev*,unsigned long*) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct hclge_dev *VAR_1,
          unsigned long *VAR_2)
{
 struct device *VAR_3 = &VAR_1->pdev->dev;

 if (!FUNC_2(VAR_0, &VAR_1->state)) {
  FUNC_0(VAR_3,
   "Can't handle - MSIx error reported during dev init\n");
  return 0;
 }

 return FUNC_1(VAR_1, VAR_2);
}
