
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union iwreq_data {int param; } ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int flags; int value; } ;
struct TYPE_2__ {int btkip_countermeasure; int ndisauthtype; int AuthAlgrthm; void* XGrpPrivacy; void* PrivacyAlgrthm; int ndisencryptstatus; } ;
struct _adapter {TYPE_1__ securitypriv; } ;


 int VAR_0 ;




 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 struct _adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_6,
    struct iw_request_info *VAR_7,
    union iwreq_data *VAR_8, char *VAR_9)
{
 struct _adapter *VAR_10 = FUNC_0(VAR_6);
 struct iw_param *VAR_11 = (struct iw_param *)&(VAR_8->param);
 int VAR_12;
 int VAR_13;
 int VAR_14 = 0;

 VAR_12 = VAR_11->flags & VAR_1;
 VAR_13 = VAR_11->value;
 switch (VAR_12) {
 case 128:
  break;
 case 135:
  break;
 case 136:
  break;
 case 133:



  break;
 case 130:
  if (VAR_13) {

   VAR_10->securitypriv.btkip_countermeasure = 1;
  } else {

   VAR_10->securitypriv.btkip_countermeasure = 0;
  }
  break;
 case 134:
  if (VAR_10->securitypriv.ndisencryptstatus ==
      VAR_3) {





   break;
  }

  if (VAR_13) {
   VAR_10->securitypriv.ndisencryptstatus =
       VAR_4;
   VAR_10->securitypriv.PrivacyAlgrthm =
      VAR_5;
   VAR_10->securitypriv.XGrpPrivacy =
      VAR_5;
   VAR_10->securitypriv.AuthAlgrthm = 0;
   VAR_10->securitypriv.ndisauthtype =
      VAR_2;
  }
  break;
 case 137:
  VAR_14 = FUNC_1(VAR_6, (u32)VAR_13);
  break;
 case 129:
  break;
 case 131:
  break;
 case 132:
  break;
 default:
  return -VAR_0;
 }

 return VAR_14;
}
