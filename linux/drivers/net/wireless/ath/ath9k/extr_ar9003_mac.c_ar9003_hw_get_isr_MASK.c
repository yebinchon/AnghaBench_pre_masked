
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ tx_intr_mitigation; scalar_t__ rx_intr_mitigation; } ;
struct ath9k_hw_capabilities {int hw_caps; } ;
struct ath_hw {void* intr_gen_timer_trigger; void* intr_gen_timer_thresh; TYPE_1__ config; struct ath9k_hw_capabilities caps; } ;
struct ath_common {int dummy; } ;
typedef enum ath9k_int { ____Placeholder_ath9k_int } ath9k_int ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*,int*) ;
 struct ath_common* FUNC_5 (struct ath_hw*) ;
 scalar_t__ FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_common*,int ,char*) ;

__attribute__((used)) static bool FUNC_8(struct ath_hw *VAR_62, enum ath9k_int *VAR_63,
         u32 *VAR_64)
{
 u32 VAR_65 = 0;
 u32 VAR_66 = 0;
 struct ath9k_hw_capabilities *VAR_67 = &VAR_62->caps;
 struct ath_common *VAR_68 = FUNC_5(VAR_62);
 u32 VAR_69 = 0, VAR_70, VAR_71 = VAR_3;
 bool VAR_72;

 if (FUNC_6(VAR_62))
  VAR_71 |= VAR_2;

 VAR_70 = FUNC_1(VAR_62, VAR_1);

 if (VAR_70 & VAR_71) {
  if ((FUNC_1(VAR_62, VAR_42) & VAR_43)
    == VAR_44)
   VAR_65 = FUNC_1(VAR_62, VAR_11);
 }


 VAR_69 = FUNC_1(VAR_62, VAR_4) & VAR_6;

 *VAR_63 = 0;

 if (!VAR_65 && !VAR_69 && !VAR_70)
  return 0;

 if (VAR_65) {
  if (VAR_65 & VAR_12) {
   u32 VAR_73;
   VAR_73 = FUNC_1(VAR_62, VAR_22);

   VAR_66 |= ((VAR_73 & VAR_29) >>
      VAR_60);
   VAR_66 |= ((VAR_73 & VAR_26) >>
      VAR_57);
   VAR_66 |= ((VAR_73 & VAR_27) >>
      VAR_58);
   VAR_66 |= ((VAR_73 & VAR_24) >>
      VAR_55);
   VAR_66 |= ((VAR_73 & VAR_28) <<
      VAR_59);
   VAR_66 |= ((VAR_73 & VAR_25) <<
      VAR_56);
   VAR_66 |= ((VAR_73 & VAR_30) >>
      VAR_61);
   VAR_66 |= ((VAR_73 & VAR_23) >>
      VAR_54);

   if (!(VAR_67->hw_caps & VAR_45)) {
    FUNC_2(VAR_62, VAR_22, VAR_73);
    VAR_65 &= ~VAR_12;
   }
  }

  if ((VAR_67->hw_caps & VAR_45))
   VAR_65 = FUNC_1(VAR_62, VAR_16);

  if (VAR_65 == 0xffffffff) {
   *VAR_63 = 0;
   return 0;
  }

  *VAR_63 = VAR_65 & VAR_47;

  if (VAR_62->config.rx_intr_mitigation)
   if (VAR_65 & (VAR_19 | VAR_18))
    *VAR_63 |= VAR_51;

  if (VAR_62->config.tx_intr_mitigation)
   if (VAR_65 & (VAR_38 | VAR_37))
    *VAR_63 |= VAR_52;

  if (VAR_65 & (VAR_15 | VAR_17))
   *VAR_63 |= VAR_51;

  if (VAR_65 & VAR_14)
   *VAR_63 |= VAR_50;

  if (VAR_65 & (VAR_39 | VAR_36 | VAR_35)) {
   *VAR_63 |= VAR_52;

   if (!(VAR_67->hw_caps & VAR_45)) {
    u32 VAR_74, VAR_75;
    VAR_74 = FUNC_1(VAR_62, VAR_20);
    FUNC_2(VAR_62, VAR_20, VAR_74);
    VAR_75 = FUNC_1(VAR_62, VAR_21);
    FUNC_2(VAR_62, VAR_21, VAR_75);

    VAR_65 &= ~(VAR_39 | VAR_36 |
      VAR_35);
   }
  }

  if (VAR_65 & VAR_13) {
   u32 VAR_76;

   if (VAR_67->hw_caps & VAR_45)
    VAR_76 = FUNC_1(VAR_62, VAR_34);
   else
    VAR_76 = FUNC_1(VAR_62, VAR_31);

   VAR_62->intr_gen_timer_trigger =
    FUNC_0(VAR_76, VAR_33);

   VAR_62->intr_gen_timer_thresh =
    FUNC_0(VAR_76, VAR_32);

   if (VAR_62->intr_gen_timer_trigger)
    *VAR_63 |= VAR_49;

   if (!(VAR_67->hw_caps & VAR_45)) {
    FUNC_2(VAR_62, VAR_31, VAR_76);
    VAR_65 &= ~VAR_13;
   }

  }

  *VAR_63 |= VAR_66;

  if (!(VAR_67->hw_caps & VAR_45)) {
   FUNC_2(VAR_62, VAR_11, VAR_65);

   (void) FUNC_1(VAR_62, VAR_11);
  }

  if (*VAR_63 & VAR_46)
   FUNC_3(VAR_62);
 }

 if (VAR_70 & VAR_2)
  FUNC_4(VAR_62, VAR_63);

 if (VAR_69) {
  if (VAR_64)
   *VAR_64 = VAR_69;
  VAR_72 =
   (VAR_69 &
    (VAR_7 | VAR_8))
   ? 1 : 0;

  if (VAR_72) {
   if (VAR_69 & VAR_7) {
    FUNC_7(VAR_68, VAR_0,
     "received PCI FATAL interrupt\n");
   }
   if (VAR_69 & VAR_8) {
    FUNC_7(VAR_68, VAR_0,
     "received PCI PERR interrupt\n");
   }
   *VAR_63 |= VAR_48;
  }

  if (VAR_69 & VAR_10) {
   FUNC_2(VAR_62, VAR_40, VAR_41);
   FUNC_2(VAR_62, VAR_40, 0);
   *VAR_63 |= VAR_48;
  }

  if (VAR_69 & VAR_9)
   FUNC_7(VAR_68, VAR_53,
    "AR_INTR_SYNC_LOCAL_TIMEOUT\n");

  FUNC_2(VAR_62, VAR_5, VAR_69);
  (void) FUNC_1(VAR_62, VAR_5);

 }
 return 1;
}
