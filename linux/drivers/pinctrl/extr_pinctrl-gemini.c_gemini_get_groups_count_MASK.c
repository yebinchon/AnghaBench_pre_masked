
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct gemini_pmx {scalar_t__ is_3516; scalar_t__ is_3512; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct gemini_pmx* FUNC_1 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_2)
{
 struct gemini_pmx *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->is_3512)
  return FUNC_0(VAR_0);
 if (VAR_3->is_3516)
  return FUNC_0(VAR_1);
 return 0;
}
