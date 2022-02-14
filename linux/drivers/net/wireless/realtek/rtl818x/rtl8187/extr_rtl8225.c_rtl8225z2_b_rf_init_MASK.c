
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8187_priv {TYPE_1__* map; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;
struct TYPE_2__ {int TX_ANTENNA; int TX_GAIN_OFDM; int TX_GAIN_CCK; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct rtl8187_priv*,int *,int) ;
 int FUNC_2 (struct ieee80211_hw*,int,int) ;
 int FUNC_3 (struct ieee80211_hw*,int,int) ;
 int FUNC_4 (struct ieee80211_hw*,int,int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_3)
{
 struct rtl8187_priv *VAR_4 = VAR_3->priv;
 int VAR_5;

 FUNC_2(VAR_3, 0x0, 0x0B7);
 FUNC_2(VAR_3, 0x1, 0xEE0);
 FUNC_2(VAR_3, 0x2, 0x44D);
 FUNC_2(VAR_3, 0x3, 0x441);
 FUNC_2(VAR_3, 0x4, 0x8C3);
 FUNC_2(VAR_3, 0x5, 0xC72);
 FUNC_2(VAR_3, 0x6, 0x0E6);
 FUNC_2(VAR_3, 0x7, 0x82A);
 FUNC_2(VAR_3, 0x8, 0x03F);
 FUNC_2(VAR_3, 0x9, 0x335);
 FUNC_2(VAR_3, 0xa, 0x9D4);
 FUNC_2(VAR_3, 0xb, 0x7BB);
 FUNC_2(VAR_3, 0xc, 0x850);
 FUNC_2(VAR_3, 0xd, 0xCDF);
 FUNC_2(VAR_3, 0xe, 0x02B);
 FUNC_2(VAR_3, 0xf, 0x114);

 FUNC_2(VAR_3, 0x0, 0x1B7);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  FUNC_2(VAR_3, 0x1, VAR_5 + 1);
  FUNC_2(VAR_3, 0x2, VAR_2[VAR_5]);
 }

 FUNC_2(VAR_3, 0x3, 0x080);
 FUNC_2(VAR_3, 0x5, 0x004);
 FUNC_2(VAR_3, 0x0, 0x0B7);

 FUNC_2(VAR_3, 0x2, 0xC4D);

 FUNC_2(VAR_3, 0x2, 0x44D);
 FUNC_2(VAR_3, 0x0, 0x2BF);

 FUNC_1(VAR_4, &VAR_4->map->TX_GAIN_CCK, 0x03);
 FUNC_1(VAR_4, &VAR_4->map->TX_GAIN_OFDM, 0x07);
 FUNC_1(VAR_4, &VAR_4->map->TX_ANTENNA, 0x03);

 FUNC_4(VAR_3, 0x80, 0x12);
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  FUNC_4(VAR_3, 0xF, VAR_0[VAR_5]);
  FUNC_4(VAR_3, 0xE, 0x80 + VAR_5);
  FUNC_4(VAR_3, 0xE, 0);
 }
 FUNC_4(VAR_3, 0x80, 0x10);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++)
  FUNC_4(VAR_3, VAR_5, VAR_1[VAR_5]);

 FUNC_4(VAR_3, 0x97, 0x46);
 FUNC_4(VAR_3, 0xa4, 0xb6);
 FUNC_4(VAR_3, 0x85, 0xfc);
 FUNC_3(VAR_3, 0xc1, 0x88);
}
