
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct security_priv {scalar_t__ dot11AuthAlgrthm; int dot118021XGrpKeyid; void* ndisencryptstatus; void* ndisauthtype; void* dot118021XGrpPrivacy; scalar_t__ dot11PrivacyKeyIndex; void* dot11PrivacyAlgrthm; int btkip_countermeasure_time; void* btkip_countermeasure; void* PMKIDIndex; int * PMKIDList; } ;
struct mlme_ext_priv {scalar_t__ mgnt_80211w_IPN_rx; } ;
struct adapter {int security_key_mutex; struct security_priv securitypriv; struct mlme_ext_priv mlmeextpriv; } ;
typedef int RT_PMKID_LIST ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct adapter *VAR_7)
{
 u8 VAR_8 = 0;
 u8 VAR_9 = 0x00;
 u32 VAR_10 = 0;

 struct mlme_ext_priv *VAR_11 = &VAR_7->mlmeextpriv;

 FUNC_2(&VAR_7->security_key_mutex);

 if (VAR_7->securitypriv.dot11AuthAlgrthm == VAR_5) {







  FUNC_0(&VAR_4[ 0 ], &VAR_7->securitypriv.PMKIDList[ 0 ], sizeof(RT_PMKID_LIST) * VAR_0);
  VAR_8 = VAR_7->securitypriv.PMKIDIndex;
  VAR_9 = VAR_7->securitypriv.btkip_countermeasure;
  VAR_10 = VAR_7->securitypriv.btkip_countermeasure_time;


  VAR_11->mgnt_80211w_IPN_rx = 0;

  FUNC_1((unsigned char *)&VAR_7->securitypriv, 0, sizeof(struct security_priv));



  FUNC_0(&VAR_7->securitypriv.PMKIDList[ 0 ], &VAR_4[ 0 ], sizeof(RT_PMKID_LIST) * VAR_0);
  VAR_7->securitypriv.PMKIDIndex = VAR_8;
  VAR_7->securitypriv.btkip_countermeasure = VAR_9;
  VAR_7->securitypriv.btkip_countermeasure_time = VAR_10;

  VAR_7->securitypriv.ndisauthtype = VAR_1;
  VAR_7->securitypriv.ndisencryptstatus = VAR_2;

 } else {



  struct security_priv *VAR_12 = &VAR_7->securitypriv;

  VAR_12->dot11AuthAlgrthm = VAR_6;
  VAR_12->dot11PrivacyAlgrthm = VAR_3;
  VAR_12->dot11PrivacyKeyIndex = 0;

  VAR_12->dot118021XGrpPrivacy = VAR_3;
  VAR_12->dot118021XGrpKeyid = 1;

  VAR_12->ndisauthtype = VAR_1;
  VAR_12->ndisencryptstatus = VAR_2;

 }

 FUNC_3(&VAR_7->security_key_mutex);
}
