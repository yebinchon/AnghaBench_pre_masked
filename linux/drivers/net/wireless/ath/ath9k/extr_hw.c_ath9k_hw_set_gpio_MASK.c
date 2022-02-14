
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ num_gpio_pins; int gpio_mask; int gpio_requested; } ;
struct ath_hw {TYPE_1__ caps; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ath_hw*,scalar_t__,scalar_t__,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;

void FUNC_6(struct ath_hw *VAR_2, u32 VAR_3, u32 VAR_4)
{
 FUNC_4(VAR_3 >= VAR_2->caps.num_gpio_pins);

 if (FUNC_0(VAR_2) || FUNC_1(VAR_2))
  VAR_4 = !VAR_4;
 else
  VAR_4 = !!VAR_4;

 if (FUNC_2(VAR_3) & VAR_2->caps.gpio_mask) {
  u32 VAR_5 = FUNC_0(VAR_2) ?
   VAR_0 : VAR_1;

  FUNC_3(VAR_2, VAR_5, VAR_4 << VAR_3, FUNC_2(VAR_3));
 } else if (FUNC_2(VAR_3) & VAR_2->caps.gpio_requested) {
  FUNC_5(VAR_3, VAR_4);
 } else {
  FUNC_4(1);
 }
}
