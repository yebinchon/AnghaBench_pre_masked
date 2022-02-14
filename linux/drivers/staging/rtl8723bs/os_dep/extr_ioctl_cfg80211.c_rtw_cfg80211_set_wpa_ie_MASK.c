
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint ;
typedef int u8 ;
struct TYPE_2__ {scalar_t__ dot11PrivacyAlgrthm; size_t wps_ie_len; int ndisauthtype; void* ndisencryptstatus; int * wps_ie; void* dot118021XGrpPrivacy; int * supplicant_ie; void* dot11AuthAlgrthm; } ;
struct adapter {int mlmepriv; TYPE_1__ securitypriv; } ;


 int FUNC_0 (char*,size_t,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 size_t VAR_12 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_13 ;





 scalar_t__ VAR_14 ;
 void* VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int FUNC_2 (int *,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* VAR_24 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int) ;
 int * FUNC_5 (int *,int*,size_t) ;
 int * FUNC_6 (int *,int*,size_t) ;
 int * FUNC_7 (int *,size_t,int *,size_t*) ;
 int FUNC_8 (struct adapter*,int ,int *) ;
 scalar_t__ FUNC_9 (int *,int,int*,int*,int *) ;
 scalar_t__ FUNC_10 (int *,int,int*,int*,int *) ;
 int * FUNC_11 (size_t) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static int FUNC_13(struct adapter *VAR_25, u8 *VAR_26, size_t VAR_27)
{
 u8 *VAR_28 = ((void*)0), *VAR_29 = ((void*)0);
 int VAR_30 = 0, VAR_31 = 0;
 int VAR_32 = 0;
 int VAR_33 = 0;
 int VAR_34 = 0;
 u8 *VAR_35, *VAR_36;
 u8 VAR_37[]= {0, 0, 0, 0, 0, 0};

 if (VAR_26 == ((void*)0) || !VAR_27) {

  FUNC_2(&VAR_25->mlmepriv, VAR_13);
  goto exit;
 }

 if (VAR_27 > VAR_4+VAR_5+VAR_3) {
  VAR_32 = -VAR_0;
  goto exit;
 }

 VAR_28 = FUNC_11(VAR_27);
 if (VAR_28 == ((void*)0)) {
  VAR_32 = -VAR_1;
  goto exit;
 }

 FUNC_4(VAR_28, VAR_26 , VAR_27);


 {
  int VAR_38;
  FUNC_0("set wpa_ie(length:%zu):\n", VAR_27);
  for (VAR_38 = 0;VAR_38<VAR_27;VAR_38 =VAR_38+8)
   FUNC_0("0x%.2x 0x%.2x 0x%.2x 0x%.2x 0x%.2x 0x%.2x 0x%.2x 0x%.2x\n", VAR_28[VAR_38], VAR_28[VAR_38+1], VAR_28[VAR_38+2], VAR_28[VAR_38+3], VAR_28[VAR_38+4], VAR_28[VAR_38+5], VAR_28[VAR_38+6], VAR_28[VAR_38+7]);
 }

 VAR_29 = VAR_28;
 if (VAR_27 < VAR_12) {
  FUNC_1(VAR_23, VAR_21, ("Ie len too short %d\n", VAR_27));
  VAR_32 = -1;
  goto exit;
 }

 VAR_35 = FUNC_6(VAR_28, &VAR_33, VAR_27);
 if (VAR_35 && VAR_33>0)
 {
  if (FUNC_10(VAR_35, VAR_33+2, &VAR_30, &VAR_31, ((void*)0)) == VAR_16)
  {
   VAR_25->securitypriv.dot11AuthAlgrthm = VAR_24;
   VAR_25->securitypriv.ndisauthtype =VAR_7;
   FUNC_4(VAR_25->securitypriv.supplicant_ie, &VAR_35[0], VAR_33+2);

   FUNC_0("got wpa_ie, wpa_ielen:%u\n", VAR_33);
  }
 }

 VAR_36 = FUNC_5(VAR_28, &VAR_34, VAR_27);
 if (VAR_36 && VAR_34>0)
 {
  if (FUNC_9(VAR_36, VAR_34+2, &VAR_30, &VAR_31, ((void*)0)) == VAR_16)
  {
   VAR_25->securitypriv.dot11AuthAlgrthm = VAR_24;
   VAR_25->securitypriv.ndisauthtype =VAR_6;
   FUNC_4(VAR_25->securitypriv.supplicant_ie, &VAR_36[0], VAR_34+2);

   FUNC_0("got wpa2_ie, wpa2_ielen:%u\n", VAR_34);
  }
 }

 if (VAR_30 == 0)
 {
  VAR_30 = 131;
 }
 if (VAR_31 == 0)
 {
  VAR_31 = 131;
 }

 switch (VAR_30)
 {
  case 131:
   VAR_25->securitypriv.dot118021XGrpPrivacy = VAR_15;
   VAR_25->securitypriv.ndisencryptstatus =VAR_11;
   break;
  case 128:
   VAR_25->securitypriv.dot118021XGrpPrivacy = VAR_20;
   VAR_25->securitypriv.ndisencryptstatus = VAR_8;
   break;
  case 130:
   VAR_25->securitypriv.dot118021XGrpPrivacy = VAR_17;
   VAR_25->securitypriv.ndisencryptstatus = VAR_9;
   break;
  case 132:
   VAR_25->securitypriv.dot118021XGrpPrivacy = VAR_14;
   VAR_25->securitypriv.ndisencryptstatus = VAR_10;
   break;
  case 129:
   VAR_25->securitypriv.dot118021XGrpPrivacy = VAR_19;
   VAR_25->securitypriv.ndisencryptstatus = VAR_8;
   break;
 }

 switch (VAR_31)
 {
  case 131:
   VAR_25->securitypriv.dot11PrivacyAlgrthm = VAR_15;
   VAR_25->securitypriv.ndisencryptstatus =VAR_11;
   break;
  case 128:
   VAR_25->securitypriv.dot11PrivacyAlgrthm = VAR_20;
   VAR_25->securitypriv.ndisencryptstatus = VAR_8;
   break;
  case 130:
   VAR_25->securitypriv.dot11PrivacyAlgrthm = VAR_17;
   VAR_25->securitypriv.ndisencryptstatus = VAR_9;
   break;
  case 132:
   VAR_25->securitypriv.dot11PrivacyAlgrthm = VAR_14;
   VAR_25->securitypriv.ndisencryptstatus = VAR_10;
   break;
  case 129:
   VAR_25->securitypriv.dot11PrivacyAlgrthm = VAR_19;
   VAR_25->securitypriv.ndisencryptstatus = VAR_8;
   break;
 }

 {
  uint VAR_39;
  u8 *VAR_40;

  VAR_40 = FUNC_7(VAR_28, VAR_27, ((void*)0), &VAR_39);
  if (VAR_40 && VAR_39 > 0) {
   FUNC_0("got wps_ie, wps_ielen:%u\n", VAR_39);
   VAR_25->securitypriv.wps_ie_len = VAR_39<VAR_5?VAR_39:VAR_5;
   FUNC_4(VAR_25->securitypriv.wps_ie, VAR_40, VAR_25->securitypriv.wps_ie_len);
   FUNC_12(&VAR_25->mlmepriv, VAR_13);
  } else {
   FUNC_2(&VAR_25->mlmepriv, VAR_13);
  }
 }


 if (VAR_25->securitypriv.dot11PrivacyAlgrthm == VAR_17
  || VAR_25->securitypriv.dot11PrivacyAlgrthm == VAR_18
  || VAR_25->securitypriv.dot11PrivacyAlgrthm == VAR_14)


  FUNC_8(VAR_25, VAR_2, VAR_37);

 FUNC_1(VAR_23, VAR_22,
  ("rtw_set_wpa_ie: pairwise_cipher = 0x%08x padapter->securitypriv.ndisencryptstatus =%d padapter->securitypriv.ndisauthtype =%d\n",
  VAR_31, VAR_25->securitypriv.ndisencryptstatus, VAR_25->securitypriv.ndisauthtype));

exit:
 FUNC_3(VAR_28);
 if (VAR_32)
  FUNC_2(&VAR_25->mlmepriv, VAR_13);
 return VAR_32;
}
