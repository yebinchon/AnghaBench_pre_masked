
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hw_caps; } ;
struct ath_hw {TYPE_1__ caps; struct ath9k_channel* curchan; } ;
struct ath_common {unsigned int clockrate; } ;
struct ath9k_channel {int dummy; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct ath9k_channel*) ;
 scalar_t__ FUNC_3 (struct ath9k_channel*) ;
 scalar_t__ FUNC_4 (struct ath9k_channel*) ;
 scalar_t__ FUNC_5 (struct ath9k_channel*) ;
 struct ath_common* FUNC_6 (struct ath_hw*) ;

__attribute__((used)) static void FUNC_7(struct ath_hw *VAR_5)
{
 struct ath_common *VAR_6 = FUNC_6(VAR_5);
 struct ath9k_channel *VAR_7 = VAR_5->curchan;
 unsigned int VAR_8;


 if (FUNC_0(VAR_5) && FUNC_1(VAR_5))
  VAR_8 = 117;
 else if (!VAR_7)
  VAR_8 = VAR_3;
 else if (FUNC_2(VAR_7))
  VAR_8 = VAR_1;
 else if (VAR_5->caps.hw_caps & VAR_4)
  VAR_8 = VAR_0;
 else
  VAR_8 = VAR_2;

 if (VAR_7) {
  if (FUNC_4(VAR_7))
   VAR_8 *= 2;
  if (FUNC_3(VAR_7))
   VAR_8 /= 2;
  if (FUNC_5(VAR_7))
   VAR_8 /= 4;
 }

 VAR_6->clockrate = VAR_8;
}
