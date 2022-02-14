
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ath_regulatory {scalar_t__ power_limit; scalar_t__ max_power_level; } ;
struct ath_hw {scalar_t__ curchan; } ;


 struct ath_regulatory* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,scalar_t__,int) ;

void FUNC_2(struct ath_hw *VAR_0, u16 VAR_1,
       u16 VAR_2, u16 *VAR_3)
{
 struct ath_regulatory *VAR_4 = FUNC_0(VAR_0);

 if (VAR_0->curchan && VAR_4->power_limit != VAR_2)
  FUNC_1(VAR_0, VAR_2, 0);


 *VAR_3 = VAR_4->max_power_level;
}
