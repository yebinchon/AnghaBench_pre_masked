
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct u300_pmx {int dummy; } ;
struct pinctrl_dev {int dummy; } ;


 struct u300_pmx* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (struct u300_pmx*,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_0, unsigned VAR_1,
       unsigned VAR_2)
{
 struct u300_pmx *VAR_3;


 if (VAR_1 == 0)
  return 0;

 VAR_3 = FUNC_0(VAR_0);
 FUNC_1(VAR_3, VAR_1, 1);

 return 0;
}
