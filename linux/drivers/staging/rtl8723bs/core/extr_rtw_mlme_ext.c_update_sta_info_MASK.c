
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int ht_option; int ampdu_enable; int rx_ampdu_min_spacing; int sgi_20m; int sgi_40m; int agg_enable_bitmap; int candidate_tid_bitmap; int ch_offset; int ht_cap; int beamform_cap; int stbc_cap; int ldpc_cap; } ;
struct sta_info {int qos_option; int lock; int state; int bw_mode; TYPE_4__ htpriv; } ;
struct rtw_ieee80211_ht_cap {int dummy; } ;
struct TYPE_12__ {scalar_t__ qos_option; } ;
struct TYPE_10__ {int ampdu_enable; int beamform_cap; int stbc_cap; int ldpc_cap; scalar_t__ ht_option; } ;
struct mlme_priv {TYPE_5__ qospriv; TYPE_3__ htpriv; } ;
struct TYPE_8__ {int AMPDU_para; } ;
struct TYPE_9__ {TYPE_1__ HT_cap_element; } ;
struct TYPE_13__ {TYPE_2__ u; } ;
struct mlme_ext_info {TYPE_6__ HT_caps; } ;
struct mlme_ext_priv {int cur_bwmode; int cur_ch_offset; struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct adapter*,struct sta_info*) ;
 int VAR_3 ;
 int FUNC_1 (int *,TYPE_6__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct adapter*,TYPE_6__*,int ) ;
 int FUNC_5 (struct sta_info*) ;

void FUNC_6(struct adapter *VAR_4, struct sta_info *VAR_5)
{
 struct mlme_priv *VAR_6 = &(VAR_4->mlmepriv);
 struct mlme_ext_priv *VAR_7 = &VAR_4->mlmeextpriv;
 struct mlme_ext_info *VAR_8 = &(VAR_7->mlmext_info);


 FUNC_0(VAR_4, VAR_5);


 if (VAR_6->htpriv.ht_option) {
  VAR_5->htpriv.ht_option = 1;

  VAR_5->htpriv.ampdu_enable = VAR_6->htpriv.ampdu_enable;

  VAR_5->htpriv.rx_ampdu_min_spacing = (VAR_8->HT_caps.u.HT_cap_element.AMPDU_para&VAR_2)>>2;

  if (FUNC_4(VAR_4, &(VAR_8->HT_caps), VAR_0))
   VAR_5->htpriv.sgi_20m = 1;

  if (FUNC_4(VAR_4, &(VAR_8->HT_caps), VAR_1))
   VAR_5->htpriv.sgi_40m = 1;

  VAR_5->qos_option = 1;

  VAR_5->htpriv.ldpc_cap = VAR_6->htpriv.ldpc_cap;
  VAR_5->htpriv.stbc_cap = VAR_6->htpriv.stbc_cap;
  VAR_5->htpriv.beamform_cap = VAR_6->htpriv.beamform_cap;

  FUNC_1(&VAR_5->htpriv.ht_cap, &VAR_8->HT_caps, sizeof(struct rtw_ieee80211_ht_cap));
 } else {
  VAR_5->htpriv.ht_option = 0;

  VAR_5->htpriv.ampdu_enable = 0;

  VAR_5->htpriv.sgi_20m = 0;
  VAR_5->htpriv.sgi_40m = 0;
  VAR_5->qos_option = 0;

 }

 VAR_5->htpriv.ch_offset = VAR_7->cur_ch_offset;

 VAR_5->htpriv.agg_enable_bitmap = 0x0;
 VAR_5->htpriv.candidate_tid_bitmap = 0x0;

 VAR_5->bw_mode = VAR_7->cur_bwmode;


 if (VAR_6->qospriv.qos_option)
  VAR_5->qos_option = 1;

 FUNC_5(VAR_5);

 FUNC_2(&VAR_5->lock);
 VAR_5->state = VAR_3;
 FUNC_3(&VAR_5->lock);

}
