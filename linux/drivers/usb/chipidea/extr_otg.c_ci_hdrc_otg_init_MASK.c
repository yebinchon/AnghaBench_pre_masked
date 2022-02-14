
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ci_hdrc {int dev; int wq; int work; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ci_hdrc*) ;
 scalar_t__ FUNC_2 (struct ci_hdrc*) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(struct ci_hdrc *VAR_2)
{
 FUNC_0(&VAR_2->work, VAR_1);
 VAR_2->wq = FUNC_3("ci_otg");
 if (!VAR_2->wq) {
  FUNC_4(VAR_2->dev, "can't create workqueue\n");
  return -VAR_0;
 }

 if (FUNC_2(VAR_2))
  return FUNC_1(VAR_2);

 return 0;
}
