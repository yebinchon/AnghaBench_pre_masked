
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct hclge_dev {TYPE_1__* pdev; int default_reset_request; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct hclge_dev* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 struct hclge_dev* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct hclge_dev *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_1);




 if (!VAR_3->default_reset_request)
  return;

 FUNC_0(&VAR_3->pdev->dev,
   "triggering reset in reset timer\n");
 FUNC_2(VAR_3->pdev, ((void*)0));
}
