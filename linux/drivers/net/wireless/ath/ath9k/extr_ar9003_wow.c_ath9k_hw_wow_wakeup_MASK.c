
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int wow_event_mask; int wow_event_mask2; } ;
struct ath_hw {TYPE_1__ wow; scalar_t__ is_pciexpress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_11 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_15 ;
 int FUNC_9 (struct ath_hw*,int ) ;
 int FUNC_10 (struct ath_hw*,int ,int ,int ) ;
 int FUNC_11 (struct ath_hw*,int ,int ) ;
 int FUNC_12 (struct ath_hw*,int) ;
 int FUNC_13 (struct ath_hw*) ;

u32 FUNC_14(struct ath_hw *VAR_16)
{
 u32 VAR_17 = 0;
 u32 VAR_18 = 0, VAR_19;





 VAR_19 = FUNC_9(VAR_16, VAR_14);
 VAR_18 = FUNC_7(VAR_19);






 VAR_18 &= VAR_16->wow.wow_event_mask;

 if (VAR_18) {
  if (VAR_18 & VAR_13)
   VAR_17 |= VAR_2;
  if (FUNC_6(VAR_18))
   VAR_17 |= VAR_3;
  if (VAR_18 & VAR_12)
   VAR_17 |= VAR_1;
  if (VAR_18 & VAR_11)
   VAR_17 |= VAR_0;
 }

 VAR_19 = FUNC_9(VAR_16, VAR_6);
 VAR_18 = FUNC_8(VAR_19);
 VAR_18 &= VAR_16->wow.wow_event_mask2;

 if (VAR_18) {
  if (FUNC_3(VAR_18))
   VAR_17 |= VAR_3;
 }
 FUNC_10(VAR_16, VAR_7, VAR_9,
  VAR_8);




 FUNC_11(VAR_16, VAR_14,
    FUNC_4(FUNC_9(VAR_16, VAR_14)));
 FUNC_11(VAR_16, VAR_6,
    FUNC_5(FUNC_9(VAR_16, VAR_6)));




 FUNC_11(VAR_16, VAR_10, VAR_15);
 if (VAR_16->is_pciexpress)
  FUNC_12(VAR_16, 0);

 if (FUNC_0(VAR_16) || FUNC_2(VAR_16) || FUNC_1(VAR_16)) {
  u32 VAR_20 = FUNC_9(VAR_16, VAR_5);

  if (!(VAR_20 & VAR_4))
   FUNC_13(VAR_16);
 }

 VAR_16->wow.wow_event_mask = 0;
 VAR_16->wow.wow_event_mask2 = 0;

 return VAR_17;
}
