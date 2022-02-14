
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int hog_sleep; int p; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct pinctrl_dev *VAR_0)
{
 if (!FUNC_0(VAR_0->p) && !FUNC_0(VAR_0->hog_sleep))
  return FUNC_1(VAR_0->p, VAR_0->hog_sleep);
 return 0;
}
