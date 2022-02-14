
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct ath9k_hw_mci {scalar_t__ gpm_buf; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__*,int ) ;
 scalar_t__ FUNC_4 (scalar_t__*) ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (struct ath_hw*,scalar_t__*) ;
 int FUNC_6 (struct ath_hw*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_7 (struct ath_hw*,int ,int ,scalar_t__*,int,int,int) ;
 int FUNC_8 (struct ath_hw*,int ,int ,int) ;
 struct ath_common* FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (struct ath_common*,int ,char*,scalar_t__) ;

__attribute__((used)) static u32 FUNC_11(struct ath_hw *VAR_11, u8 VAR_12,
       u8 VAR_13, int VAR_14)
{
 struct ath_common *VAR_15 = FUNC_9(VAR_11);
 struct ath9k_hw_mci *VAR_16 = &VAR_11->btcoex_hw.mci;
 u32 *VAR_17 = ((void*)0), VAR_18 = 0, VAR_19;
 u32 VAR_20;
 u8 VAR_21 = 0, VAR_22 = 0;
 bool VAR_23 = (VAR_12 == VAR_4);

 VAR_19 = VAR_14 ? VAR_9 : VAR_8;

 while (VAR_14 > 0) {
  if (VAR_17) {
   FUNC_2(VAR_17);
   VAR_17 = ((void*)0);
  }

  if (VAR_19 != VAR_8)
   VAR_14 = FUNC_8(VAR_11,
     VAR_1,
     VAR_0,
     VAR_14);

  if (!VAR_14)
   break;

  VAR_20 = FUNC_5(VAR_11, &VAR_19);

  if (VAR_20 == VAR_7)
   continue;

  VAR_17 = (u32 *) (VAR_16->gpm_buf + VAR_20);
  VAR_21 = FUNC_4(VAR_17);
  VAR_22 = FUNC_1(VAR_17);

  if (FUNC_0(VAR_21)) {
   if (VAR_21 == VAR_12) {
    if ((VAR_12 == VAR_4) &&
        !VAR_23) {
     VAR_12 = VAR_5;
     continue;
    }
    break;
   }
  } else if ((VAR_21 == VAR_12) &&
      (VAR_22 == VAR_13))
   break;
  if ((VAR_12 == VAR_5) &&
      (VAR_21 == VAR_6)) {

   u32 VAR_24[4] = {0, 0, 0, 0};

   VAR_12 = VAR_4;
   FUNC_3(VAR_24,
          VAR_10);
   FUNC_7(VAR_11, VAR_3, 0, VAR_24, 16,
      0, 0);
   continue;
  } else {
   FUNC_10(VAR_15, VAR_2, "MCI GPM subtype not match 0x%x\n",
    *(VAR_17 + 1));
   VAR_18++;
   FUNC_6(VAR_11, VAR_21,
           VAR_22, VAR_17);
  }
 }

 if (VAR_17) {
  FUNC_2(VAR_17);
  VAR_17 = ((void*)0);
 }

 if (VAR_14 <= 0)
  VAR_14 = 0;

 while (VAR_19 == VAR_8) {
  VAR_20 = FUNC_5(VAR_11, &VAR_19);
  if (VAR_20 == VAR_7)
   break;

  VAR_17 = (u32 *) (VAR_16->gpm_buf + VAR_20);
  VAR_21 = FUNC_4(VAR_17);
  VAR_22 = FUNC_1(VAR_17);

  if (!FUNC_0(VAR_21))
   FUNC_6(VAR_11, VAR_21,
           VAR_22, VAR_17);

  FUNC_2(VAR_17);
 }

 return VAR_14;
}
