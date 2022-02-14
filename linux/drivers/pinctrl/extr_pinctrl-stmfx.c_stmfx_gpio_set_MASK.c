
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct stmfx_pinctrl {TYPE_1__* stmfx; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int map; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 struct stmfx_pinctrl* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct stmfx_pinctrl *VAR_5 = FUNC_2(VAR_2);
 u32 VAR_6 = VAR_4 ? VAR_1 : VAR_0;
 u32 VAR_7 = FUNC_0(VAR_3);

 FUNC_3(VAR_5->stmfx->map, VAR_6 + FUNC_1(VAR_3),
     VAR_7, VAR_7);
}
