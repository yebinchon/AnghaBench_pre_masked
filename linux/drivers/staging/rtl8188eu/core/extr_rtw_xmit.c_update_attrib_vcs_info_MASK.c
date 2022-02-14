
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct pkt_attrib {int nr_frags; scalar_t__ last_txcmdsz; void* vcs_mode; scalar_t__ ampdu_en; scalar_t__ ht_en; struct sta_info* psta; } ;
struct xmit_frame {struct pkt_attrib attrib; } ;
struct sta_info {scalar_t__ cts2self; scalar_t__ rtsen; } ;
struct mlme_ext_info {scalar_t__ assoc_AP_vendor; int HT_protection; } ;
struct mlme_ext_priv {scalar_t__ cur_wireless_mode; scalar_t__ cur_bwmode; struct mlme_ext_info mlmext_info; } ;
struct TYPE_6__ {scalar_t__ rts_thresh; scalar_t__ wifi_spec; } ;
struct TYPE_5__ {scalar_t__ dot11PrivacyAlgrthm; } ;
struct TYPE_4__ {scalar_t__ frag_len; } ;
struct adapter {TYPE_3__ registrypriv; TYPE_2__ securitypriv; TYPE_1__ xmitpriv; struct mlme_ext_priv mlmeextpriv; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(struct adapter *VAR_6, struct xmit_frame *VAR_7)
{
 u32 VAR_8;
 struct pkt_attrib *VAR_9 = &VAR_7->attrib;
 struct sta_info *VAR_10 = VAR_9->psta;
 struct mlme_ext_priv *VAR_11 = &VAR_6->mlmeextpriv;
 struct mlme_ext_info *VAR_12 = &VAR_11->mlmext_info;

 if (VAR_9->nr_frags != 1)
  VAR_8 = VAR_6->xmitpriv.frag_len;
 else
  VAR_8 = VAR_9->last_txcmdsz;







 if (VAR_11->cur_wireless_mode < VAR_4 || VAR_6->registrypriv.wifi_spec) {
  if (VAR_8 > VAR_6->registrypriv.rts_thresh) {
   VAR_9->vcs_mode = VAR_3;
  } else {
   if (VAR_10->rtsen)
    VAR_9->vcs_mode = VAR_3;
   else if (VAR_10->cts2self)
    VAR_9->vcs_mode = VAR_0;
   else
    VAR_9->vcs_mode = VAR_2;
  }
 } else {
  while (1) {

   if ((VAR_12->assoc_AP_vendor == VAR_1) && VAR_9->ampdu_en &&
       (VAR_6->securitypriv.dot11PrivacyAlgrthm == VAR_5)) {
    VAR_9->vcs_mode = VAR_0;
    break;
   }


   if (VAR_10->rtsen || VAR_10->cts2self) {
    if (VAR_10->rtsen)
     VAR_9->vcs_mode = VAR_3;
    else if (VAR_10->cts2self)
     VAR_9->vcs_mode = VAR_0;

    break;
   }


   if (VAR_9->ht_en) {
    u8 VAR_13 = VAR_12->HT_protection;

    if ((VAR_11->cur_bwmode && (VAR_13 == 2 || VAR_13 == 3)) ||
        (!VAR_11->cur_bwmode && VAR_13 == 3)) {
     VAR_9->vcs_mode = VAR_3;
     break;
    }
   }


   if (VAR_8 > VAR_6->registrypriv.rts_thresh) {
    VAR_9->vcs_mode = VAR_3;
    break;
   }




   if (VAR_9->ampdu_en) {
    VAR_9->vcs_mode = VAR_3;
    break;
   }

   VAR_9->vcs_mode = VAR_2;
   break;
  }
 }
}
