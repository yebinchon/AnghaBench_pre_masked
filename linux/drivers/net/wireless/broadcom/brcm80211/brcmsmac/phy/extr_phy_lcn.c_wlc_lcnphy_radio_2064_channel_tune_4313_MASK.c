
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct chan_info_2064_lcnphy {int chan; int const logen_buftune; int logen_rccr_tx; int txrf_mix_tune_ctrl; int pa_input_tune_g; int logen_rccr_rx; int pa_rxrf_lna1_freq_tune; int pa_rxrf_lna2_freq_tune; int const rxrf_rxrf_spare1; int freq; } ;
struct TYPE_3__ {int phy_rev; } ;
struct brcms_phy {int xtalfreq; TYPE_2__* sh; TYPE_1__ pubpi; int radio_chanspec; } ;
typedef int s32 ;
struct TYPE_4__ {int boardflags; } ;


 size_t FUNC_0 (struct chan_info_2064_lcnphy*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
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
 struct chan_info_2064_lcnphy* VAR_42 ;
 int FUNC_3 (struct brcms_phy*,int ,int,int) ;
 int FUNC_4 (struct brcms_phy*,int ,int) ;
 scalar_t__ FUNC_5 (struct brcms_phy*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct brcms_phy*) ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 (struct brcms_phy*,int ,int const) ;

__attribute__((used)) static void
FUNC_10(struct brcms_phy *VAR_43, u8 VAR_44)
{
 uint VAR_45;
 const struct chan_info_2064_lcnphy *VAR_46;
 u8 VAR_47 = 0;
 u8 VAR_48, VAR_49;
 s32 VAR_50, VAR_51, VAR_52, VAR_53;
 u8 VAR_54, VAR_55, VAR_56, VAR_57, VAR_58;
 u32 VAR_59, VAR_60, VAR_61, VAR_62, VAR_63, VAR_64;
 u16 VAR_65, VAR_66, VAR_67;

 u8 VAR_68, VAR_69, VAR_70, VAR_71, VAR_72;
 u16 VAR_73, VAR_74;

 VAR_46 = &VAR_42[0];
 VAR_47 = 1;

 FUNC_3(VAR_43, VAR_39, 0x4, 0x1 << 2);

 FUNC_9(VAR_43, VAR_40, 0xf);
 if (!VAR_47) {
  VAR_65 = VAR_12;
  VAR_66 = VAR_8;
 } else {
  VAR_65 = VAR_13;
  VAR_66 = VAR_9;
 }

 if (FUNC_1(VAR_43->radio_chanspec)) {
  for (VAR_45 = 0; VAR_45 < FUNC_0(VAR_42); VAR_45++)
   if (VAR_42[VAR_45].chan == VAR_44)
    break;

  if (VAR_45 >= FUNC_0(VAR_42))
   return;

  VAR_46 = &VAR_42[VAR_45];
 }

 FUNC_9(VAR_43, VAR_17, VAR_46->logen_buftune);

 FUNC_3(VAR_43, VAR_18, 0x3, VAR_46->logen_rccr_tx);

 FUNC_3(VAR_43, VAR_38, 0x3, VAR_46->txrf_mix_tune_ctrl);

 FUNC_3(VAR_43, VAR_19, 0xf, VAR_46->pa_input_tune_g);

 FUNC_3(VAR_43, VAR_18, 0x3 << 2,
        (VAR_46->logen_rccr_rx) << 2);

 FUNC_3(VAR_43, VAR_36, 0xf, VAR_46->pa_rxrf_lna1_freq_tune);

 FUNC_3(VAR_43, VAR_36, (0xf) << 4,
        (VAR_46->pa_rxrf_lna2_freq_tune) << 4);

 FUNC_9(VAR_43, VAR_37, VAR_46->rxrf_rxrf_spare1);

 VAR_48 = (u8) FUNC_5(VAR_43, VAR_26);
 VAR_49 = (u8) FUNC_5(VAR_43, VAR_41);

 FUNC_4(VAR_43, VAR_26, 0x07);

 FUNC_4(VAR_43, VAR_41, (0x07) << 1);
 VAR_57 = 0;
 VAR_58 = 0;

 VAR_62 = VAR_47 ? (VAR_43->xtalfreq << 1) : (VAR_43->xtalfreq);
 if (VAR_43->xtalfreq > 26000000)
  VAR_57 = 1;
 if (VAR_43->xtalfreq > 52000000)
  VAR_58 = 1;
 if (VAR_57 == 0)
  VAR_64 = 1;
 else if (VAR_58 == 0)
  VAR_64 = 2;
 else
  VAR_64 = 4;
 VAR_61 = (VAR_46->freq * 3);
 VAR_63 = 2 * VAR_62;

 VAR_50 = FUNC_8(VAR_43->xtalfreq, VAR_16, 16);
 VAR_51 = FUNC_8(VAR_62, VAR_16, 16);
 VAR_53 = VAR_43->xtalfreq * VAR_64 / VAR_16;
 VAR_52 = FUNC_8(VAR_61, 2, 16);

 FUNC_9(VAR_43, VAR_31, 0x02);

 VAR_54 = (VAR_43->xtalfreq * VAR_64 * 4 / 5) / VAR_16 - 1;
 FUNC_9(VAR_43, VAR_33, (0x07 & (VAR_54 >> 2)));
 FUNC_9(VAR_43, VAR_34, (VAR_54 & 0x3) << 5);

 VAR_55 = (VAR_53 * 8 / (VAR_54 + 1)) - 1;
 FUNC_9(VAR_43, VAR_32, VAR_55);

 VAR_56 = ((VAR_55 + 1) * (VAR_54 + 1)) / VAR_53;
 VAR_67 = VAR_56 * 3 * (VAR_46->freq) / 32 - 1;
 FUNC_3(VAR_43, VAR_34, (0x0f << 0),
        (u8) (VAR_67 >> 8));

 FUNC_4(VAR_43, VAR_34, 0x10);
 FUNC_9(VAR_43, VAR_35, (u8) (VAR_67 & 0xff));

 VAR_59 = ((VAR_61 * (VAR_16 >> 4)) / VAR_63) << 4;

 VAR_60 = ((VAR_61 * (VAR_16 >> 4)) % VAR_63) << 4;
 while (VAR_60 >= VAR_63) {
  VAR_59++;
  VAR_60 -= VAR_63;
 }
 VAR_60 = FUNC_8(VAR_60, VAR_63, 20);

 FUNC_3(VAR_43, VAR_27, (0x1f << 0),
        (u8) (VAR_59 >> 4));
 FUNC_3(VAR_43, VAR_28, (0x1f << 4),
        (u8) (VAR_59 << 4));
 FUNC_3(VAR_43, VAR_28, (0x0f << 0),
        (u8) (VAR_60 >> 16));
 FUNC_9(VAR_43, VAR_29, (u8) (VAR_60 >> 8) & 0xff);
 FUNC_9(VAR_43, VAR_30, (u8) VAR_60 & 0xff);

 FUNC_9(VAR_43, VAR_22, 0xfb);

 FUNC_9(VAR_43, VAR_23, 0x9A);
 FUNC_9(VAR_43, VAR_24, 0xA3);
 FUNC_9(VAR_43, VAR_25, 0x0C);

 VAR_68 = VAR_1 / VAR_65;
 VAR_74 = (((VAR_10 - VAR_14) *
  (VAR_61 / 2 - VAR_15)) /
        (VAR_11 - VAR_15))
       + VAR_14;
 VAR_69 = (VAR_74 * 10) / VAR_7;
 VAR_70 = (VAR_66 - VAR_6) / VAR_4;
 VAR_73 = VAR_6 + (VAR_70 * VAR_4);
 VAR_71 = (VAR_73 * 10) / VAR_2;
 VAR_72 = ((VAR_3 * VAR_68 * VAR_5 * 100) / VAR_69) / VAR_71;
 FUNC_3(VAR_43, VAR_20, 0x3f, VAR_72);

 if (VAR_44 >= 1 && VAR_44 <= 5)
  FUNC_9(VAR_43, VAR_20, 0x8);
 else
  FUNC_9(VAR_43, VAR_20, 0x7);
 FUNC_9(VAR_43, VAR_21, 0x3);

 FUNC_3(VAR_43, VAR_26, 0x0c, 0x0c);
 FUNC_6(1);

 FUNC_7(VAR_43);

 FUNC_9(VAR_43, VAR_26, VAR_48);
 FUNC_9(VAR_43, VAR_41, VAR_49);
 if (FUNC_2(VAR_43->pubpi.phy_rev, 1)) {
  FUNC_9(VAR_43, VAR_19, 3);
  FUNC_9(VAR_43, VAR_38, 7);
 }

 if (!(VAR_43->sh->boardflags & VAR_0)) {
  static const u8 VAR_75[14] = {
   0xd, 0xe, 0xd, 0xd, 0xd, 0xc, 0xa,
   0xb, 0xb, 0x3, 0x3, 0x2, 0x0, 0x0
  };

  FUNC_9(VAR_43, VAR_17, 0xf);
  FUNC_9(VAR_43, VAR_38, 0x3);
  FUNC_9(VAR_43, VAR_19, 0x3);

  FUNC_9(VAR_43, VAR_19, VAR_75[VAR_44 - 1]);
 }
}
