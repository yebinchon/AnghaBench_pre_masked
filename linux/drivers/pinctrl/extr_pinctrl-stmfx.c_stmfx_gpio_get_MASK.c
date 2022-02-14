
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stmfx_pinctrl {TYPE_1__* stmfx; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int map; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 struct stmfx_pinctrl* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int ,int,int*) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 struct stmfx_pinctrl *VAR_3 = FUNC_2(VAR_1);
 u32 VAR_4 = VAR_0 + FUNC_1(VAR_2);
 u32 VAR_5 = FUNC_0(VAR_2);
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_3->stmfx->map, VAR_4, &VAR_6);

 return VAR_7 ? VAR_7 : !!(VAR_6 & VAR_5);
}
