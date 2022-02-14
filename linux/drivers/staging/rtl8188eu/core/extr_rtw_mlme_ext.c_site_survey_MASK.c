
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtw_ieee80211_channel {unsigned char hw_value; int flags; } ;
struct TYPE_3__ {size_t channel_idx; size_t ch_num; int scan_mode; int state; scalar_t__ bss_cnt; TYPE_2__* ssid; struct rtw_ieee80211_channel* ch; } ;
struct mlme_ext_info {int state; } ;
struct mlme_ext_priv {int chan_scan_time; unsigned char cur_channel; TYPE_1__ sitesurvey_res; int cur_bwmode; int cur_ch_offset; struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;
typedef enum rt_scan_type { ____Placeholder_rt_scan_type } rt_scan_type ;
struct TYPE_4__ {scalar_t__ ssid_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct adapter*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct adapter*,unsigned char) ;
 int FUNC_2 (struct adapter*,int) ;
 scalar_t__ FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct adapter*,int *,int ,int,int) ;
 int FUNC_6 (struct adapter*,TYPE_2__*,int *,int) ;
 int FUNC_7 (struct adapter*) ;
 scalar_t__ FUNC_8 (struct adapter*) ;
 int FUNC_9 (struct adapter*,int ,int *) ;
 int FUNC_10 (struct adapter*,unsigned char,int ,int ) ;
 int FUNC_11 (struct mlme_ext_priv*,int) ;

__attribute__((used)) static void FUNC_12(struct adapter *VAR_11)
{
 unsigned char VAR_12 = 0, VAR_13;
 enum rt_scan_type VAR_14 = VAR_9;
 struct mlme_ext_priv *VAR_15 = &VAR_11->mlmeextpriv;
 struct mlme_ext_info *VAR_16 = &VAR_15->mlmext_info;
 u32 VAR_17 = 0;
 struct rtw_ieee80211_channel *VAR_18;

 if (VAR_15->sitesurvey_res.channel_idx < VAR_15->sitesurvey_res.ch_num) {
  VAR_18 = &VAR_15->sitesurvey_res.ch[VAR_15->sitesurvey_res.channel_idx];
  VAR_12 = VAR_18->hw_value;
  VAR_14 = (VAR_18->flags & VAR_4) ? VAR_9 : VAR_6;
 }

 if (VAR_12 != 0) {




  if (VAR_15->sitesurvey_res.channel_idx == 0)
   FUNC_10(VAR_11, VAR_12, VAR_0, VAR_1);
  else
   FUNC_1(VAR_11, VAR_12);

  if (VAR_14 == VAR_6) {
   int VAR_19;

   for (VAR_19 = 0; VAR_19 < VAR_5; VAR_19++) {
    if (VAR_15->sitesurvey_res.ssid[VAR_19].ssid_length) {

     FUNC_6(VAR_11,
     &(VAR_15->sitesurvey_res.ssid[VAR_19]),
        ((void*)0), 0);

     FUNC_6(VAR_11,
     &(VAR_15->sitesurvey_res.ssid[VAR_19]),
        ((void*)0), 0);
    }
   }

   if (VAR_15->sitesurvey_res.scan_mode == VAR_6) {

    FUNC_6(VAR_11, ((void*)0), ((void*)0), 0);

    FUNC_6(VAR_11, ((void*)0), ((void*)0), 0);
   }

   if (VAR_15->sitesurvey_res.scan_mode == VAR_6) {

    FUNC_6(VAR_11, ((void*)0), ((void*)0), 0);

    FUNC_6(VAR_11, ((void*)0), ((void*)0), 0);
   }
  }

  FUNC_11(VAR_15, VAR_15->chan_scan_time);
 } else {



  if (FUNC_8(VAR_11)) {
   VAR_15->sitesurvey_res.bss_cnt = 0;
   VAR_15->sitesurvey_res.channel_idx = -1;
   VAR_15->chan_scan_time = VAR_10 / 2;
   FUNC_11(VAR_15, VAR_15->chan_scan_time);
   return;
  }

  VAR_15->sitesurvey_res.state = VAR_7;



  FUNC_10(VAR_11, VAR_15->cur_channel, VAR_15->cur_ch_offset, VAR_15->cur_bwmode);






  FUNC_2(VAR_11, (VAR_16->state & 0x3));

  VAR_17 = 0xff;
  FUNC_9(VAR_11, VAR_2, (u8 *)(&VAR_17));

  FUNC_0(VAR_11);


  if (FUNC_3(VAR_11))
   FUNC_5(VAR_11, ((void*)0), 0, 3, 500);

  VAR_13 = 0;
  FUNC_9(VAR_11, VAR_3, (u8 *)(&VAR_13));

  FUNC_7(VAR_11);

  VAR_15->chan_scan_time = VAR_10;
  VAR_15->sitesurvey_res.state = VAR_8;

  FUNC_4(VAR_11);
  FUNC_4(VAR_11);
  FUNC_4(VAR_11);
 }
}
