
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct security_priv {int AuthAlgrthm; int XGrpKeyid; int wps_phase; int ndisencryptstatus; int ndisauthtype; void* XGrpPrivacy; scalar_t__ PrivacyKeyIndex; void* PrivacyAlgrthm; void* btkip_countermeasure; void* PMKIDIndex; int * PMKIDList; int tkip_timer; } ;
struct _adapter {struct security_priv securitypriv; int pnetdev; } ;
struct RT_PMKID_LIST {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct _adapter*) ;
 int VAR_5 ;
 int FUNC_4 (int *,int ,int ) ;

void FUNC_5(struct _adapter *VAR_6)
{
 u8 VAR_7 = 0;
 u8 VAR_8 = 0x00;

 FUNC_3(VAR_6);
 FUNC_2(VAR_6->pnetdev);
 if (VAR_6->securitypriv.AuthAlgrthm == 2) {






  FUNC_0(&VAR_4[0],
         &VAR_6->securitypriv.PMKIDList[0],
         sizeof(struct RT_PMKID_LIST) * VAR_0);
  VAR_7 = VAR_6->securitypriv.PMKIDIndex;
  VAR_8 =
   VAR_6->securitypriv.btkip_countermeasure;
  FUNC_1((unsigned char *)&VAR_6->securitypriv, 0,
         sizeof(struct security_priv));
  FUNC_4(&VAR_6->securitypriv.tkip_timer,
       VAR_5, 0);



  FUNC_0(&VAR_6->securitypriv.PMKIDList[0],
         &VAR_4[0],
         sizeof(struct RT_PMKID_LIST) * VAR_0);
  VAR_6->securitypriv.PMKIDIndex = VAR_7;
  VAR_6->securitypriv.btkip_countermeasure =
      VAR_8;
 } else {
  struct security_priv *VAR_9 = &VAR_6->securitypriv;

  VAR_9->AuthAlgrthm = 0;
  VAR_9->PrivacyAlgrthm = VAR_3;
  VAR_9->PrivacyKeyIndex = 0;
  VAR_9->XGrpPrivacy = VAR_3;
  VAR_9->XGrpKeyid = 1;
  VAR_9->ndisauthtype = VAR_1;
  VAR_9->ndisencryptstatus = VAR_2;
  VAR_9->wps_phase = 0;
 }
}
