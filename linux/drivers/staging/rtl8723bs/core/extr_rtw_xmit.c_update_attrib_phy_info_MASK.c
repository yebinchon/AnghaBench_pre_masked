
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_ampdu_min_spacing; int ch_offset; int ht_option; } ;
struct sta_info {scalar_t__ bw_mode; scalar_t__ pid; scalar_t__ isrc; TYPE_1__ htpriv; int stbc; int ldpc; int raid; int qos_option; int cts2self; int rtsen; } ;
struct pkt_attrib {int ampdu_spacing; scalar_t__ bwmode; int ampdu_en; int retry_ctrl; int pctrl; int ch_offset; int ht_en; int stbc; int ldpc; int sgi; int raid; int qos_en; scalar_t__ triggered; scalar_t__ eosp; scalar_t__ mdata; int cts2self; int rtsen; } ;
struct mlme_ext_priv {scalar_t__ cur_bwmode; } ;
struct adapter {int driver_ampdu_spacing; struct mlme_ext_priv mlmeextpriv; } ;


 int FUNC_0 (struct sta_info*) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_0, struct pkt_attrib *VAR_1, struct sta_info *VAR_2)
{
 struct mlme_ext_priv *VAR_3 = &VAR_0->mlmeextpriv;

 VAR_1->rtsen = VAR_2->rtsen;
 VAR_1->cts2self = VAR_2->cts2self;

 VAR_1->mdata = 0;
 VAR_1->eosp = 0;
 VAR_1->triggered = 0;
 VAR_1->ampdu_spacing = 0;


 VAR_1->qos_en = VAR_2->qos_option;

 VAR_1->raid = VAR_2->raid;

 if (VAR_3->cur_bwmode < VAR_2->bw_mode)
  VAR_1->bwmode = VAR_3->cur_bwmode;
 else
  VAR_1->bwmode = VAR_2->bw_mode;

 VAR_1->sgi = FUNC_0(VAR_2);

 VAR_1->ldpc = VAR_2->ldpc;
 VAR_1->stbc = VAR_2->stbc;

 VAR_1->ht_en = VAR_2->htpriv.ht_option;
 VAR_1->ch_offset = VAR_2->htpriv.ch_offset;
 VAR_1->ampdu_en = 0;

 if (VAR_0->driver_ampdu_spacing != 0xFF)
  VAR_1->ampdu_spacing = VAR_0->driver_ampdu_spacing;
 else
  VAR_1->ampdu_spacing = VAR_2->htpriv.rx_ampdu_min_spacing;
 VAR_1->retry_ctrl = 0;






}
