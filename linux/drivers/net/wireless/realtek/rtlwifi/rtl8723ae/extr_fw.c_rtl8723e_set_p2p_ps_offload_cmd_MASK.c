
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_p2p_ps_info {int noa_num; int* noa_duration; int* noa_interval; int* noa_start_time; int* noa_count_type; int opp_ps; int p2p_ps_state; int ctwindow; } ;
struct rtl_ps_ctl {struct rtl_p2p_ps_info p2p_ps_info; } ;
struct TYPE_2__ {int p2p; } ;
struct rtl_priv {TYPE_1__ mac80211; } ;
struct p2p_ps_offload_t {int ctwindow_en; int noa0_en; int noa1_en; int offload_en; int role; int discovery; int allstasleep; } ;
struct rtl_hal {struct p2p_ps_offload_t p2p_ps_offload; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_2 (struct p2p_ps_offload_t*,int ,int) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int,int*) ;
 int FUNC_4 (struct ieee80211_hw*,int ) ;
 struct rtl_hal* FUNC_5 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_7 (struct rtl_priv*) ;
 int FUNC_8 (struct rtl_priv*,int ) ;
 int FUNC_9 (struct rtl_priv*,int,int) ;
 int FUNC_10 (struct rtl_priv*,int,int) ;

void FUNC_11(struct ieee80211_hw *VAR_6, u8 VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_6(VAR_6);
 struct rtl_ps_ctl *VAR_9 = FUNC_7(FUNC_6(VAR_6));
 struct rtl_hal *VAR_10 = FUNC_5(FUNC_6(VAR_6));
 struct rtl_p2p_ps_info *VAR_11 = &(VAR_9->p2p_ps_info);
 struct p2p_ps_offload_t *VAR_12 = &VAR_10->p2p_ps_offload;
 u8 VAR_13;
 u16 VAR_14;
 u32 VAR_15, VAR_16;

 switch (VAR_7) {
 case 131:
  FUNC_1(VAR_8, VAR_0, VAR_1, "P2P_PS_DISABLE\n");
  FUNC_2(VAR_12, 0, sizeof(*VAR_12));
  break;
 case 130:
  FUNC_1(VAR_8, VAR_0, VAR_1, "P2P_PS_ENABLE\n");

  if (VAR_11->ctwindow > 0) {
   VAR_12->ctwindow_en = 1;
   VAR_14 = VAR_11->ctwindow;
   FUNC_4(VAR_6, VAR_14);
  }


  for (VAR_13 = 0 ; VAR_13 < VAR_11->noa_num ; VAR_13++) {

   FUNC_9(VAR_8, 0x5cf, (VAR_13 << 4));
   if (VAR_13 == 0)
    VAR_12->noa0_en = 1;
   else
    VAR_12->noa1_en = 1;


   FUNC_10(VAR_8, 0x5E0,
     VAR_11->noa_duration[VAR_13]);
   FUNC_10(VAR_8, 0x5E4,
     VAR_11->noa_interval[VAR_13]);


   VAR_16 = FUNC_8(VAR_8, VAR_5);

   VAR_15 = VAR_11->noa_start_time[VAR_13];
   if (VAR_11->noa_count_type[VAR_13] != 1) {
    while (VAR_15 <=
     (VAR_16+(50*1024))) {
     VAR_15 +=
      VAR_11->noa_interval[VAR_13];
     if (VAR_11->noa_count_type[VAR_13] != 255)
      VAR_11->noa_count_type[VAR_13]--;
    }
   }
   FUNC_10(VAR_8, 0x5E8, VAR_15);
   FUNC_10(VAR_8, 0x5EC,
    VAR_11->noa_count_type[VAR_13]);

  }

  if ((VAR_11->opp_ps == 1) || (VAR_11->noa_num > 0)) {

   FUNC_9(VAR_8, VAR_4, FUNC_0(4));

   VAR_12->offload_en = 1;

   if (VAR_3 == VAR_8->mac80211.p2p) {
    VAR_12->role = 1;
    VAR_12->allstasleep = 0;
   } else {
    VAR_12->role = 0;
   }

   VAR_12->discovery = 0;
  }
  break;
 case 129:
  FUNC_1(VAR_8, VAR_0, VAR_1, "P2P_PS_SCAN\n");
  VAR_12->discovery = 1;
  break;
 case 128:
  FUNC_1(VAR_8, VAR_0, VAR_1, "P2P_PS_SCAN_DONE\n");
  VAR_12->discovery = 0;
  VAR_11->p2p_ps_state = 130;
  break;
 default:
  break;
 }

 FUNC_3(VAR_6, VAR_2, 1, (u8 *)VAR_12);

}
