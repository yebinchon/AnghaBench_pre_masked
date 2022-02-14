
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct phy_iq_est {int q_pwr; int i_pwr; } ;
struct nphy_iq_comp {int a0; int b0; int a1; int b1; } ;
struct nphy_ipa_txrxgain {int hpvga; int lpf_biq1; int lpf_biq0; int lna2; int lna1; size_t txpwrindex; } ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {size_t* nphy_rxcal_pwr_idx; int nphy_gmval; TYPE_1__ pubpi; int radio_chanspec; } ;
typedef size_t s8 ;
typedef int s16 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 size_t VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int,int ) ;
 int FUNC_5 (int,int) ;
 struct nphy_ipa_txrxgain* VAR_7 ;
 struct nphy_ipa_txrxgain* VAR_8 ;
 struct nphy_ipa_txrxgain* VAR_9 ;
 struct nphy_ipa_txrxgain* VAR_10 ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct brcms_phy*,int ,int,int,int ) ;
 int FUNC_8 (struct brcms_phy*,int,int,int,int ) ;
 int FUNC_9 (struct brcms_phy*,int,struct nphy_iq_comp*) ;
 int FUNC_10 (struct brcms_phy*,struct phy_iq_est*,int,int,int ) ;
 int FUNC_11 (struct brcms_phy*) ;
 int FUNC_12 (struct brcms_phy*,int ,int,int,int,int*) ;
 int FUNC_13 (struct brcms_phy*,int ,int ,int ,int,int) ;
 int FUNC_14 (struct brcms_phy*,int,size_t,int) ;

