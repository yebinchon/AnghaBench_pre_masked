
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned short u16 ;
struct TYPE_2__ {int* supplicant_ie; scalar_t__ dot11PrivacyAlgrthm; int wps_ie_len; int* wps_ie; int ndisauthtype; void* ndisencryptstatus; void* dot118021XGrpPrivacy; void* dot11AuthAlgrthm; } ;
struct adapter {TYPE_1__ securitypriv; int mlmepriv; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 unsigned short VAR_11 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_12 ;





 scalar_t__ VAR_13 ;
 void* VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int FUNC_2 (int *,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* VAR_24 ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int*,...) ;
 int FUNC_6 (struct adapter*,int ,int*) ;
 scalar_t__ FUNC_7 (int*,unsigned short,int*,int*,int *) ;
 scalar_t__ FUNC_8 (int*,unsigned short,int*,int*,int *) ;
 int* FUNC_9 (unsigned short) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct adapter *VAR_25, char *VAR_26, unsigned short VAR_27)
{
 u8 *VAR_28 = ((void*)0);
 int VAR_29 = 0, VAR_30 = 0;
 int VAR_31 = 0;
 u8 VAR_32[]= {0, 0, 0, 0, 0, 0};

 if ((VAR_27 > VAR_3) || (VAR_26 == ((void*)0))) {
  FUNC_2(&VAR_25->mlmepriv, VAR_12);
  if (VAR_26 == ((void*)0))
   return VAR_31;
  else
   return -VAR_0;
 }

 if (VAR_27) {
  VAR_28 = FUNC_9(VAR_27);
  if (VAR_28 == ((void*)0)) {
   VAR_31 = -VAR_1;
   goto exit;
  }

  FUNC_5(VAR_28, VAR_26 , VAR_27);


  {
   int VAR_33;
   FUNC_0("\n wpa_ie(length:%d):\n", VAR_27);
   for (VAR_33 = 0;VAR_33<VAR_27;VAR_33 =VAR_33+8)
    FUNC_0("0x%.2x 0x%.2x 0x%.2x 0x%.2x 0x%.2x 0x%.2x 0x%.2x 0x%.2x\n", VAR_28[VAR_33], VAR_28[VAR_33+1], VAR_28[VAR_33+2], VAR_28[VAR_33+3], VAR_28[VAR_33+4], VAR_28[VAR_33+5], VAR_28[VAR_33+6], VAR_28[VAR_33+7]);
  }

  if (VAR_27 < VAR_11) {
   FUNC_1(VAR_23, VAR_21, ("Ie len too short %d\n", VAR_27));
   VAR_31 = -1;
   goto exit;
  }

  if (FUNC_8(VAR_28, VAR_27, &VAR_29, &VAR_30, ((void*)0)) == VAR_15) {
   VAR_25->securitypriv.dot11AuthAlgrthm = VAR_24;
   VAR_25->securitypriv.ndisauthtype =VAR_6;
   FUNC_5(VAR_25->securitypriv.supplicant_ie, &VAR_28[0], VAR_27);
  }

  if (FUNC_7(VAR_28, VAR_27, &VAR_29, &VAR_30, ((void*)0)) == VAR_15) {
   VAR_25->securitypriv.dot11AuthAlgrthm = VAR_24;
   VAR_25->securitypriv.ndisauthtype =VAR_5;
   FUNC_5(VAR_25->securitypriv.supplicant_ie, &VAR_28[0], VAR_27);
  }

  if (VAR_29 == 0)
   VAR_29 = 131;
  if (VAR_30 == 0)
   VAR_30 = 131;

  switch (VAR_29) {
   case 131:
    VAR_25->securitypriv.dot118021XGrpPrivacy = VAR_14;
    VAR_25->securitypriv.ndisencryptstatus =VAR_10;
    break;
   case 128:
    VAR_25->securitypriv.dot118021XGrpPrivacy = VAR_20;
    VAR_25->securitypriv.ndisencryptstatus = VAR_7;
    break;
   case 130:
    VAR_25->securitypriv.dot118021XGrpPrivacy = VAR_16;
    VAR_25->securitypriv.ndisencryptstatus = VAR_8;
    break;
   case 132:
    VAR_25->securitypriv.dot118021XGrpPrivacy = VAR_13;
    VAR_25->securitypriv.ndisencryptstatus = VAR_9;
    break;
   case 129:
    VAR_25->securitypriv.dot118021XGrpPrivacy = VAR_19;
    VAR_25->securitypriv.ndisencryptstatus = VAR_7;
    break;
  }

  switch (VAR_30) {
   case 131:
    VAR_25->securitypriv.dot11PrivacyAlgrthm = VAR_14;
    VAR_25->securitypriv.ndisencryptstatus =VAR_10;
    break;
   case 128:
    VAR_25->securitypriv.dot11PrivacyAlgrthm = VAR_20;
    VAR_25->securitypriv.ndisencryptstatus = VAR_7;
    break;
   case 130:
    VAR_25->securitypriv.dot11PrivacyAlgrthm = VAR_16;
    VAR_25->securitypriv.ndisencryptstatus = VAR_8;
    break;
   case 132:
    VAR_25->securitypriv.dot11PrivacyAlgrthm = VAR_13;
    VAR_25->securitypriv.ndisencryptstatus = VAR_9;
    break;
   case 129:
    VAR_25->securitypriv.dot11PrivacyAlgrthm = VAR_19;
    VAR_25->securitypriv.ndisencryptstatus = VAR_7;
    break;
  }

  FUNC_2(&VAR_25->mlmepriv, VAR_12);
  {
   u16 VAR_34 = 0;
   u8 VAR_35, VAR_36[4]={0x0, 0x50, 0xf2, 0x04};

   while (VAR_34 < VAR_27) {
    VAR_35 = VAR_28[VAR_34];

    if ((VAR_35 == VAR_18) && (!FUNC_4(&VAR_28[VAR_34+2], VAR_36, 4))) {
     FUNC_0("SET WPS_IE\n");

     VAR_25->securitypriv.wps_ie_len = ((VAR_28[VAR_34+1]+2) < VAR_4) ? (VAR_28[VAR_34+1]+2):VAR_4;

     FUNC_5(VAR_25->securitypriv.wps_ie, &VAR_28[VAR_34], VAR_25->securitypriv.wps_ie_len);

     FUNC_10(&VAR_25->mlmepriv, VAR_12);

     VAR_34 += VAR_28[VAR_34+1]+2;

     break;
    } else {
     VAR_34 += VAR_28[VAR_34+1]+2;
    }
   }
  }
 }


        if (VAR_25->securitypriv.dot11PrivacyAlgrthm == VAR_16
                || VAR_25->securitypriv.dot11PrivacyAlgrthm == VAR_17
                || VAR_25->securitypriv.dot11PrivacyAlgrthm == VAR_13)


                FUNC_6(VAR_25, VAR_2, VAR_32);

 FUNC_1(VAR_23, VAR_22,
   ("rtw_set_wpa_ie: pairwise_cipher = 0x%08x padapter->securitypriv.ndisencryptstatus =%d padapter->securitypriv.ndisauthtype =%d\n",
    VAR_30, VAR_25->securitypriv.ndisencryptstatus, VAR_25->securitypriv.ndisauthtype));

exit:

 FUNC_3(VAR_28);

 return VAR_31;
}
