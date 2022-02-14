
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl8180_priv {int xtal_in; int xtal_out; TYPE_1__* map; scalar_t__ xtal_cal; } ;
struct ieee80211_hw {int wiphy; struct rtl8180_priv* priv; } ;
struct TYPE_2__ {int TX_ANTENNA; int TX_GAIN_OFDM; int TX_GAIN_CCK; } ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ieee80211_hw*,int) ;
 int FUNC_4 (struct ieee80211_hw*,int,int) ;
 int FUNC_5 (struct ieee80211_hw*,int) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (struct rtl8180_priv*,int *) ;
 int FUNC_9 (struct rtl8180_priv*,int *,int) ;
 int FUNC_10 (struct ieee80211_hw*,int,int) ;
 int FUNC_11 (struct ieee80211_hw*,int,int) ;
 int FUNC_12 (struct ieee80211_hw*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,char*,...) ;

void FUNC_15(struct ieee80211_hw *VAR_0)
{
 struct rtl8180_priv *VAR_1 = VAR_0->priv;
 u32 VAR_2, VAR_3;
 u8 VAR_4 = 0;
 u8 VAR_5;


 FUNC_4(VAR_0, 0x00, 0x013F); FUNC_1(1);
 VAR_2 = FUNC_3(VAR_0, 0x08); FUNC_1(1);
 VAR_3 = FUNC_3(VAR_0, 0x09); FUNC_1(1);
 if (VAR_2 == 0x0818 && VAR_3 == 0x070C)
  VAR_4 = 1;

 FUNC_14(VAR_0->wiphy, "RTL8225-SE version %s\n",
  VAR_4 ? "D" : "not-D");


 FUNC_4(VAR_0, 0x00, 0x009F); FUNC_1(1);
 FUNC_4(VAR_0, 0x01, 0x06E0); FUNC_1(1);
 FUNC_4(VAR_0, 0x02, 0x004D); FUNC_1(1);
 FUNC_4(VAR_0, 0x03, 0x07F1); FUNC_1(1);
 FUNC_4(VAR_0, 0x04, 0x0975); FUNC_1(1);
 FUNC_4(VAR_0, 0x05, 0x0C72); FUNC_1(1);
 FUNC_4(VAR_0, 0x06, 0x0AE6); FUNC_1(1);
 FUNC_4(VAR_0, 0x07, 0x00CA); FUNC_1(1);
 FUNC_4(VAR_0, 0x08, 0x0E1C); FUNC_1(1);
 FUNC_4(VAR_0, 0x09, 0x02F0); FUNC_1(1);
 FUNC_4(VAR_0, 0x0A, 0x09D0); FUNC_1(1);
 FUNC_4(VAR_0, 0x0B, 0x01BA); FUNC_1(1);
 FUNC_4(VAR_0, 0x0C, 0x0640); FUNC_1(1);
 FUNC_4(VAR_0, 0x0D, 0x08DF); FUNC_1(1);
 FUNC_4(VAR_0, 0x0E, 0x0020); FUNC_1(1);
 FUNC_4(VAR_0, 0x0F, 0x0990); FUNC_1(1);

 FUNC_4(VAR_0, 0x00, 0x013F); FUNC_1(1);
 FUNC_4(VAR_0, 0x03, 0x0806); FUNC_1(1);
 FUNC_4(VAR_0, 0x04, 0x03A7); FUNC_1(1);
 FUNC_4(VAR_0, 0x05, 0x059B); FUNC_1(1);
 FUNC_4(VAR_0, 0x06, 0x0081); FUNC_1(1);
 FUNC_4(VAR_0, 0x07, 0x01A0); FUNC_1(1);
 FUNC_4(VAR_0, 0x0A, 0x0001); FUNC_1(1);
 FUNC_4(VAR_0, 0x0B, 0x0418); FUNC_1(1);
 FUNC_4(VAR_0, 0x0C, 0x0FBE); FUNC_1(1);
 FUNC_4(VAR_0, 0x0D, 0x0008); FUNC_1(1);
 if (VAR_4)
  FUNC_4(VAR_0, 0x0E, 0x0807);
 else
  FUNC_4(VAR_0, 0x0E, 0x0806);
 FUNC_1(1);
 FUNC_4(VAR_0, 0x0F, 0x0ACC); FUNC_1(1);
 FUNC_4(VAR_0, 0x00, 0x01D7); FUNC_1(1);
 FUNC_4(VAR_0, 0x03, 0x0E00); FUNC_1(1);
 FUNC_4(VAR_0, 0x04, 0x0E50); FUNC_1(1);

 FUNC_7(VAR_0);

 FUNC_4(VAR_0, 0x05, 0x0203); FUNC_1(1);
 FUNC_4(VAR_0, 0x06, 0x0200); FUNC_1(1);
 FUNC_4(VAR_0, 0x00, 0x0137); FUNC_1(11);
 FUNC_4(VAR_0, 0x0D, 0x0008); FUNC_1(11);
 FUNC_4(VAR_0, 0x00, 0x0037); FUNC_1(11);
 FUNC_4(VAR_0, 0x04, 0x0160); FUNC_1(11);
 FUNC_4(VAR_0, 0x07, 0x0080); FUNC_1(11);
 FUNC_4(VAR_0, 0x02, 0x088D); FUNC_2(221);
 FUNC_4(VAR_0, 0x00, 0x0137); FUNC_1(11);
 FUNC_4(VAR_0, 0x07, 0x0000); FUNC_1(1);
 FUNC_4(VAR_0, 0x07, 0x0180); FUNC_1(1);
 FUNC_4(VAR_0, 0x07, 0x0220); FUNC_1(1);
 FUNC_4(VAR_0, 0x07, 0x03E0); FUNC_1(1);
 FUNC_4(VAR_0, 0x06, 0x00C1); FUNC_1(1);
 FUNC_4(VAR_0, 0x0A, 0x0001); FUNC_1(1);
 if (VAR_1->xtal_cal) {
  VAR_5 = (VAR_1->xtal_in << 4) | (VAR_1->xtal_out << 1) |
        (1 << 11) | (1 << 9);
  FUNC_4(VAR_0, 0x0F, VAR_5);
  FUNC_14(VAR_0->wiphy, "Xtal cal\n");
  FUNC_1(1);
 } else {
  FUNC_14(VAR_0->wiphy, "NO Xtal cal\n");
  FUNC_4(VAR_0, 0x0F, 0x0ACC);
  FUNC_1(1);
 }

 FUNC_4(VAR_0, 0x00, 0x00BF); FUNC_1(1);
 FUNC_4(VAR_0, 0x0D, 0x08DF); FUNC_1(1);
 FUNC_4(VAR_0, 0x02, 0x004D); FUNC_1(1);
 FUNC_4(VAR_0, 0x04, 0x0975); FUNC_2(31);
 FUNC_4(VAR_0, 0x00, 0x0197); FUNC_1(1);
 FUNC_4(VAR_0, 0x05, 0x05AB); FUNC_1(1);

 FUNC_4(VAR_0, 0x00, 0x009F); FUNC_1(1);
 FUNC_4(VAR_0, 0x01, 0x0000); FUNC_1(1);
 FUNC_4(VAR_0, 0x02, 0x0000); FUNC_1(1);


 FUNC_9(VAR_1, FUNC_0(0x024E),
   FUNC_8(VAR_1, FUNC_0(0x24E)) & 0x9F);
 FUNC_10(VAR_0, 0x00, 0xC8);
 FUNC_10(VAR_0, 0x06, 0x1C);
 FUNC_10(VAR_0, 0x10, 0x78);
 FUNC_10(VAR_0, 0x2E, 0xD0);
 FUNC_10(VAR_0, 0x2F, 0x06);
 FUNC_10(VAR_0, 0x01, 0x46);


 FUNC_9(VAR_1, &VAR_1->map->TX_GAIN_CCK, 0x10);
 FUNC_9(VAR_1, &VAR_1->map->TX_GAIN_OFDM, 0x1B);

 FUNC_9(VAR_1, &VAR_1->map->TX_ANTENNA, 0x03);
 FUNC_11(VAR_0, 0x00, 0x12);

 FUNC_12(VAR_0);

 FUNC_11(VAR_0, 0x10, 0x00);

 FUNC_6(VAR_0);


 FUNC_4(VAR_0, 0x00, 0x009F); FUNC_13(500);
 FUNC_4(VAR_0, 0x04, 0x0972); FUNC_13(500);

 FUNC_4(VAR_0, 0x00, 0x009F); FUNC_13(500);
 FUNC_4(VAR_0, 0x04, 0x0972); FUNC_13(500);

 FUNC_11(VAR_0, 0x10, 0x40);
 FUNC_11(VAR_0, 0x12, 0x40);

 FUNC_5(VAR_0, 4);
}
