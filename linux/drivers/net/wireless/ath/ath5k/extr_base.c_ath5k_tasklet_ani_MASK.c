
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_hw {int ah_cal_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath5k_hw*) ;

__attribute__((used)) static void
FUNC_1(unsigned long VAR_1)
{
 struct ath5k_hw *VAR_2 = (void *)VAR_1;

 VAR_2->ah_cal_mask |= VAR_0;
 FUNC_0(VAR_2);
 VAR_2->ah_cal_mask &= ~VAR_0;
}
