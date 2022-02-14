
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_pin_ctrl {int type; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;
 int VAR_1 ;
__attribute__((used)) static bool FUNC_0(struct rockchip_pin_ctrl *VAR_2,
     enum pin_config_param VAR_3)
{
 switch (VAR_2->type) {
 case 135:
 case 133:
  return (VAR_3 == VAR_1 ||
     VAR_3 == VAR_0);
 case 134:
  return VAR_3 ? 0 : 1;
 case 136:
 case 128:
 case 132:
 case 131:
 case 130:
 case 129:
  return (VAR_3 != VAR_1);
 }

 return 0;
}
