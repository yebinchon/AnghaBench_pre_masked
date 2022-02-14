
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8187_priv {TYPE_1__* map; } ;
struct ieee80211_hw {int wiphy; struct rtl8187_priv* priv; } ;
typedef int __le32 ;
struct TYPE_2__ {int TX_ANTENNA; int TESTR; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rtl8187_priv*,int *,int) ;
 int FUNC_3 (struct rtl8187_priv*,int *,int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int FUNC_4 (struct ieee80211_hw*,int) ;
 int FUNC_5 (struct ieee80211_hw*,int) ;
 int* VAR_2 ;
 int FUNC_6 (struct ieee80211_hw*,int,int) ;
 int FUNC_7 (struct ieee80211_hw*,int,int) ;
 int FUNC_8 (struct ieee80211_hw*,int,int) ;
 int* VAR_3 ;
 int FUNC_9 (int ,char*,int) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_hw *VAR_4)
{
 struct rtl8187_priv *VAR_5 = VAR_4->priv;
 int VAR_6;

 FUNC_6(VAR_4, 0x0, 0x067);
 FUNC_6(VAR_4, 0x1, 0xFE0);
 FUNC_6(VAR_4, 0x2, 0x44D);
 FUNC_6(VAR_4, 0x3, 0x441);
 FUNC_6(VAR_4, 0x4, 0x486);
 FUNC_6(VAR_4, 0x5, 0xBC0);
 FUNC_6(VAR_4, 0x6, 0xAE6);
 FUNC_6(VAR_4, 0x7, 0x82A);
 FUNC_6(VAR_4, 0x8, 0x01F);
 FUNC_6(VAR_4, 0x9, 0x334);
 FUNC_6(VAR_4, 0xA, 0xFD4);
 FUNC_6(VAR_4, 0xB, 0x391);
 FUNC_6(VAR_4, 0xC, 0x050);
 FUNC_6(VAR_4, 0xD, 0x6DB);
 FUNC_6(VAR_4, 0xE, 0x029);
 FUNC_6(VAR_4, 0xF, 0x914); FUNC_1(100);

 FUNC_6(VAR_4, 0x2, 0xC4D); FUNC_1(200);
 FUNC_6(VAR_4, 0x2, 0x44D); FUNC_1(200);

 if (!(FUNC_4(VAR_4, 6) & (1 << 7))) {
  FUNC_6(VAR_4, 0x02, 0x0c4d);
  FUNC_1(200);
  FUNC_6(VAR_4, 0x02, 0x044d);
  FUNC_1(100);
  if (!(FUNC_4(VAR_4, 6) & (1 << 7)))
   FUNC_9(VAR_4->wiphy, "RF Calibration Failed! %x\n",
       FUNC_4(VAR_4, 6));
 }

 FUNC_6(VAR_4, 0x0, 0x127);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++) {
  FUNC_6(VAR_4, 0x1, VAR_6 + 1);
  FUNC_6(VAR_4, 0x2, VAR_3[VAR_6]);
 }

 FUNC_6(VAR_4, 0x0, 0x027);
 FUNC_6(VAR_4, 0x0, 0x22F);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  FUNC_8(VAR_4, 0xB, VAR_0[VAR_6]);
  FUNC_8(VAR_4, 0xA, 0x80 + VAR_6);
 }

 FUNC_1(1);

 FUNC_8(VAR_4, 0x00, 0x01);
 FUNC_8(VAR_4, 0x01, 0x02);
 FUNC_8(VAR_4, 0x02, 0x42);
 FUNC_8(VAR_4, 0x03, 0x00);
 FUNC_8(VAR_4, 0x04, 0x00);
 FUNC_8(VAR_4, 0x05, 0x00);
 FUNC_8(VAR_4, 0x06, 0x40);
 FUNC_8(VAR_4, 0x07, 0x00);
 FUNC_8(VAR_4, 0x08, 0x40);
 FUNC_8(VAR_4, 0x09, 0xfe);
 FUNC_8(VAR_4, 0x0a, 0x09);
 FUNC_8(VAR_4, 0x0b, 0x80);
 FUNC_8(VAR_4, 0x0c, 0x01);
 FUNC_8(VAR_4, 0x0e, 0xd3);
 FUNC_8(VAR_4, 0x0f, 0x38);
 FUNC_8(VAR_4, 0x10, 0x84);
 FUNC_8(VAR_4, 0x11, 0x06);
 FUNC_8(VAR_4, 0x12, 0x20);
 FUNC_8(VAR_4, 0x13, 0x20);
 FUNC_8(VAR_4, 0x14, 0x00);
 FUNC_8(VAR_4, 0x15, 0x40);
 FUNC_8(VAR_4, 0x16, 0x00);
 FUNC_8(VAR_4, 0x17, 0x40);
 FUNC_8(VAR_4, 0x18, 0xef);
 FUNC_8(VAR_4, 0x19, 0x19);
 FUNC_8(VAR_4, 0x1a, 0x20);
 FUNC_8(VAR_4, 0x1b, 0x76);
 FUNC_8(VAR_4, 0x1c, 0x04);
 FUNC_8(VAR_4, 0x1e, 0x95);
 FUNC_8(VAR_4, 0x1f, 0x75);
 FUNC_8(VAR_4, 0x20, 0x1f);
 FUNC_8(VAR_4, 0x21, 0x27);
 FUNC_8(VAR_4, 0x22, 0x16);
 FUNC_8(VAR_4, 0x24, 0x46);
 FUNC_8(VAR_4, 0x25, 0x20);
 FUNC_8(VAR_4, 0x26, 0x90);
 FUNC_8(VAR_4, 0x27, 0x88);

 FUNC_8(VAR_4, 0x0d, VAR_1[2 * 4]);
 FUNC_8(VAR_4, 0x1b, VAR_1[2 * 4 + 2]);
 FUNC_8(VAR_4, 0x1d, VAR_1[2 * 4 + 3]);
 FUNC_8(VAR_4, 0x23, VAR_1[2 * 4 + 1]);

 FUNC_7(VAR_4, 0x00, 0x98);
 FUNC_7(VAR_4, 0x03, 0x20);
 FUNC_7(VAR_4, 0x04, 0x7e);
 FUNC_7(VAR_4, 0x05, 0x12);
 FUNC_7(VAR_4, 0x06, 0xfc);
 FUNC_7(VAR_4, 0x07, 0x78);
 FUNC_7(VAR_4, 0x08, 0x2e);
 FUNC_7(VAR_4, 0x10, 0x9b);
 FUNC_7(VAR_4, 0x11, 0x88);
 FUNC_7(VAR_4, 0x12, 0x47);
 FUNC_7(VAR_4, 0x13, 0xd0);
 FUNC_7(VAR_4, 0x19, 0x00);
 FUNC_7(VAR_4, 0x1a, 0xa0);
 FUNC_7(VAR_4, 0x1b, 0x08);
 FUNC_7(VAR_4, 0x40, 0x86);
 FUNC_7(VAR_4, 0x41, 0x8d);
 FUNC_7(VAR_4, 0x42, 0x15);
 FUNC_7(VAR_4, 0x43, 0x18);
 FUNC_7(VAR_4, 0x44, 0x1f);
 FUNC_7(VAR_4, 0x45, 0x1e);
 FUNC_7(VAR_4, 0x46, 0x1a);
 FUNC_7(VAR_4, 0x47, 0x15);
 FUNC_7(VAR_4, 0x48, 0x10);
 FUNC_7(VAR_4, 0x49, 0x0a);
 FUNC_7(VAR_4, 0x4a, 0x05);
 FUNC_7(VAR_4, 0x4b, 0x02);
 FUNC_7(VAR_4, 0x4c, 0x05);

 FUNC_3(VAR_5, &VAR_5->map->TESTR, 0x0D);

 FUNC_5(VAR_4, 1);


 FUNC_7(VAR_4, 0x10, 0x9b);
 FUNC_8(VAR_4, 0x26, 0x90);

 FUNC_3(VAR_5, &VAR_5->map->TX_ANTENNA, 0x03);
 FUNC_1(1);
 FUNC_2(VAR_5, (__le32 *)0xFF94, 0x3dc00002);


 FUNC_6(VAR_4, 0x0c, 0x50);
 FUNC_8(VAR_4, 0x0d, VAR_1[2 * 4]);
 FUNC_8(VAR_4, 0x1b, VAR_1[2 * 4 + 2]);
 FUNC_8(VAR_4, 0x1d, VAR_1[2 * 4 + 3]);
 FUNC_8(VAR_4, 0x23, VAR_1[2 * 4 + 1]);
 FUNC_7(VAR_4, 0x41, VAR_2[2]);
}
