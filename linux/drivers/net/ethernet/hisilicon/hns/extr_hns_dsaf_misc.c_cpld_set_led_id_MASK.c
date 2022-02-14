
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hns_mac_cb {int dev; int cpld_led_value; int cpld_ctrl_reg; int cpld_ctrl; } ;
typedef enum hnae_led_state { ____Placeholder_hnae_led_state } hnae_led_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct hns_mac_cb *VAR_4,
      enum hnae_led_state VAR_5)
{
 u32 VAR_6 = 0;
 int VAR_7;

 if (!VAR_4->cpld_ctrl)
  return 0;

 switch (VAR_5) {
 case 129:
  VAR_7 = FUNC_1(VAR_4->cpld_ctrl, VAR_4->cpld_ctrl_reg,
           &VAR_6);
  if (VAR_7)
   return VAR_7;

  FUNC_2(VAR_6, VAR_2, VAR_1);
  FUNC_3(VAR_4->cpld_ctrl, VAR_4->cpld_ctrl_reg,
      VAR_6);
  VAR_4->cpld_led_value = VAR_6;
  break;
 case 128:
  FUNC_2(VAR_4->cpld_led_value, VAR_2,
        VAR_0);
  FUNC_3(VAR_4->cpld_ctrl, VAR_4->cpld_ctrl_reg,
      VAR_4->cpld_led_value);
  break;
 default:
  FUNC_0(VAR_4->dev, "invalid led state: %d!", VAR_5);
  return -VAR_3;
 }

 return 0;
}
