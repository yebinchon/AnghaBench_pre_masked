
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmic_mpp_state {int dummy; } ;
struct pmic_mpp_pad {unsigned int function; unsigned int is_enabled; } ;
struct pinctrl_dev {TYPE_2__* desc; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct TYPE_3__ {struct pmic_mpp_pad* drv_data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct pmic_mpp_state* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (struct pmic_mpp_state*,struct pmic_mpp_pad*,int ,unsigned int) ;
 int FUNC_2 (struct pmic_mpp_state*,struct pmic_mpp_pad*) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_2, unsigned VAR_3,
    unsigned VAR_4)
{
 struct pmic_mpp_state *VAR_5 = FUNC_0(VAR_2);
 struct pmic_mpp_pad *VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 VAR_6 = VAR_2->desc->pins[VAR_4].drv_data;

 VAR_6->function = VAR_3;

 VAR_8 = FUNC_2(VAR_5, VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = VAR_6->is_enabled << VAR_1;

 return FUNC_1(VAR_5, VAR_6, VAR_0, VAR_7);
}
