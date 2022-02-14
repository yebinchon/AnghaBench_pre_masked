
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mtk_pinctrl {int eint; TYPE_1__* devdata; } ;
struct TYPE_4__ {unsigned long eintnum; } ;
struct mtk_desc_pin {TYPE_2__ eint; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_3__ {struct mtk_desc_pin* pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 struct mtk_pinctrl* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,unsigned long,int ) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_4, unsigned VAR_5,
          unsigned long VAR_6)
{
 struct mtk_pinctrl *VAR_7 = FUNC_0(VAR_4);
 const struct mtk_desc_pin *VAR_8;
 unsigned long VAR_9;
 u32 VAR_10;

 if (FUNC_3(VAR_6) != VAR_3)
  return -VAR_1;

 VAR_8 = VAR_7->devdata->pins + VAR_5;
 if (VAR_8->eint.eintnum == VAR_2)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_6);
 VAR_9 = VAR_8->eint.eintnum;

 return FUNC_1(VAR_7->eint, VAR_9, VAR_10);
}
