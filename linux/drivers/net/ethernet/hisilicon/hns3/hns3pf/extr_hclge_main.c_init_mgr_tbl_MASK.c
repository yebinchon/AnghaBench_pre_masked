
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct hclge_dev*,int *) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_3(struct hclge_dev *VAR_1)
{
 int VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_2 = FUNC_2(VAR_1, &VAR_0[VAR_3]);
  if (VAR_2) {
   FUNC_1(&VAR_1->pdev->dev,
    "add mac ethertype failed, ret =%d.\n",
    VAR_2);
   return VAR_2;
  }
 }

 return 0;
}
