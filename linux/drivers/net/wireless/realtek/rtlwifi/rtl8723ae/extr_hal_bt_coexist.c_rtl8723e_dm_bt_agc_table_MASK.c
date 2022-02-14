
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int sw_coexist_all_off; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int ,int,int) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int,int) ;

void FUNC_4(struct ieee80211_hw *VAR_7, u8 VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_2(VAR_7);

 if (VAR_8 == VAR_0) {
  FUNC_0(VAR_9, VAR_2, VAR_3,
    "[BT]AGCTable Off!\n");
  FUNC_3(VAR_9, 0xc78, 0x641c0001);
  FUNC_3(VAR_9, 0xc78, 0x631d0001);
  FUNC_3(VAR_9, 0xc78, 0x621e0001);
  FUNC_3(VAR_9, 0xc78, 0x611f0001);
  FUNC_3(VAR_9, 0xc78, 0x60200001);

  FUNC_1(VAR_7, VAR_4,
     VAR_5, 0xfffff, 0x32000);
  FUNC_1(VAR_7, VAR_4,
     VAR_5, 0xfffff, 0x71000);
  FUNC_1(VAR_7, VAR_4,
     VAR_5, 0xfffff, 0xb0000);
  FUNC_1(VAR_7, VAR_4,
     VAR_5, 0xfffff, 0xfc000);
  FUNC_1(VAR_7, VAR_4,
     VAR_6, 0xfffff, 0x30355);
 } else if (VAR_8 == VAR_1) {
  FUNC_0(VAR_9, VAR_2, VAR_3,
    "[BT]AGCTable On!\n");
  FUNC_3(VAR_9, 0xc78, 0x4e1c0001);
  FUNC_3(VAR_9, 0xc78, 0x4d1d0001);
  FUNC_3(VAR_9, 0xc78, 0x4c1e0001);
  FUNC_3(VAR_9, 0xc78, 0x4b1f0001);
  FUNC_3(VAR_9, 0xc78, 0x4a200001);

  FUNC_1(VAR_7, VAR_4,
     VAR_5, 0xfffff, 0xdc000);
  FUNC_1(VAR_7, VAR_4,
     VAR_5, 0xfffff, 0x90000);
  FUNC_1(VAR_7, VAR_4,
     VAR_5, 0xfffff, 0x51000);
  FUNC_1(VAR_7, VAR_4,
     VAR_5, 0xfffff, 0x12000);
  FUNC_1(VAR_7, VAR_4,
     VAR_6, 0xfffff, 0x00355);

  VAR_9->btcoexist.sw_coexist_all_off = 0;
 }
}
