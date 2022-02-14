
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da8xx_ddrctl_setting {int name; } ;
struct da8xx_ddrctl_config_knob {int name; } ;


 int FUNC_0 (struct da8xx_ddrctl_config_knob*) ;
 struct da8xx_ddrctl_config_knob* VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static const struct da8xx_ddrctl_config_knob *
FUNC_2(const struct da8xx_ddrctl_setting *VAR_1)
{
 const struct da8xx_ddrctl_config_knob *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_2 = &VAR_0[VAR_3];

  if (FUNC_1(VAR_2->name, VAR_1->name) == 0)
   return VAR_2;
 }

 return ((void*)0);
}
