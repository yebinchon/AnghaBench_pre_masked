
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int ps_work; int rtl_wq; } ;
struct TYPE_7__ {int multi_buffered; int dtim_counter; int last_beacon; scalar_t__ fwctrl_lps; int sw_ps_enabled; int swctrl_lps; } ;
struct TYPE_6__ {scalar_t__ link_state; int assoc_id; int bssid; } ;
struct rtl_priv {TYPE_4__ works; TYPE_3__ psc; TYPE_2__ mac80211; } ;
struct rtl_mac {scalar_t__ opmode; } ;
struct ieee80211_tim_ie {int bitmap_ctrl; int dtim_count; } ;
struct TYPE_5__ {int flags; int ps_dtim_period; } ;
struct ieee80211_hw {TYPE_1__ conf; } ;
struct ieee80211_hdr {int addr3; int frame_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int,int) ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ieee80211_tim_ie*,int,int ) ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,int *,int ) ;
 int* FUNC_8 (void*,unsigned int,int ) ;
 struct rtl_mac* FUNC_9 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_10 (struct ieee80211_hw*) ;

void FUNC_11(struct ieee80211_hw *VAR_8, void *VAR_9, unsigned int VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_10(VAR_8);
 struct rtl_mac *VAR_12 = FUNC_9(FUNC_10(VAR_8));
 struct ieee80211_hdr *VAR_13 = VAR_9;
 struct ieee80211_tim_ie *VAR_14;
 u8 *VAR_15;
 u8 VAR_16;
 bool VAR_17;
 bool VAR_18;

 if (VAR_12->opmode != VAR_5)
  return;

 if (!VAR_11->psc.swctrl_lps)
  return;

 if (VAR_11->mac80211.link_state != VAR_4)
  return;

 if (!VAR_11->psc.sw_ps_enabled)
  return;

 if (VAR_11->psc.fwctrl_lps)
  return;

 if (FUNC_6(!(VAR_8->conf.flags & VAR_3)))
  return;


 if (!FUNC_5(VAR_13->frame_control))
  return;


 if (VAR_10 <= 40 + VAR_2)
  return;


 if (!FUNC_3(VAR_13->addr3, VAR_11->mac80211.bssid))
  return;

 VAR_11->psc.last_beacon = VAR_7;

 VAR_15 = FUNC_8(VAR_9, VAR_10 - VAR_2, VAR_6);
 if (!VAR_15)
  return;

 if (VAR_15[1] < sizeof(*VAR_14))
  return;

 VAR_16 = VAR_15[1];
 VAR_14 = (struct ieee80211_tim_ie *) &VAR_15[2];

 if (!FUNC_2(!VAR_8->conf.ps_dtim_period))
  VAR_11->psc.dtim_counter = VAR_14->dtim_count;




 VAR_17 = FUNC_4(VAR_14, VAR_16,
           VAR_11->mac80211.assoc_id);


 VAR_18 = VAR_14->bitmap_ctrl & 0x01;
 VAR_11->psc.multi_buffered = VAR_18;




 if (!VAR_18) {


  FUNC_7(VAR_11->works.rtl_wq,
       &VAR_11->works.ps_work, FUNC_0(5));
 } else {
  FUNC_1(VAR_11, VAR_0, VAR_1,
    "u_bufferd: %x, m_buffered: %x\n", VAR_17, VAR_18);
 }
}
