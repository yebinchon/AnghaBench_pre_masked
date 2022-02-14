
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned short u16 ;
struct TYPE_2__ {int AuthAlgrthm; int wps_phase; int wps_ie_len; int wps_ie; void* ndisencryptstatus; void* PrivacyAlgrthm; void* XGrpPrivacy; int ndisauthtype; } ;
struct _adapter {int pnetdev; TYPE_1__ securitypriv; } ;


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





 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (char*,unsigned short,int ) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int*,unsigned short,int*,int*) ;
 scalar_t__ FUNC_6 (int*,unsigned short,int*,int*) ;

__attribute__((used)) static int FUNC_7(struct _adapter *VAR_17, char *VAR_18,
       unsigned short VAR_19)
{
 u8 *VAR_20 = ((void*)0);
 int VAR_21 = 0, VAR_22 = 0;
 int VAR_23 = 0;

 if ((VAR_19 > VAR_3) || (VAR_18 == ((void*)0)))
  return -VAR_0;
 if (VAR_19) {
  VAR_20 = FUNC_1(VAR_18, VAR_19, VAR_2);
  if (VAR_20 == ((void*)0))
   return -VAR_1;
  if (VAR_19 < VAR_10) {
   VAR_23 = -VAR_0;
   goto exit;
  }
  if (FUNC_6(VAR_20, VAR_19, &VAR_21,
      &VAR_22) == 0) {
   VAR_17->securitypriv.AuthAlgrthm = 2;
   VAR_17->securitypriv.ndisauthtype =
      VAR_5;
  }
  if (FUNC_5(VAR_20, VAR_19, &VAR_21,
      &VAR_22) == 0) {
   VAR_17->securitypriv.AuthAlgrthm = 2;
   VAR_17->securitypriv.ndisauthtype =
      VAR_4;
  }
  switch (VAR_21) {
  case 131:
   VAR_17->securitypriv.XGrpPrivacy =
     VAR_12;
   VAR_17->securitypriv.ndisencryptstatus =
     VAR_9;
   break;
  case 128:
   VAR_17->securitypriv.XGrpPrivacy = VAR_16;
   VAR_17->securitypriv.ndisencryptstatus =
     VAR_6;
   break;
  case 130:
   VAR_17->securitypriv.XGrpPrivacy = VAR_13;
   VAR_17->securitypriv.ndisencryptstatus =
     VAR_7;
   break;
  case 132:
   VAR_17->securitypriv.XGrpPrivacy = VAR_11;
   VAR_17->securitypriv.ndisencryptstatus =
     VAR_8;
   break;
  case 129:
   VAR_17->securitypriv.XGrpPrivacy = VAR_15;
   VAR_17->securitypriv.ndisencryptstatus =
     VAR_6;
   break;
  }
  switch (VAR_22) {
  case 131:
   VAR_17->securitypriv.PrivacyAlgrthm =
     VAR_12;
   VAR_17->securitypriv.ndisencryptstatus =
     VAR_9;
   break;
  case 128:
   VAR_17->securitypriv.PrivacyAlgrthm = VAR_16;
   VAR_17->securitypriv.ndisencryptstatus =
     VAR_6;
   break;
  case 130:
   VAR_17->securitypriv.PrivacyAlgrthm = VAR_13;
   VAR_17->securitypriv.ndisencryptstatus =
     VAR_7;
   break;
  case 132:
   VAR_17->securitypriv.PrivacyAlgrthm = VAR_11;
   VAR_17->securitypriv.ndisencryptstatus =
     VAR_8;
   break;
  case 129:
   VAR_17->securitypriv.PrivacyAlgrthm = VAR_15;
   VAR_17->securitypriv.ndisencryptstatus =
     VAR_6;
   break;
  }
  VAR_17->securitypriv.wps_phase = 0;
  {
   u16 VAR_24 = 0;
   u8 VAR_25, VAR_26[4] = {0x0, 0x50, 0xf2, 0x04};

   while (VAR_24 < VAR_19) {
    VAR_25 = VAR_20[VAR_24];

    if ((VAR_25 == VAR_14) &&
        (!FUNC_2(&VAR_20[VAR_24 + 2], VAR_26, 4))) {
     FUNC_4(VAR_17->pnetdev, "r8712u: SET WPS_IE\n");
     VAR_17->securitypriv.wps_ie_len =
         ((VAR_20[VAR_24 + 1] + 2) <
         (VAR_3 << 2)) ?
         (VAR_20[VAR_24 + 1] + 2) :
         (VAR_3 << 2);
     FUNC_3(VAR_17->securitypriv.wps_ie,
         &VAR_20[VAR_24],
         VAR_17->securitypriv.wps_ie_len);
     VAR_17->securitypriv.wps_phase =
         1;
     FUNC_4(VAR_17->pnetdev, "r8712u: SET WPS_IE, wps_phase==true\n");
     VAR_24 += VAR_20[VAR_24 + 1] + 2;
     break;
    }

    VAR_24 += VAR_20[VAR_24 + 1] + 2;
   }
  }
 }
exit:
 FUNC_0(VAR_20);
 return VAR_23;
}
