
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {unsigned int ngroups; char** groups; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pinctrl_dev *VAR_1,
           unsigned int VAR_2,
           const char * const **VAR_3,
           unsigned int * const VAR_4)
{
 *VAR_4 = VAR_0[VAR_2].ngroups;
 *VAR_3 = VAR_0[VAR_2].groups;

 return 0;
}
