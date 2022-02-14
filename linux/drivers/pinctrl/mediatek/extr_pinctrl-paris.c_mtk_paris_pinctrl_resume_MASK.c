
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_pinctrl {int eint; } ;
struct device {int dummy; } ;


 struct mtk_pinctrl* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 struct mtk_pinctrl *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1->eint);
}
