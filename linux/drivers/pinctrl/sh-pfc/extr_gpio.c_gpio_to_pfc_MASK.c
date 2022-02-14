
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_pfc_chip {struct sh_pfc* pfc; } ;
struct sh_pfc {int dummy; } ;
struct gpio_chip {int dummy; } ;


 struct sh_pfc_chip* FUNC_0 (struct gpio_chip*) ;

__attribute__((used)) static struct sh_pfc *FUNC_1(struct gpio_chip *VAR_0)
{
 struct sh_pfc_chip *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->pfc;
}
