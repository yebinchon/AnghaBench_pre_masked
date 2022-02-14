
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_priv {int frag_len; int rts_thresh; int vcs_type; int vcs; int vcs_setting; } ;
struct security_priv {int binstallGrpkey; int sw_decrypt; int sw_encrypt; } ;
struct registry_priv {int software_decrypt; int software_encrypt; int frag_thresh; int rts_thresh; int vcs_type; int vrtl_carrier_sense; } ;
struct ht_priv {int ampdu_enable; int* baddbareq_issued; } ;
struct mlme_priv {int passive_mode; struct ht_priv htpriv; } ;
struct _adapter {struct security_priv securitypriv; struct mlme_priv mlmepriv; struct xmit_priv xmitpriv; struct registry_priv registrypriv; } ;


 int VAR_0 ;
 int FUNC_0 (struct _adapter*) ;
 int FUNC_1 (struct _adapter*) ;

__attribute__((used)) static void FUNC_2(struct _adapter *VAR_1)
{
 struct registry_priv *VAR_2 = &VAR_1->registrypriv;
 struct xmit_priv *VAR_3 = &VAR_1->xmitpriv;
 struct mlme_priv *VAR_4 = &VAR_1->mlmepriv;
 struct security_priv *VAR_5 = &VAR_1->securitypriv;


 VAR_3->vcs_setting = VAR_2->vrtl_carrier_sense;
 VAR_3->vcs = VAR_2->vcs_type;
 VAR_3->vcs_type = VAR_2->vcs_type;
 VAR_3->rts_thresh = VAR_2->rts_thresh;
 VAR_3->frag_len = VAR_2->frag_thresh;


 VAR_4->passive_mode = 1;

 {
  int VAR_6;
  struct ht_priv *VAR_7 = &VAR_4->htpriv;

  VAR_7->ampdu_enable = 0;
  for (VAR_6 = 0; VAR_6 < 16; VAR_6++)
   VAR_7->baddbareq_issued[VAR_6] = 0;
 }

 VAR_5->sw_encrypt = VAR_2->software_encrypt;
 VAR_5->sw_decrypt = VAR_2->software_decrypt;
 VAR_5->binstallGrpkey = VAR_0;


 FUNC_0(VAR_1);
 FUNC_1(VAR_1);

}
