
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pinctrl_dev {TYPE_2__* desc; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct TYPE_3__ {unsigned int number; } ;



__attribute__((used)) static int FUNC_0(struct pinctrl_dev *VAR_0,
         unsigned VAR_1,
         const unsigned **VAR_2,
         unsigned *VAR_3)
{




 *VAR_2 = &VAR_0->desc->pins[VAR_1].number;
 *VAR_3 = 1;

 return 0;
}
