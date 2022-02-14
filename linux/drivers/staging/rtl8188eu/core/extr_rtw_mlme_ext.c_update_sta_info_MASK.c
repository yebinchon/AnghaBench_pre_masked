
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ht_option; int ampdu_enable; int sgi; int agg_enable_bitmap; int candidate_tid_bitmap; int ch_offset; int bwmode; } ;
struct sta_info {int qos_option; int state; TYPE_2__ htpriv; } ;
struct TYPE_6__ {scalar_t__ qos_option; } ;
struct TYPE_4__ {int ampdu_enable; scalar_t__ ht_option; } ;
struct mlme_priv {TYPE_3__ qospriv; TYPE_1__ htpriv; } ;
struct mlme_ext_info {int HT_caps; } ;
struct mlme_ext_priv {int cur_ch_offset; int cur_bwmode; struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; struct mlme_priv mlmepriv; } ;


 int FUNC_0 (struct adapter*,struct sta_info*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct adapter*,int *) ;

void FUNC_2(struct adapter *VAR_1, struct sta_info *VAR_2)
{
 struct mlme_priv *VAR_3 = &VAR_1->mlmepriv;
 struct mlme_ext_priv *VAR_4 = &VAR_1->mlmeextpriv;
 struct mlme_ext_info *VAR_5 = &VAR_4->mlmext_info;


 FUNC_0(VAR_1, VAR_2);


 if (VAR_3->htpriv.ht_option) {
  VAR_2->htpriv.ht_option = 1;

  VAR_2->htpriv.ampdu_enable = VAR_3->htpriv.ampdu_enable;

  if (FUNC_1(VAR_1, &VAR_5->HT_caps))
   VAR_2->htpriv.sgi = 1;

  VAR_2->qos_option = 1;
 } else {
  VAR_2->htpriv.ht_option = 0;

  VAR_2->htpriv.ampdu_enable = 0;

  VAR_2->htpriv.sgi = 0;
  VAR_2->qos_option = 0;
 }
 VAR_2->htpriv.bwmode = VAR_4->cur_bwmode;
 VAR_2->htpriv.ch_offset = VAR_4->cur_ch_offset;

 VAR_2->htpriv.agg_enable_bitmap = 0x0;
 VAR_2->htpriv.candidate_tid_bitmap = 0x0;


 if (VAR_3->qospriv.qos_option)
  VAR_2->qos_option = 1;

 VAR_2->state = VAR_0;
}
