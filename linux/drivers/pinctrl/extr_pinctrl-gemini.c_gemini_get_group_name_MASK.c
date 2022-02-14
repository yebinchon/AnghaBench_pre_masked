
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct gemini_pmx {scalar_t__ is_3516; scalar_t__ is_3512; } ;
struct TYPE_4__ {char const* name; } ;
struct TYPE_3__ {char const* name; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct gemini_pmx* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static const char *FUNC_1(struct pinctrl_dev *VAR_2,
      unsigned int VAR_3)
{
 struct gemini_pmx *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->is_3512)
  return VAR_0[VAR_3].name;
 if (VAR_4->is_3516)
  return VAR_1[VAR_3].name;
 return ((void*)0);
}
