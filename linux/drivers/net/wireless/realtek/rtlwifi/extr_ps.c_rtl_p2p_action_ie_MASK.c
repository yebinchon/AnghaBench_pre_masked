
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rtl_p2p_ps_info {scalar_t__ p2p_ps_mode; int noa_index; int opp_ps; int ctwindow; int noa_num; void** noa_start_time; void** noa_interval; void** noa_duration; int * noa_count_type; } ;
struct TYPE_6__ {scalar_t__ fw_current_inpsmode; struct rtl_p2p_ps_info p2p_ps_info; } ;
struct rtl_priv {TYPE_3__ psc; } ;
struct TYPE_4__ {int category; } ;
struct TYPE_5__ {TYPE_1__ action; } ;
struct ieee80211_mgmt {TYPE_2__ u; } ;
struct ieee80211_hw {int dummy; } ;
typedef int __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (struct rtl_priv*,int ,int ,char*,int*,int) ;
 int FUNC_4 (struct rtl_priv*,int ,int ,char*,...) ;
 scalar_t__ FUNC_5 (int*,int*,int) ;
 int FUNC_6 (struct ieee80211_hw*,int ) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_8, void *VAR_9,
         unsigned int VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_7(VAR_8);
 struct ieee80211_mgmt *VAR_12 = VAR_9;
 struct rtl_p2p_ps_info *VAR_13 = &(VAR_11->psc.p2p_ps_info);
 u8 VAR_14, VAR_15 , VAR_16 , VAR_17 = 0;
 u8 *VAR_18, *VAR_19, *VAR_20;
 u16 VAR_21;
 static u8 VAR_22[4] = {0x50, 0x6f, 0x9a, 0x09};

 VAR_18 = (u8 *)&VAR_12->u.action.category;
 VAR_19 = VAR_9 + VAR_10;
 VAR_20 = ((void*)0);

 if (VAR_18[0] == 0x7f) {
  if (FUNC_5(&VAR_18[1], VAR_22, 4) == 0)
   VAR_20 = VAR_18 + 3+4;
 }

 if (VAR_20 == ((void*)0))
  return;

 FUNC_4(VAR_11, VAR_0, VAR_1, "action frame find P2P IE.\n");

 while (VAR_20 + 1 < VAR_19) {
  VAR_21 = FUNC_1((__le16 *)&VAR_20[1]);
  if (VAR_20 + 3 + VAR_20[1] > VAR_19)
   return;

  if (VAR_20[0] == 12) {
   FUNC_4(VAR_11, VAR_0, VAR_1, "find NOA IE.\n");
   FUNC_3(VAR_11, VAR_0, VAR_1, "noa ie ",
          VAR_20, VAR_21);
   if ((VAR_21 - 2) % 13 != 0) {
    FUNC_4(VAR_11, VAR_0, VAR_1,
      "P2P notice of absence: invalid length.%d\n",
      VAR_21);
    return;
   } else {
    VAR_14 = (VAR_21 - 2) / 13;
    if (VAR_14 > VAR_2)
     VAR_14 = VAR_2;

   }
   VAR_17 = VAR_20[3];
   if (VAR_11->psc.p2p_ps_info.p2p_ps_mode ==
       VAR_7 || VAR_17 != VAR_13->noa_index) {
    VAR_13->noa_index = VAR_17;
    VAR_13->opp_ps = (VAR_20[4] >> 7);
    VAR_13->ctwindow = VAR_20[4] & 0x7F;
    VAR_13->noa_num = VAR_14;
    VAR_15 = 5;
    for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
     VAR_13->noa_count_type[VAR_16] =
       FUNC_0(VAR_20+VAR_15);
     VAR_15 += 1;
     VAR_13->noa_duration[VAR_16] =
        FUNC_2((__le32 *)VAR_20+VAR_15);
     VAR_15 += 4;
     VAR_13->noa_interval[VAR_16] =
        FUNC_2((__le32 *)VAR_20+VAR_15);
     VAR_15 += 4;
     VAR_13->noa_start_time[VAR_16] =
        FUNC_2((__le32 *)VAR_20+VAR_15);
     VAR_15 += 4;
    }

    if (VAR_13->opp_ps == 1) {
     VAR_13->p2p_ps_mode = VAR_3;



     if (VAR_11->psc.fw_current_inpsmode)
      FUNC_6(VAR_8,
              VAR_5);
    } else if (VAR_13->noa_num > 0) {
     VAR_13->p2p_ps_mode = VAR_6;
     FUNC_6(VAR_8, VAR_5);
    } else if (VAR_13->p2p_ps_mode > VAR_7) {
     FUNC_6(VAR_8, VAR_4);
    }
   }
   break;
  }
  VAR_20 += 3 + VAR_21;
 }
}
