
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath9k_hw_capabilities {int gpio_mask; int num_gpio_pins; } ;
struct ath_hw {struct ath9k_hw_capabilities caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
 scalar_t__ FUNC_6 (struct ath_hw*) ;
 scalar_t__ FUNC_7 (struct ath_hw*) ;
 scalar_t__ FUNC_8 (struct ath_hw*) ;
 scalar_t__ FUNC_9 (struct ath_hw*) ;
 scalar_t__ FUNC_10 (struct ath_hw*) ;
 scalar_t__ FUNC_11 (struct ath_hw*) ;
 scalar_t__ FUNC_12 (struct ath_hw*) ;
 scalar_t__ FUNC_13 (struct ath_hw*) ;
 scalar_t__ FUNC_14 (struct ath_hw*) ;

__attribute__((used)) static void FUNC_15(struct ath_hw *VAR_32)
{
 struct ath9k_hw_capabilities *VAR_33 = &VAR_32->caps;

 if (FUNC_1(VAR_32)) {
  VAR_33->num_gpio_pins = VAR_3;
  VAR_33->gpio_mask = VAR_2;
 } else if (FUNC_0(VAR_32)) {
  VAR_33->num_gpio_pins = VAR_1;
  VAR_33->gpio_mask = VAR_0;
 } else if (FUNC_4(VAR_32)) {
  VAR_33->num_gpio_pins = VAR_9;
  VAR_33->gpio_mask = VAR_8;
 } else if (FUNC_3(VAR_32)) {
  VAR_33->num_gpio_pins = VAR_7;
  VAR_33->gpio_mask = VAR_6;
 } else if (FUNC_2(VAR_32)) {
  VAR_33->num_gpio_pins = VAR_5;
  VAR_33->gpio_mask = VAR_4;
 } else if (FUNC_5(VAR_32)) {
  VAR_33->num_gpio_pins = VAR_11;
  VAR_33->gpio_mask = VAR_10;
 } else if (FUNC_6(VAR_32)) {
  VAR_33->num_gpio_pins = VAR_13;
  VAR_33->gpio_mask = VAR_12;
 } else if (FUNC_7(VAR_32)) {
  VAR_33->num_gpio_pins = VAR_15;
  VAR_33->gpio_mask = VAR_14;
 } else if (FUNC_8(VAR_32)) {
  VAR_33->num_gpio_pins = VAR_17;
  VAR_33->gpio_mask = VAR_16;
 } else if (FUNC_9(VAR_32)) {
  VAR_33->num_gpio_pins = VAR_19;
  VAR_33->gpio_mask = VAR_18;
 } else if (FUNC_10(VAR_32)) {
  VAR_33->num_gpio_pins = VAR_21;
  VAR_33->gpio_mask = VAR_20;
 } else if (FUNC_11(VAR_32)) {
  VAR_33->num_gpio_pins = VAR_23;
  VAR_33->gpio_mask = VAR_22;
 } else if (FUNC_12(VAR_32)) {
  VAR_33->num_gpio_pins = VAR_25;
  VAR_33->gpio_mask = VAR_24;
 } else if (FUNC_13(VAR_32)) {
  VAR_33->num_gpio_pins = VAR_27;
  VAR_33->gpio_mask = VAR_26;
 } else if (FUNC_14(VAR_32)) {
  VAR_33->num_gpio_pins = VAR_29;
  VAR_33->gpio_mask = VAR_28;
 } else {
  VAR_33->num_gpio_pins = VAR_31;
  VAR_33->gpio_mask = VAR_30;
 }
}
