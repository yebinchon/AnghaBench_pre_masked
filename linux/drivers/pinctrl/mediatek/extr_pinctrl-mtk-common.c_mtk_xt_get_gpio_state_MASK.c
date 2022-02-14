
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_pinctrl {int chip; } ;
struct TYPE_2__ {int number; } ;
struct mtk_desc_pin {TYPE_1__ pin; } ;


 int VAR_0 ;
 struct mtk_desc_pin* FUNC_0 (struct mtk_pinctrl*,unsigned long) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, unsigned long VAR_2)
{
 struct mtk_pinctrl *VAR_3 = (struct mtk_pinctrl *)VAR_1;
 const struct mtk_desc_pin *VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (!VAR_4)
  return -VAR_0;

 return FUNC_1(VAR_3->chip, VAR_4->pin.number);
}
