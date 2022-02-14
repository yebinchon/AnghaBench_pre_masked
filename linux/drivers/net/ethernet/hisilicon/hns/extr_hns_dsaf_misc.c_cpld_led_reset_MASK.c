
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_mac_cb {int cpld_led_value; int cpld_ctrl_reg; int cpld_ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hns_mac_cb *VAR_1)
{
 if (!VAR_1 || !VAR_1->cpld_ctrl)
  return;

 FUNC_0(VAR_1->cpld_ctrl, VAR_1->cpld_ctrl_reg,
     VAR_0);
 VAR_1->cpld_led_value = VAR_0;
}
