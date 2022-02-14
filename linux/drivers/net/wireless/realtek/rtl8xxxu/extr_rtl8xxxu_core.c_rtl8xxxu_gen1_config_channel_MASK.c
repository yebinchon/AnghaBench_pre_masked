
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl8xxxu_priv {int rf_paths; } ;
struct TYPE_5__ {int width; TYPE_1__* chan; int center_freq1; } ;
struct TYPE_6__ {TYPE_2__ chandef; } ;
struct ieee80211_hw {TYPE_3__ conf; struct rtl8xxxu_priv* priv; } ;
struct TYPE_4__ {int hw_value; int center_freq; } ;


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
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_1 (struct rtl8xxxu_priv*,scalar_t__) ;
 int FUNC_2 (struct rtl8xxxu_priv*,int,int ) ;
 int FUNC_3 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_4 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_5 (struct rtl8xxxu_priv*,scalar_t__,int) ;
 int FUNC_6 (struct rtl8xxxu_priv*,int,int ,int) ;

void FUNC_7(struct ieee80211_hw *VAR_28)
{
 struct rtl8xxxu_priv *VAR_29 = VAR_28->priv;
 u32 VAR_30, VAR_31;
 u8 VAR_32, VAR_33;
 bool VAR_34 = 1;
 int VAR_35, VAR_36;
 int VAR_37;

 VAR_33 = FUNC_1(VAR_29, VAR_11);
 VAR_31 = FUNC_0(VAR_29, VAR_19);
 VAR_36 = VAR_28->conf.chandef.chan->hw_value;

 switch (VAR_28->conf.chandef.width) {
 case 129:
  VAR_34 = 0;

 case 130:
  VAR_33 |= VAR_0;
  FUNC_5(VAR_29, VAR_11, VAR_33);

  VAR_30 = FUNC_0(VAR_29, VAR_15);
  VAR_30 &= ~VAR_5;
  FUNC_4(VAR_29, VAR_15, VAR_30);

  VAR_30 = FUNC_0(VAR_29, VAR_16);
  VAR_30 &= ~VAR_5;
  FUNC_4(VAR_29, VAR_16, VAR_30);

  VAR_30 = FUNC_0(VAR_29, VAR_13);
  VAR_30 |= VAR_2;
  FUNC_4(VAR_29, VAR_13, VAR_30);
  break;
 case 128:
  if (VAR_28->conf.chandef.center_freq1 >
      VAR_28->conf.chandef.chan->center_freq) {
   VAR_35 = 1;
   VAR_36 += 2;
  } else {
   VAR_35 = 0;
   VAR_36 -= 2;
  }

  VAR_33 &= ~VAR_0;
  FUNC_5(VAR_29, VAR_11, VAR_33);
  VAR_31 &= ~VAR_25;
  if (VAR_35)
   VAR_31 |= VAR_27;
  else
   VAR_31 |= VAR_26;
  FUNC_4(VAR_29, VAR_19, VAR_31);

  VAR_30 = FUNC_0(VAR_29, VAR_15);
  VAR_30 |= VAR_5;
  FUNC_4(VAR_29, VAR_15, VAR_30);

  VAR_30 = FUNC_0(VAR_29, VAR_16);
  VAR_30 |= VAR_5;
  FUNC_4(VAR_29, VAR_16, VAR_30);





  VAR_30 = FUNC_0(VAR_29, VAR_12);
  VAR_30 &= ~VAR_1;
  if (!VAR_35)
   VAR_30 |= VAR_1;
  FUNC_4(VAR_29, VAR_12, VAR_30);

  VAR_30 = FUNC_0(VAR_29, VAR_17);
  VAR_30 &= ~VAR_10;
  if (VAR_35)
   VAR_30 |= VAR_9;
  else
   VAR_30 |= VAR_8;
  FUNC_4(VAR_29, VAR_17, VAR_30);

  VAR_30 = FUNC_0(VAR_29, VAR_13);
  VAR_30 &= ~VAR_2;
  FUNC_4(VAR_29, VAR_13, VAR_30);

  VAR_30 = FUNC_0(VAR_29, VAR_14);
  VAR_30 &= ~(VAR_3 | VAR_4);
  if (VAR_35)
   VAR_30 |= VAR_4;
  else
   VAR_30 |= VAR_3;
  FUNC_4(VAR_29, VAR_14, VAR_30);
  break;

 default:
  break;
 }

 for (VAR_37 = VAR_24; VAR_37 < VAR_29->rf_paths; VAR_37++) {
  VAR_30 = FUNC_2(VAR_29, VAR_37, VAR_23);
  VAR_30 &= ~VAR_7;
  VAR_30 |= VAR_36;
  FUNC_6(VAR_29, VAR_37, VAR_23, VAR_30);
 }

 if (VAR_34)
  VAR_32 = 0x0e;
 else
  VAR_32 = 0x0a;

 FUNC_5(VAR_29, VAR_20 + 1, VAR_32);
 FUNC_5(VAR_29, VAR_21 + 1, VAR_32);

 FUNC_3(VAR_29, VAR_18, 0x0808);
 FUNC_3(VAR_29, VAR_22, 0x0a0a);

 for (VAR_37 = VAR_24; VAR_37 < VAR_29->rf_paths; VAR_37++) {
  VAR_30 = FUNC_2(VAR_29, VAR_37, VAR_23);
  if (VAR_28->conf.chandef.width == 128)
   VAR_30 &= ~VAR_6;
  else
   VAR_30 |= VAR_6;
  FUNC_6(VAR_29, VAR_37, VAR_23, VAR_30);
 }
}
