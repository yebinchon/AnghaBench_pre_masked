
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int ia_rows; } ;
struct ath_hw {TYPE_1__ iniModes_9271_ANI_reg; } ;
struct ath9k_channel {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ath9k_channel*) ;
 scalar_t__ FUNC_3 (struct ath9k_channel*) ;
 int FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ath_hw*,scalar_t__) ;
 int FUNC_6 (struct ath_hw*,scalar_t__,scalar_t__) ;

void FUNC_7(struct ath_hw *VAR_2, struct ath9k_channel *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 if (FUNC_2(VAR_3))
  VAR_4 = FUNC_3(VAR_3) ? 2 : 1;
 else
  VAR_4 = FUNC_3(VAR_3) ? 3 : 4;

 FUNC_0(VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_2->iniModes_9271_ANI_reg.ia_rows; VAR_5++) {
  u32 VAR_6 = FUNC_1(&VAR_2->iniModes_9271_ANI_reg, VAR_5, 0);
  u32 VAR_7 = FUNC_1(&VAR_2->iniModes_9271_ANI_reg, VAR_5, VAR_4);
  u32 VAR_8;

  if (VAR_6 == VAR_0) {
   VAR_8 = FUNC_5(VAR_2, VAR_6);
   VAR_7 &= VAR_1;
   VAR_8 &= ~VAR_1;

   FUNC_6(VAR_2, VAR_6, VAR_7|VAR_8);
  } else
   FUNC_6(VAR_2, VAR_6, VAR_7);
 }

 FUNC_4(VAR_2);
}
