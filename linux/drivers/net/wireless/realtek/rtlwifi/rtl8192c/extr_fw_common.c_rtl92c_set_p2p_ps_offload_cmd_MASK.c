
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rtl_p2p_ps_info {int opp_ps; int p2p_ps_state; int noa_num; int ctwindow; } ;
struct rtl_ps_ctl {struct rtl_p2p_ps_info p2p_ps_info; } ;
struct TYPE_2__ {int p2p; } ;
struct rtl_priv {TYPE_1__ mac80211; } ;
struct p2p_ps_offload_t {int ctwindow_en; int offload_en; int role; int discovery; int allstasleep; } ;
struct rtl_hal {struct p2p_ps_offload_t p2p_ps_offload; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_2 (struct p2p_ps_offload_t*,int ,int) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int,int*) ;
 int FUNC_4 (struct ieee80211_hw*,int ) ;
 struct rtl_hal* FUNC_5 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_7 (struct rtl_priv*) ;
 int FUNC_8 (struct rtl_priv*,int ,int ) ;
 int FUNC_9 (struct rtl_priv*,struct rtl_p2p_ps_info*,struct p2p_ps_offload_t*) ;

void FUNC_10(struct ieee80211_hw *VAR_5, u8 VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_6(VAR_5);
 struct rtl_ps_ctl *VAR_8 = FUNC_7(FUNC_6(VAR_5));
 struct rtl_hal *VAR_9 = FUNC_5(FUNC_6(VAR_5));
 struct rtl_p2p_ps_info *VAR_10 = &(VAR_8->p2p_ps_info);
 struct p2p_ps_offload_t *VAR_11 = &VAR_9->p2p_ps_offload;
 u16 VAR_12;

 switch (VAR_6) {
 case 131:
   FUNC_1(VAR_7, VAR_0, VAR_1,
     "P2P_PS_DISABLE\n");
   FUNC_2(VAR_11, 0, sizeof(*VAR_11));
   break;
 case 130:
   FUNC_1(VAR_7, VAR_0, VAR_1,
     "P2P_PS_ENABLE\n");

   if (VAR_10->ctwindow > 0) {
    VAR_11->ctwindow_en = 1;
    VAR_12 = VAR_10->ctwindow;
    FUNC_4(VAR_5, VAR_12);
   }

   FUNC_9(VAR_7, VAR_10, VAR_11);

   if ((VAR_10->opp_ps == 1) || (VAR_10->noa_num > 0)) {

    FUNC_8(VAR_7, VAR_4,
            FUNC_0(4));

    VAR_11->offload_en = 1;

    if (VAR_3 == VAR_7->mac80211.p2p) {
     VAR_11->role = 1;
     VAR_11->allstasleep = 0;
    } else {
     VAR_11->role = 0;
    }

    VAR_11->discovery = 0;
   }
   break;
 case 129:
   FUNC_1(VAR_7, VAR_0, VAR_1, "P2P_PS_SCAN\n");
   VAR_11->discovery = 1;
   break;
 case 128:
   FUNC_1(VAR_7, VAR_0, VAR_1,
     "P2P_PS_SCAN_DONE\n");
   VAR_11->discovery = 0;
   VAR_10->p2p_ps_state = 130;
   break;
 default:
   break;
 }

 FUNC_3(VAR_5, VAR_2, 1, (u8 *)VAR_11);

}
