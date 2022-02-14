
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_hw {int led_on; int led_pin; int status; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath5k_hw*,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ath5k_hw *VAR_1)
{
 if (!FUNC_1(VAR_0, VAR_1->status))
  return;
 FUNC_0(VAR_1, VAR_1->led_pin, VAR_1->led_on);
}
