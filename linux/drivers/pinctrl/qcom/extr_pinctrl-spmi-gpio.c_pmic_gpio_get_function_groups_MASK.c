
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {TYPE_1__* desc; } ;
struct TYPE_2__ {unsigned int npins; } ;


 char** VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pinctrl_dev *VAR_1,
      unsigned VAR_2,
      const char *const **VAR_3,
      unsigned *const VAR_4)
{
 *VAR_3 = VAR_0;
 *VAR_4 = VAR_1->desc->npins;
 return 0;
}
