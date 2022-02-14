
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int* bf_addr; } ;
struct ath_mci_coex {TYPE_2__ gpm_buf; } ;
struct ath_softc {struct ath_hw* sc_ah; struct ath_mci_coex mci_coex; } ;
struct ath9k_hw_mci {scalar_t__ bt_state; int cont_status; } ;
struct TYPE_3__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;
struct ath_common {int op_flags; } ;


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
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;

 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_22 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ath_hw*,int*,int*) ;
 int FUNC_6 (struct ath_hw*,int*) ;
 int FUNC_7 (struct ath_hw*,int ,int ,int*,int,int,int) ;
 scalar_t__ FUNC_8 (struct ath_hw*,int ) ;
 struct ath_common* FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (struct ath_common*,int ,char*,char*,int,int) ;
 int FUNC_11 (struct ath_softc*,int,int *) ;
 int FUNC_12 (struct ath_softc*,int,int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;

void FUNC_14(struct ath_softc *VAR_32)
{
 struct ath_mci_coex *VAR_33 = &VAR_32->mci_coex;
 struct ath_hw *VAR_34 = VAR_32->sc_ah;
 struct ath_common *VAR_35 = FUNC_9(VAR_34);
 struct ath9k_hw_mci *VAR_36 = &VAR_34->btcoex_hw.mci;
 u32 VAR_37, VAR_38;
 u32 VAR_39, VAR_40, VAR_41;
 u32 *VAR_42;
 u32 VAR_43 = VAR_22;
 bool VAR_44 = 0;

 FUNC_5(VAR_32->sc_ah, &VAR_37, &VAR_38);

 if (FUNC_8(VAR_34, VAR_24) == 0) {
  FUNC_8(VAR_34, VAR_25);
  return;
 }

 if (VAR_38 & VAR_12) {
  u32 VAR_45[4] = { 0xffffffff, 0xffffffff,
       0xffffffff, 0xffffff00};






  FUNC_7(VAR_34, VAR_23, 0,
     VAR_45, 16, 1, 0);
  FUNC_7(VAR_34, VAR_31, 0,
     ((void*)0), 0, 1, 0);

  VAR_38 &= ~VAR_12;
  FUNC_8(VAR_34, VAR_29);




  FUNC_8(VAR_34, VAR_30);
 }

 if (VAR_38 & VAR_15) {
  VAR_38 &= ~VAR_15;

  if ((VAR_36->bt_state == VAR_19) &&
      (FUNC_8(VAR_34, VAR_28) !=
       VAR_19))
   FUNC_8(VAR_34, VAR_30);
 }

 if (VAR_38 & VAR_14) {
  VAR_38 &= ~VAR_14;

  if ((VAR_36->bt_state == VAR_18) &&
      (FUNC_8(VAR_34, VAR_28) !=
       VAR_18))
   VAR_36->bt_state = VAR_19;
 }

 if ((VAR_37 & VAR_5) ||
     (VAR_37 & VAR_3)) {
  FUNC_8(VAR_34, VAR_27);
  VAR_44 = 1;
 }

 if (VAR_38 & VAR_13) {
  VAR_38 &= ~VAR_13;
  FUNC_8(VAR_34, VAR_26);
 }

 if (VAR_38 & VAR_9) {
  VAR_38 &= ~VAR_9;

  while (VAR_43 == VAR_22) {
   if (FUNC_13(VAR_16, &VAR_35->op_flags))
    return;

   VAR_42 = VAR_33->gpm_buf.bf_addr;
   VAR_39 = FUNC_6(VAR_34, &VAR_43);

   if (VAR_39 == VAR_21)
    break;

   VAR_42 += (VAR_39 >> 2);





   VAR_40 = FUNC_3(VAR_42);
   VAR_41 = FUNC_1(VAR_42);

   if (VAR_44)
    goto recycle;

   if (FUNC_0(VAR_40)) {
    FUNC_11(VAR_32, VAR_40, (u8 *)VAR_42);
   } else {
    switch (VAR_40) {
    case 128:
     FUNC_12(VAR_32, VAR_41, (u8 *)VAR_42);
     break;
    default:
     break;
    }
   }
  recycle:
   FUNC_2(VAR_42);
  }
 }

 if (VAR_38 & VAR_4) {
  if (VAR_38 & VAR_10)
   VAR_38 &= ~VAR_10;

  if (VAR_38 & VAR_11)
   VAR_38 &= ~VAR_11;

  if (VAR_38 & VAR_6) {
   int VAR_46 = FUNC_4(VAR_36->cont_status,
        VAR_1);

   VAR_38 &= ~VAR_6;

   FUNC_10(VAR_35, VAR_17,
    "MCI CONT_INFO: (%s) pri = %d pwr = %d dBm\n",
    FUNC_4(VAR_36->cont_status, VAR_2) ?
    "tx" : "rx",
    FUNC_4(VAR_36->cont_status, VAR_0),
    VAR_46);
  }

  if (VAR_38 & VAR_7)
   VAR_38 &= ~VAR_7;

  if (VAR_38 & VAR_8)
   VAR_38 &= ~VAR_8;
 }

 if ((VAR_37 & VAR_5) ||
     (VAR_37 & VAR_3)) {
  VAR_37 &= ~(VAR_5 |
        VAR_3);
  FUNC_12(VAR_32, VAR_20, ((void*)0));
 }
}
