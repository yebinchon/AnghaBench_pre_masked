
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int gpio_mask; int gpio_val; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ath_hw*,int) ;
 int FUNC_2 (struct ath_hw*,int,int *,int ) ;
 int FUNC_3 (struct ath_hw*,int,int) ;

__attribute__((used)) static void FUNC_4(struct ath_hw *VAR_1)
{
 u32 VAR_2 = VAR_1->gpio_mask;
 int VAR_3;

 for (VAR_3 = 0; VAR_2; VAR_3++, VAR_2 >>= 1) {
  if (!(VAR_2 & 1))
   continue;

  FUNC_2(VAR_1, VAR_3, ((void*)0),
       VAR_0);
  FUNC_3(VAR_1, VAR_3, !!(VAR_1->gpio_val & FUNC_0(VAR_3)));
  FUNC_1(VAR_1, VAR_3);
 }
}
