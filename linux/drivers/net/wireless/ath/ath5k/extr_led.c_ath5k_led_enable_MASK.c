
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_hw {int led_pin; int status; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath5k_hw*,int ) ;
 int FUNC_1 (struct ath5k_hw*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

void FUNC_3(struct ath5k_hw *VAR_1)
{
 if (FUNC_2(VAR_0, VAR_1->status)) {
  FUNC_0(VAR_1, VAR_1->led_pin);
  FUNC_1(VAR_1);
 }
}
