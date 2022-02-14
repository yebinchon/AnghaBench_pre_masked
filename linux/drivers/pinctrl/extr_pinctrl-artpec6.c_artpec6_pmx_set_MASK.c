
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct artpec6_pmx {int dev; } ;


 int FUNC_0 (struct pinctrl_dev*,unsigned int) ;
 int FUNC_1 (struct pinctrl_dev*,unsigned int) ;
 int FUNC_2 (struct pinctrl_dev*,unsigned int,unsigned int,int) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 struct artpec6_pmx* FUNC_4 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_0,
      unsigned int VAR_1,
      unsigned int VAR_2)
{
 struct artpec6_pmx *VAR_3 = FUNC_4(VAR_0);

 FUNC_3(VAR_3->dev, "enabling %s function for pin group %s\n",
  FUNC_1(VAR_0, VAR_1),
  FUNC_0(VAR_0, VAR_2));

 FUNC_2(VAR_0, VAR_1, VAR_2, 1);

 return 0;
}
