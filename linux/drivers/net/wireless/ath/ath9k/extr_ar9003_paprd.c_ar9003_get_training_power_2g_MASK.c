
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int paprd_target_power; struct ath9k_channel* curchan; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 unsigned int FUNC_5 (struct ath_hw*,int ,int ) ;
 unsigned int FUNC_6 (int) ;
 unsigned int FUNC_7 (struct ath_hw*,struct ath9k_channel*) ;

__attribute__((used)) static int FUNC_8(struct ath_hw *VAR_2)
{
 struct ath9k_channel *VAR_3 = VAR_2->curchan;
 unsigned int VAR_4, VAR_5, VAR_6;

 VAR_5 = FUNC_7(VAR_2, VAR_3);

 if (FUNC_0(VAR_2) || FUNC_1(VAR_2) ||
     FUNC_2(VAR_2) || FUNC_4(VAR_2)) {
  VAR_4 = VAR_2->paprd_target_power + 2;
 } else if (FUNC_3(VAR_2)) {
  VAR_4 = 25;
 } else {
  VAR_4 = FUNC_5(VAR_2, VAR_0,
           VAR_1);

  VAR_6 = FUNC_6((int) VAR_2->paprd_target_power - (int) VAR_4);
  if (VAR_6 > VAR_5)
   return -1;

  if (VAR_6 < 4)
   VAR_4 -= 4 - VAR_6;
 }

 return VAR_4;
}
