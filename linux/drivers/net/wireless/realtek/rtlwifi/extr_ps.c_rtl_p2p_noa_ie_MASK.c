
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
struct TYPE_4__ {scalar_t__ variable; } ;
struct TYPE_5__ {TYPE_1__ beacon; } ;
struct ieee80211_mgmt {TYPE_2__ u; } ;
struct ieee80211_hw {int dummy; } ;
typedef int __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (struct rtl_priv*,int ,int ,char*,...) ;
 scalar_t__ FUNC_4 (int*,int*,int) ;
 int FUNC_5 (struct ieee80211_hw*,int ) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_9, void *VAR_10,
      unsigned int VAR_11)
{
 struct rtl_priv *VAR_12 = FUNC_6(VAR_9);
 struct ieee80211_mgmt *VAR_13 = VAR_10;
 struct rtl_p2p_ps_info *VAR_14 = &(VAR_12->psc.p2p_ps_info);
 u8 *VAR_15, *VAR_16, *VAR_17;
 u16 VAR_18;
 static u8 VAR_19[4] = {0x50, 0x6f, 0x9a, 0x09};
 u8 VAR_20, VAR_21 , VAR_22, VAR_23 = 0;
 bool VAR_24 = 0 , VAR_25 = 0;

 VAR_15 = (u8 *)VAR_13->u.beacon.variable;
 VAR_16 = VAR_10 + VAR_11;
 VAR_17 = ((void*)0);

 while (VAR_15 + 1 < VAR_16) {
  if (VAR_15 + 2 + VAR_15[1] > VAR_16)
   return;

  if (VAR_15[0] == 221 && VAR_15[1] > 4) {
   if (FUNC_4(&VAR_15[2], VAR_19, 4) == 0) {
    VAR_17 = VAR_15 + 2+4;
    break;
   }
  }
  VAR_15 += 2 + VAR_15[1];
 }

 if (VAR_17 == ((void*)0))
  return;
 VAR_24 = 1;

 while (VAR_17 + 1 < VAR_16) {
  VAR_18 = FUNC_1((__le16 *)&VAR_17[1]);
  if (VAR_17 + 3 + VAR_17[1] > VAR_16)
   return;

  if (VAR_17[0] == 12) {
   VAR_25 = 1;
   if ((VAR_18 - 2) % 13 != 0) {
    FUNC_3(VAR_12, VAR_1, VAR_2,
      "P2P notice of absence: invalid length.%d\n",
      VAR_18);
    return;
   } else {
    VAR_20 = (VAR_18 - 2) / 13;
    if (VAR_20 > VAR_3)
     VAR_20 = VAR_3;

   }
   VAR_23 = VAR_17[3];
   if (VAR_12->psc.p2p_ps_info.p2p_ps_mode ==
       VAR_8 || VAR_23 != VAR_14->noa_index) {
    FUNC_3(VAR_12, VAR_0, VAR_2,
      "update NOA ie.\n");
    VAR_14->noa_index = VAR_23;
    VAR_14->opp_ps = (VAR_17[4] >> 7);
    VAR_14->ctwindow = VAR_17[4] & 0x7F;
    VAR_14->noa_num = VAR_20;
    VAR_21 = 5;
    for (VAR_22 = 0; VAR_22 < VAR_20; VAR_22++) {
     VAR_14->noa_count_type[VAR_22] =
       FUNC_0(VAR_17+VAR_21);
     VAR_21 += 1;
     VAR_14->noa_duration[VAR_22] =
       FUNC_2((__le32 *)VAR_17+VAR_21);
     VAR_21 += 4;
     VAR_14->noa_interval[VAR_22] =
       FUNC_2((__le32 *)VAR_17+VAR_21);
     VAR_21 += 4;
     VAR_14->noa_start_time[VAR_22] =
       FUNC_2((__le32 *)VAR_17+VAR_21);
     VAR_21 += 4;
    }

    if (VAR_14->opp_ps == 1) {
     VAR_14->p2p_ps_mode = VAR_4;



     if (VAR_12->psc.fw_current_inpsmode)
      FUNC_5(VAR_9,
              VAR_6);
    } else if (VAR_14->noa_num > 0) {
     VAR_14->p2p_ps_mode = VAR_7;
     FUNC_5(VAR_9, VAR_6);
    } else if (VAR_14->p2p_ps_mode > VAR_8) {
     FUNC_5(VAR_9, VAR_5);
    }
   }
   break;
  }
  VAR_17 += 3 + VAR_18;
 }

 if (VAR_24 == 1) {
  if ((VAR_14->p2p_ps_mode > VAR_8) &&
      (VAR_25 == 0))
   FUNC_5(VAR_9, VAR_5);
 }
}
