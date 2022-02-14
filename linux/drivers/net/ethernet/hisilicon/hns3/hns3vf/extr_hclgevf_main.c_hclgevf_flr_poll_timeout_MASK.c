
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclgevf_dev {TYPE_1__* pdev; int flr_state; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct hclgevf_dev *VAR_2,
        unsigned long VAR_3,
        unsigned long VAR_4)
{
 unsigned long VAR_5 = 0;

 while (!FUNC_1(VAR_1, &VAR_2->flr_state) &&
        VAR_5++ < VAR_4)
  FUNC_2(VAR_3, VAR_3 * 2);

 if (!FUNC_1(VAR_1, &VAR_2->flr_state)) {
  FUNC_0(&VAR_2->pdev->dev,
   "flr wait timeout\n");
  return -VAR_0;
 }

 return 0;
}
