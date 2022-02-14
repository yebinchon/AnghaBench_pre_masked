
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ num_gpio_pins; int gpio_mask; } ;
struct ath_hw {TYPE_1__ caps; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ath_hw*,scalar_t__,int,char const*) ;
 int FUNC_4 (struct ath_hw*,scalar_t__,int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ath_hw *VAR_0, u32 VAR_1, bool VAR_2,
      const char *VAR_3, u32 VAR_4)
{
 FUNC_2(VAR_1 >= VAR_0->caps.num_gpio_pins);

 if (FUNC_1(VAR_1) & VAR_0->caps.gpio_mask)
  FUNC_4(VAR_0, VAR_1, VAR_2, VAR_4);
 else if (FUNC_0(VAR_0))
  FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 else
  FUNC_2(1);
}
