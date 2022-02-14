
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int pairwise_enc_algorithm; } ;
struct rtl_priv {TYPE_2__* cfg; TYPE_1__ sec; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {int* maps; } ;



 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;

 size_t VAR_8 ;


 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int,int) ;

void FUNC_4(struct ieee80211_hw *VAR_9, u8 VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_2(VAR_9);

 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14 = VAR_11->cfg->maps[VAR_4];

 switch (VAR_11->sec.pairwise_enc_algorithm) {
 case 128:
  VAR_14 = VAR_11->cfg->maps[VAR_7];
  break;
 case 129:
  VAR_14 = VAR_11->cfg->maps[VAR_6];
  break;
 case 130:
  VAR_14 = VAR_11->cfg->maps[VAR_5];
  break;
 case 131:
  VAR_14 = VAR_11->cfg->maps[VAR_4];
  break;
 default:
  VAR_14 = VAR_11->cfg->maps[VAR_4];
 }

 VAR_13 = (VAR_10 & 3) | ((u16) (VAR_14) << 2);

 VAR_13 |= FUNC_0(15);
 VAR_12 = VAR_0 * VAR_10;
 VAR_12 = VAR_12 | FUNC_0(31) | FUNC_0(16);

 FUNC_3(VAR_11, VAR_11->cfg->maps[VAR_8], VAR_13);
 FUNC_3(VAR_11, VAR_11->cfg->maps[VAR_3], VAR_12);

 FUNC_1(VAR_11, VAR_1, VAR_2,
   "rtl_cam_mark_invalid(): WRITE A4: %x\n", VAR_13);
 FUNC_1(VAR_11, VAR_1, VAR_2,
   "rtl_cam_mark_invalid(): WRITE A0: %x\n", VAR_12);
}
