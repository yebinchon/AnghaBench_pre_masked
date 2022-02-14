
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_pfc {TYPE_2__* info; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct TYPE_3__ {scalar_t__ enum_id; } ;


 int VAR_0 ;
 struct sh_pfc* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct sh_pfc*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct sh_pfc *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = FUNC_2(VAR_3, VAR_2);

 if (VAR_4 < 0 || VAR_3->info->pins[VAR_4].enum_id == 0)
  return -VAR_0;

 return FUNC_1(VAR_2);
}