__attribute__((used)) static void
FUNC_15(struct brcms_phy *VAR_11, u8 VAR_12,
     u16 *VAR_13, u8 VAR_14)
{

 u16 VAR_15;
 struct phy_iq_est VAR_16[VAR_6];
 u8 VAR_17;
 struct nphy_iq_comp VAR_18, VAR_19;
 u32 VAR_20, VAR_21, VAR_22, VAR_23 = 0, VAR_24 = 0,
     VAR_25 = 10000;
 s16 VAR_26, VAR_27, VAR_28;
 bool VAR_29 = 0;
 u8 VAR_30 = 3;
 s8 VAR_31 = 0, VAR_32 = 0;
 s8 VAR_33 = 3;
 u8 VAR_34 = 129;
 const struct nphy_ipa_txrxgain *VAR_35;
 u16 VAR_36, VAR_37, VAR_38, VAR_39, VAR_40;
 int VAR_41;
 s8 VAR_42;
 u16 VAR_43[2];

 if (FUNC_3(VAR_11->pubpi.phy_rev, 7))
  VAR_17 = VAR_12;
 else
  VAR_17 = 1 - VAR_12;

 VAR_15 = 1024;
 VAR_26 = 13;

 FUNC_9(VAR_11, 0, &VAR_18);
 VAR_19.a0 = VAR_19.b0 = VAR_19.a1 = VAR_19.b1 = 0x0;
 FUNC_9(VAR_11, 1, &VAR_19);

 if (FUNC_1(VAR_11->radio_chanspec)) {
  if (FUNC_3(VAR_11->pubpi.phy_rev, 7))
   VAR_30 = 3;
  else if (FUNC_3(VAR_11->pubpi.phy_rev, 4))
   VAR_30 = 4;
  else
   VAR_30 = 6;
  if (FUNC_3(VAR_11->pubpi.phy_rev, 7))
   VAR_35 = VAR_10;
  else
   VAR_35 = VAR_9;
 } else {
  if (FUNC_3(VAR_11->pubpi.phy_rev, 7))
   VAR_35 = VAR_8;
  else
   VAR_35 = VAR_7;
 }

 do {

  VAR_36 = (FUNC_3(VAR_11->pubpi.phy_rev, 7)) ?
   0 : VAR_35[VAR_33].hpvga;
  VAR_37 = VAR_35[VAR_33].lpf_biq1;
  VAR_38 = VAR_35[VAR_33].lpf_biq0;
  VAR_39 = VAR_35[VAR_33].lna2;
  VAR_40 = VAR_35[VAR_33].lna1;
  VAR_42 = VAR_35[VAR_33].txpwrindex;

  if (FUNC_3(VAR_11->pubpi.phy_rev, 7))
   FUNC_7(
    VAR_11,
    VAR_1,
    ((VAR_37 << 12) |
     (VAR_38 << 8) |
     (VAR_30 << 4) | (VAR_39 << 2)
     | VAR_40), 0x3, 0);
  else
   FUNC_8(VAR_11, (0x1 << 12),
           ((VAR_36 << 12) |
            (VAR_37 << 10) |
            (VAR_38 << 8) |
            (VAR_30 << 4) |
            (VAR_39 << 2) | VAR_40), 0x3,
           0);

  VAR_11->nphy_rxcal_pwr_idx[VAR_17] = VAR_42;

  if (VAR_42 == -1) {
   VAR_43[0] = 0x8ff0 | VAR_11->nphy_gmval;
   VAR_43[1] = 0x8ff0 | VAR_11->nphy_gmval;
   FUNC_12(VAR_11, VAR_5,
       2, 0x110, 16,
       VAR_43);
  } else {
   FUNC_14(VAR_11, VAR_17 + 1, VAR_42,
       0);
  }

  FUNC_13(VAR_11, (FUNC_0(VAR_11->radio_chanspec)) ?
         VAR_4 :
         VAR_3,
         VAR_2, 0, VAR_14, 0);

  FUNC_10(VAR_11, VAR_16, VAR_15, 32, 0);
  VAR_20 = FUNC_2(VAR_16[VAR_12].i_pwr, VAR_15);
  VAR_21 = FUNC_2(VAR_16[VAR_12].q_pwr, VAR_15);
  VAR_22 = VAR_20 + VAR_21;

  switch (VAR_34) {
  case 129:
   if (VAR_22 > VAR_25) {
    VAR_34 = 130;
    VAR_32 = VAR_33;
    VAR_33--;
   } else {
    VAR_34 = 128;
    VAR_32 = VAR_33;
    VAR_33++;
   }
   break;

  case 128:
   if (VAR_22 > VAR_25) {
    VAR_29 = 1;
    VAR_23 = VAR_24;
    VAR_31 = VAR_32;
   } else {
    VAR_32 = VAR_33;
    VAR_33++;
   }
   break;

  case 130:
   if (VAR_22 > VAR_25) {
    VAR_32 = VAR_33;
    VAR_33--;
   } else {
    VAR_29 = 1;
    VAR_23 = VAR_22;
    VAR_31 = VAR_33;
   }
   break;

  default:
   break;
  }

  if ((VAR_33 < 0) ||
      (VAR_33 > VAR_0)) {
   VAR_29 = 1;
   VAR_23 = VAR_22;
   VAR_31 = VAR_32;
  } else {
   VAR_24 = VAR_22;
  }

  FUNC_11(VAR_11);
 } while (!VAR_29);

 VAR_36 = VAR_35[VAR_31].hpvga;
 VAR_37 = VAR_35[VAR_31].lpf_biq1;
 VAR_38 = VAR_35[VAR_31].lpf_biq0;
 VAR_39 = VAR_35[VAR_31].lna2;
 VAR_40 = VAR_35[VAR_31].lna1;
 VAR_42 = VAR_35[VAR_31].txpwrindex;

 VAR_27 = FUNC_6(VAR_23);
 VAR_28 = VAR_26 - VAR_27;

 if (FUNC_3(VAR_11->pubpi.phy_rev, 7)) {
  VAR_41 = (int)VAR_37 + VAR_28;

  if (VAR_41 + (int)VAR_38 > 10)
   VAR_37 = 10 - VAR_38;
  else
   VAR_37 = (u16) FUNC_4(VAR_41, 0);

  FUNC_7(
   VAR_11,
   VAR_1,
   ((VAR_37 << 12) |
    (VAR_38 << 8) |
    (VAR_30 << 4) |
    (VAR_39 << 2) | VAR_40), 0x3,
   0);
 } else {
  VAR_36 = (u16) FUNC_4(FUNC_5(((int)VAR_36) + VAR_28, 10), 0);
  FUNC_8(VAR_11, (0x1 << 12),
          ((VAR_36 << 12) |
           (VAR_37 << 10) |
           (VAR_38 << 8) |
           (VAR_30 << 4) |
           (VAR_39 << 2) |
           VAR_40), 0x3, 0);
 }

 if (VAR_13 != ((void*)0)) {
  *VAR_13++ = VAR_40;
  *VAR_13++ = VAR_39;
  *VAR_13++ = VAR_30;
  *VAR_13++ = VAR_38;
  *VAR_13++ = VAR_37;
  *VAR_13 = VAR_36;
 }

 FUNC_9(VAR_11, 1, &VAR_18);
}
