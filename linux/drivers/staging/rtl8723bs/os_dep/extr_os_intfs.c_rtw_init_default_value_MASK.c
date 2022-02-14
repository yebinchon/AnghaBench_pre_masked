
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xmit_priv {int frag_len; int vcs_type; int vcs; int vcs_setting; } ;
struct security_priv {int dot118021XGrpKeyid; int ndisencryptstatus; int ndisauthtype; void* dot118021XGrpPrivacy; scalar_t__ dot11PrivacyKeyIndex; void* dot11PrivacyAlgrthm; int dot11AuthAlgrthm; int sw_decrypt; int sw_encrypt; void* binstallKCK_KEK; void* binstallGrpkey; } ;
struct registry_priv {int software_decrypt; int software_encrypt; int frag_thresh; int vcs_type; int vrtl_carrier_sense; } ;
struct TYPE_2__ {int ampdu_enable; } ;
struct mlme_priv {TYPE_1__ htpriv; int scan_mode; } ;
struct adapter {int fix_rate; int driver_ampdu_spacing; int driver_rx_ampdu_factor; scalar_t__ bNotifyChannelChange; scalar_t__ bLinkInfoDump; struct security_priv securitypriv; struct mlme_priv mlmepriv; struct xmit_priv xmitpriv; struct registry_priv registrypriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct adapter*,int ) ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*) ;

__attribute__((used)) static void FUNC_4(struct adapter *VAR_8)
{
 struct registry_priv *VAR_9 = &VAR_8->registrypriv;
 struct xmit_priv *VAR_10 = &VAR_8->xmitpriv;
 struct mlme_priv *VAR_11 = &VAR_8->mlmepriv;
 struct security_priv *VAR_12 = &VAR_8->securitypriv;


 VAR_10->vcs_setting = VAR_9->vrtl_carrier_sense;
 VAR_10->vcs = VAR_9->vcs_type;
 VAR_10->vcs_type = VAR_9->vcs_type;

 VAR_10->frag_len = VAR_9->frag_thresh;




 VAR_11->scan_mode = VAR_4;





 VAR_11->htpriv.ampdu_enable = 0;



 VAR_12->binstallGrpkey = VAR_5;



 VAR_12->sw_encrypt = VAR_9->software_encrypt;
 VAR_12->sw_decrypt = VAR_9->software_decrypt;

 VAR_12->dot11AuthAlgrthm = VAR_7;
 VAR_12->dot11PrivacyAlgrthm = VAR_6;

 VAR_12->dot11PrivacyKeyIndex = 0;

 VAR_12->dot118021XGrpPrivacy = VAR_6;
 VAR_12->dot118021XGrpKeyid = 1;

 VAR_12->ndisauthtype = VAR_2;
 VAR_12->ndisencryptstatus = VAR_3;


 FUNC_2(VAR_8);
 FUNC_3(VAR_8);


 FUNC_1(VAR_8);


 FUNC_0(VAR_8, VAR_0);
 FUNC_0(VAR_8, VAR_1);
 VAR_8->bLinkInfoDump = 0;
 VAR_8->bNotifyChannelChange = 0;


 VAR_8->fix_rate = 0xFF;
 VAR_8->driver_ampdu_spacing = 0xFF;
 VAR_8->driver_rx_ampdu_factor = 0xFF;

}
