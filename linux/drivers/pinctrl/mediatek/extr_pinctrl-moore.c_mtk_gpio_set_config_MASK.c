
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct mtk_pinctrl {int eint; TYPE_2__* soc; } ;
struct TYPE_3__ {scalar_t__ eint_n; } ;
struct mtk_pin_desc {TYPE_1__ eint; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_4__ {int * pins; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct mtk_pinctrl* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_3, unsigned int VAR_4,
          unsigned long VAR_5)
{
 struct mtk_pinctrl *VAR_6 = FUNC_0(VAR_3);
 const struct mtk_pin_desc *VAR_7;
 u32 VAR_8;

 VAR_7 = (const struct mtk_pin_desc *)&VAR_6->soc->pins[VAR_4];

 if (!VAR_6->eint ||
     FUNC_3(VAR_5) != VAR_2 ||
     VAR_7->eint.eint_n == (u16)VAR_0)
  return -VAR_1;

 VAR_8 = FUNC_2(VAR_5);

 return FUNC_1(VAR_6->eint, VAR_7->eint.eint_n, VAR_8);
}
