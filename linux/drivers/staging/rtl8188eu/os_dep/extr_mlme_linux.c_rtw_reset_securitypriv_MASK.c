
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct security_priv {scalar_t__ dot11AuthAlgrthm; int dot118021XGrpKeyid; void* ndisencryptstatus; void* ndisauthtype; void* dot118021XGrpPrivacy; scalar_t__ dot11PrivacyKeyIndex; void* dot11PrivacyAlgrthm; int btkip_countermeasure_time; void* btkip_countermeasure; void* PMKIDIndex; int PMKIDList; } ;
struct rt_pmkid_list {int dummy; } ;
struct adapter {struct security_priv securitypriv; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct security_priv*,int ,int) ;

void FUNC_2(struct adapter *VAR_7)
{
 u8 VAR_8;
 u8 VAR_9;
 u32 VAR_10;
 struct security_priv *VAR_11 = &VAR_7->securitypriv;

 if (VAR_11->dot11AuthAlgrthm == VAR_5) {






  FUNC_0(VAR_4, VAR_11->PMKIDList,
         sizeof(struct rt_pmkid_list) * VAR_0);
  VAR_8 = VAR_11->PMKIDIndex;
  VAR_9 = VAR_11->btkip_countermeasure;
  VAR_10 = VAR_11->btkip_countermeasure_time;

  FUNC_1(VAR_11, 0, sizeof(*VAR_11));




  FUNC_0(VAR_11->PMKIDList, VAR_4,
         sizeof(struct rt_pmkid_list) * VAR_0);
  VAR_11->PMKIDIndex = VAR_8;
  VAR_11->btkip_countermeasure = VAR_9;
  VAR_11->btkip_countermeasure_time = VAR_10;
  VAR_11->ndisauthtype = VAR_1;
  VAR_11->ndisencryptstatus = VAR_2;
 } else {

  VAR_11->dot11AuthAlgrthm = VAR_6;
  VAR_11->dot11PrivacyAlgrthm = VAR_3;
  VAR_11->dot11PrivacyKeyIndex = 0;
  VAR_11->dot118021XGrpPrivacy = VAR_3;
  VAR_11->dot118021XGrpKeyid = 1;
  VAR_11->ndisauthtype = VAR_1;
  VAR_11->ndisencryptstatus = VAR_2;
 }
}
