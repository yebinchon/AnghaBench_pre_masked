
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ieee80211_hw {int wiphy; struct adm8211_priv* priv; } ;
struct adm8211_priv {int ant_power; int tx_power; int lpf_cutoff; int lnags_threshold; int transceiver_type; scalar_t__ bbp_type; TYPE_2__* eeprom; TYPE_1__* pdev; } ;
struct TYPE_4__ {int* antenna_power; int* tx_power; int* lpf_cutoff; int* lnags_threshold; int cr28; int cr29; int cr49; } ;
struct TYPE_3__ {scalar_t__ revision; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;

 int FUNC_3 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
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
 int FUNC_4 (struct ieee80211_hw*,int,int) ;
 int FUNC_5 (struct ieee80211_hw*,int,int) ;
 int FUNC_6 (struct ieee80211_hw*,int ,int) ;
 int FUNC_7 (struct ieee80211_hw*,int,int const) ;
 int FUNC_8 (struct ieee80211_hw*,int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct ieee80211_hw *VAR_26, unsigned int VAR_27)
{
 static const u32 VAR_28[] =
  {0x22BD, 0x22D2, 0x22E8, 0x22FE, 0x2314, 0x232A, 0x2340,
   0x2355, 0x236B, 0x2381, 0x2397, 0x23AD, 0x23C2, 0x23F7};
 static const u32 VAR_29[] =
  {0x05D17, 0x3A2E8, 0x2E8BA, 0x22E8B, 0x1745D, 0x0BA2E, 0x00000,
   0x345D1, 0x28BA2, 0x1D174, 0x11745, 0x05D17, 0x3A2E8, 0x11745};

 struct adm8211_priv *VAR_30 = VAR_26->priv;
 u8 VAR_31 = VAR_30->ant_power > 0x3F ?
  VAR_30->eeprom->antenna_power[VAR_27 - 1] : VAR_30->ant_power;
 u8 VAR_32 = VAR_30->tx_power > 0x3F ?
  VAR_30->eeprom->tx_power[VAR_27 - 1] : VAR_30->tx_power;
 u8 VAR_33 = VAR_30->lpf_cutoff == 0xFF ?
  VAR_30->eeprom->lpf_cutoff[VAR_27 - 1] : VAR_30->lpf_cutoff;
 u8 VAR_34 = VAR_30->lnags_threshold == 0xFF ?
  VAR_30->eeprom->lnags_threshold[VAR_27 - 1] : VAR_30->lnags_threshold;
 u32 VAR_35;

 FUNC_2();


 switch (VAR_30->transceiver_type) {
 case 129:
 case 128:
  FUNC_7(VAR_26, 0x00, 0x04007);
  FUNC_7(VAR_26, 0x02, 0x00033);

  FUNC_7(VAR_26, 0x05,
   VAR_28[VAR_27 - 1]);
  FUNC_7(VAR_26, 0x06,
   VAR_29[VAR_27 - 1]);
  break;

 case 130:
  FUNC_6(VAR_26, VAR_17,
           VAR_18);
  FUNC_6(VAR_26, VAR_20,
           VAR_21 |
           VAR_22);
  FUNC_6(VAR_26, VAR_19, 0);
  FUNC_6(VAR_26, VAR_23,
           (VAR_27 == 14 ?
            2110 : (2033 + (VAR_27 * 5))));
  FUNC_6(VAR_26, VAR_15, 1496);
  FUNC_6(VAR_26, VAR_24, 44);
  FUNC_6(VAR_26, VAR_16, 44);
  break;

 case 131:
  FUNC_5(VAR_26, 0x3,
   (VAR_27 == 14 ? 0x054 : (0x7 + (VAR_27 * 5))));
  break;

 case 132:
  FUNC_4(VAR_26, 0x0,
   (VAR_27 == 14 ? 0x229B4 : (0x22967 + (VAR_27 * 5))));
  break;

 default:
  FUNC_11(VAR_26->wiphy, "unsupported transceiver type %d\n",
       VAR_30->transceiver_type);
  break;
 }


 if (VAR_30->bbp_type == VAR_8) {



 if (VAR_30->transceiver_type == 130) {
  VAR_35 = FUNC_0(VAR_10);
  VAR_35 &= 0xfffc0000;
  VAR_35 |= VAR_0;
  if (VAR_27 != 14)
   VAR_35 |= VAR_1;
  FUNC_1(VAR_10, VAR_35);
 }

 if (VAR_30->transceiver_type == 129) {

  FUNC_7(VAR_26, 0x0B, 0x07100);

  VAR_35 = FUNC_9(VAR_30->eeprom->cr49);
  VAR_35 >>= 13;
  VAR_35 <<= 15;
  VAR_35 |= VAR_31 << 9;
  FUNC_7(VAR_26, 0x0A, VAR_35);

  FUNC_7(VAR_26, 0x09, 0x00050 |
   (VAR_30->pdev->revision < VAR_3 ? VAR_32 : 0));
 } else {
  VAR_35 = FUNC_0(VAR_11);
  VAR_35 &= 0xff00ffff;
  VAR_35 |= VAR_32 << 18;
  FUNC_1(VAR_11, VAR_35);
 }

 FUNC_1(VAR_25, VAR_6 |
     VAR_4 | VAR_5);
 FUNC_0(VAR_25);
 FUNC_10(30);


 if (VAR_30->transceiver_type != 129)
  FUNC_8(VAR_26, VAR_14,
      VAR_32<<2);
 FUNC_8(VAR_26, VAR_13, VAR_33);
 FUNC_8(VAR_26, VAR_12, VAR_34);
 FUNC_8(VAR_26, 0x1c, VAR_30->pdev->revision == VAR_2 ?
         VAR_30->eeprom->cr28 : 0);
 FUNC_8(VAR_26, 0x1d, VAR_30->eeprom->cr29);

 FUNC_1(VAR_25, 0);


 } else if (VAR_30->bbp_type != VAR_7)
  FUNC_11(VAR_26->wiphy, "unsupported BBP type %d\n",
       VAR_30->bbp_type);

 FUNC_3();


 VAR_35 = FUNC_0(VAR_9);
 VAR_35 &= ~0xF;
 VAR_35 |= VAR_27;
 FUNC_1(VAR_9, VAR_35);

 return 0;
}
