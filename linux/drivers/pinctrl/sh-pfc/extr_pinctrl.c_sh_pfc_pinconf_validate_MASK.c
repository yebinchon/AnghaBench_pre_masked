
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_pfc_pin {int configs; } ;
struct sh_pfc {TYPE_1__* info; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;
struct TYPE_2__ {struct sh_pfc_pin* pins; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sh_pfc*,unsigned int) ;

__attribute__((used)) static bool FUNC_1(struct sh_pfc *VAR_5, unsigned int VAR_6,
        enum pin_config_param VAR_7)
{
 int VAR_8 = FUNC_0(VAR_5, VAR_6);
 const struct sh_pfc_pin *VAR_9 = &VAR_5->info->pins[VAR_8];

 switch (VAR_7) {
 case 132:
  return VAR_9->configs & VAR_4;

 case 130:
  return VAR_9->configs & VAR_3;

 case 131:
  return VAR_9->configs & VAR_2;

 case 129:
  return VAR_9->configs & VAR_0;

 case 128:
  return VAR_9->configs & VAR_1;

 default:
  return 0;
 }
}
