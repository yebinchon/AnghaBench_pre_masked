
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct ath9k_hw_capabilities {int hw_caps; } ;
struct ath_hw {int ah_flags; TYPE_2__* eep_ops; TYPE_1__* curchan; struct ath9k_hw_capabilities caps; } ;
struct ath_common {int dummy; } ;
struct ath9k_channel {scalar_t__ channelFlags; } ;
struct TYPE_4__ {int (* set_board_values ) (struct ath_hw*,struct ath9k_channel*) ;} ;
struct TYPE_3__ {scalar_t__ channelFlags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath_hw*,struct ath9k_channel*,int) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*,struct ath9k_channel*,scalar_t__*) ;
 int FUNC_3 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_4 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_5 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_6 (struct ath_hw*) ;
 scalar_t__ FUNC_7 (struct ath_hw*,scalar_t__) ;
 int FUNC_8 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (struct ath_hw*) ;
 int FUNC_11 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_12 (struct ath_hw*) ;
 int FUNC_13 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_14 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_15 (struct ath_common*,int ,char*,scalar_t__) ;
 int FUNC_16 (struct ath_common*,char*) ;
 int FUNC_17 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_18 (int) ;

__attribute__((used)) static bool FUNC_19(struct ath_hw *VAR_6,
        struct ath9k_channel *VAR_7)
{
 struct ath_common *VAR_8 = FUNC_1(VAR_6);
 struct ath9k_hw_capabilities *VAR_9 = &VAR_6->caps;
 bool VAR_10 = 0, VAR_11 = 0;
 u8 VAR_12 = 0;
 u32 VAR_13;
 int VAR_14;

 if (VAR_9->hw_caps & VAR_2) {
  u32 VAR_15 = VAR_7->channelFlags ^ VAR_6->curchan->channelFlags;
  VAR_10 = !!(VAR_15 & VAR_3);
  VAR_11 = !!(VAR_15 & ~VAR_4);
 }

 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  if (FUNC_7(VAR_6, VAR_13)) {
   FUNC_15(VAR_8, VAR_5,
    "Transmit frames pending on queue %d\n", VAR_13);
   return 0;
  }
 }

 if (!FUNC_10(VAR_6)) {
  FUNC_16(VAR_8, "Could not kill baseband RX\n");
  return 0;
 }

 if (VAR_10 || VAR_11) {
  FUNC_6(VAR_6);
  FUNC_18(5);

  if (VAR_10)
   FUNC_5(VAR_6, VAR_7);

  if (FUNC_2(VAR_6, VAR_7, &VAR_12)) {
   FUNC_16(VAR_8, "Failed to do fast channel change\n");
   return 0;
  }
 }

 FUNC_11(VAR_6, VAR_7);

 VAR_14 = FUNC_8(VAR_6, VAR_7);
 if (VAR_14) {
  FUNC_16(VAR_8, "Failed to set channel\n");
  return 0;
 }
 FUNC_12(VAR_6);
 FUNC_0(VAR_6, VAR_7, 0);

 FUNC_13(VAR_6, VAR_7);
 FUNC_14(VAR_6, VAR_7);

 if (VAR_10 || VAR_12)
  VAR_6->eep_ops->set_board_values(VAR_6, VAR_7);

 FUNC_3(VAR_6, VAR_7);
 FUNC_9(VAR_6);

 if (VAR_10 || VAR_12) {
  VAR_6->ah_flags |= VAR_0;
  FUNC_4(VAR_6, VAR_7);
  VAR_6->ah_flags &= ~VAR_0;
 }

 return 1;
}
