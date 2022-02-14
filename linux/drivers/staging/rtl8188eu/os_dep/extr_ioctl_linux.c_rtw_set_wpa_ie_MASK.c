
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned short u16 ;
struct TYPE_2__ {unsigned short wps_ie_len; int ndisauthtype; void* ndisencryptstatus; int wps_ie; void* dot11PrivacyAlgrthm; void* dot118021XGrpPrivacy; int supplicant_ie; void* dot11AuthAlgrthm; } ;
struct adapter {TYPE_1__ securitypriv; int mlmepriv; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 unsigned short VAR_10 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_11 ;





 void* VAR_12 ;
 void* VAR_13 ;
 scalar_t__ VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int FUNC_2 (int *,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* VAR_22 ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (char*,unsigned short,int ) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (int ,int*,unsigned short) ;
 unsigned short FUNC_7 (int,unsigned short) ;
 scalar_t__ FUNC_8 (int*,unsigned short,int*,int*,int *) ;
 scalar_t__ FUNC_9 (int*,unsigned short,int*,int*,int *) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct adapter *VAR_23, char *VAR_24, unsigned short VAR_25)
{
 u8 *VAR_26 = ((void*)0);
 int VAR_27 = 0, VAR_28 = 0;
 int VAR_29 = 0;

 if ((VAR_25 > VAR_3) || (!VAR_24)) {
  FUNC_2(&VAR_23->mlmepriv, VAR_11);
  if (!VAR_24)
   return VAR_29;
  else
   return -VAR_0;
 }

 if (VAR_25) {
  VAR_26 = FUNC_4(VAR_24, VAR_25, VAR_2);
  if (!VAR_26) {
   VAR_29 = -VAR_1;
   goto exit;
  }


  {
   int VAR_30;

   FUNC_0("\n wpa_ie(length:%d):\n", VAR_25);
   for (VAR_30 = 0; VAR_30 < VAR_25; VAR_30 += 8)
    FUNC_0("0x%.2x 0x%.2x 0x%.2x 0x%.2x 0x%.2x 0x%.2x 0x%.2x 0x%.2x\n", VAR_26[VAR_30], VAR_26[VAR_30+1], VAR_26[VAR_30+2], VAR_26[VAR_30+3], VAR_26[VAR_30+4], VAR_26[VAR_30+5], VAR_26[VAR_30+6], VAR_26[VAR_30+7]);
  }

  if (VAR_25 < VAR_10) {
   FUNC_1(VAR_21, VAR_19, ("Ie len too short %d\n", VAR_25));
   VAR_29 = -1;
   goto exit;
  }

  if (FUNC_9(VAR_26, VAR_25, &VAR_27, &VAR_28, ((void*)0)) == VAR_14) {
   VAR_23->securitypriv.dot11AuthAlgrthm = VAR_22;
   VAR_23->securitypriv.ndisauthtype = VAR_5;
   FUNC_6(VAR_23->securitypriv.supplicant_ie, &VAR_26[0], VAR_25);
  }

  if (FUNC_8(VAR_26, VAR_25, &VAR_27, &VAR_28, ((void*)0)) == VAR_14) {
   VAR_23->securitypriv.dot11AuthAlgrthm = VAR_22;
   VAR_23->securitypriv.ndisauthtype = VAR_4;
   FUNC_6(VAR_23->securitypriv.supplicant_ie, &VAR_26[0], VAR_25);
  }

  switch (VAR_27) {
  case 131:
   VAR_23->securitypriv.dot118021XGrpPrivacy = VAR_13;
   VAR_23->securitypriv.ndisencryptstatus = VAR_9;
   break;
  case 128:
   VAR_23->securitypriv.dot118021XGrpPrivacy = VAR_18;
   VAR_23->securitypriv.ndisencryptstatus = VAR_6;
   break;
  case 130:
   VAR_23->securitypriv.dot118021XGrpPrivacy = VAR_15;
   VAR_23->securitypriv.ndisencryptstatus = VAR_7;
   break;
  case 132:
   VAR_23->securitypriv.dot118021XGrpPrivacy = VAR_12;
   VAR_23->securitypriv.ndisencryptstatus = VAR_8;
   break;
  case 129:
   VAR_23->securitypriv.dot118021XGrpPrivacy = VAR_17;
   VAR_23->securitypriv.ndisencryptstatus = VAR_6;
   break;
  }

  switch (VAR_28) {
  case 131:
   VAR_23->securitypriv.dot11PrivacyAlgrthm = VAR_13;
   VAR_23->securitypriv.ndisencryptstatus = VAR_9;
   break;
  case 128:
   VAR_23->securitypriv.dot11PrivacyAlgrthm = VAR_18;
   VAR_23->securitypriv.ndisencryptstatus = VAR_6;
   break;
  case 130:
   VAR_23->securitypriv.dot11PrivacyAlgrthm = VAR_15;
   VAR_23->securitypriv.ndisencryptstatus = VAR_7;
   break;
  case 132:
   VAR_23->securitypriv.dot11PrivacyAlgrthm = VAR_12;
   VAR_23->securitypriv.ndisencryptstatus = VAR_8;
   break;
  case 129:
   VAR_23->securitypriv.dot11PrivacyAlgrthm = VAR_17;
   VAR_23->securitypriv.ndisencryptstatus = VAR_6;
   break;
  }

  FUNC_2(&VAR_23->mlmepriv, VAR_11);
  {
   u16 VAR_31 = 0;
   u8 VAR_32, VAR_33[4] = {0x0, 0x50, 0xf2, 0x04};

   while (VAR_31 < VAR_25) {
    VAR_32 = VAR_26[VAR_31];
    if ((VAR_32 == VAR_16) && (!FUNC_5(&VAR_26[VAR_31+2], VAR_33, 4))) {
     FUNC_0("SET WPS_IE\n");

     VAR_23->securitypriv.wps_ie_len = FUNC_7(VAR_26[VAR_31 + 1] + 2, VAR_3 << 2);

     FUNC_6(VAR_23->securitypriv.wps_ie, &VAR_26[VAR_31], VAR_23->securitypriv.wps_ie_len);

     FUNC_10(&VAR_23->mlmepriv, VAR_11);
     VAR_31 += VAR_26[VAR_31+1]+2;
     break;
    } else {
     VAR_31 += VAR_26[VAR_31+1]+2;
    }
   }
  }
 }

 FUNC_1(VAR_21, VAR_20,
   ("rtw_set_wpa_ie: pairwise_cipher = 0x%08x padapter->securitypriv.ndisencryptstatus =%d padapter->securitypriv.ndisauthtype =%d\n",
   VAR_28, VAR_23->securitypriv.ndisencryptstatus, VAR_23->securitypriv.ndisauthtype));
exit:
 FUNC_3(VAR_26);
 return VAR_29;
}
