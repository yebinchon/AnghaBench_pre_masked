
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int node; int mutex; int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pinctrl_dev*) ;
 int FUNC_7 (struct pinctrl_dev*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_8(struct pinctrl_dev *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_6(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2->dev, "could not claim hogs: %i\n",
   VAR_3);
  FUNC_3(&VAR_2->mutex);
  FUNC_1(VAR_2);

  return VAR_3;
 }

 FUNC_4(&VAR_1);
 FUNC_2(&VAR_2->node, &VAR_0);
 FUNC_5(&VAR_1);

 FUNC_7(VAR_2);

 return 0;
}
