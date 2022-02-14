
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int value ;
typedef int uint ;
typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int ndisauthtype; int ndisencryptstatus; int dot11AuthAlgrthm; } ;
struct adapter {TYPE_1__ securitypriv; } ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_8, u8 VAR_9, u32 VAR_10)
{
 uint VAR_11 = 0;
 struct adapter *VAR_12 = (struct adapter *)FUNC_1(VAR_8);

 switch (VAR_9) {
 case 128:

  VAR_12->securitypriv.dot11AuthAlgrthm = VAR_7;



  switch ((VAR_10)&0xff) {
  case 1 :
   VAR_12->securitypriv.ndisauthtype = VAR_2;
   VAR_12->securitypriv.ndisencryptstatus = VAR_3;
   break;
  case 2:
   VAR_12->securitypriv.ndisauthtype = VAR_1;
   VAR_12->securitypriv.ndisencryptstatus = VAR_4;
   break;
  }

  FUNC_0(VAR_6, VAR_5, ("wpa_set_param:padapter->securitypriv.ndisauthtype =%d\n", VAR_12->securitypriv.ndisauthtype));

  break;

 case 130:

  break;

 case 133:
 {
  break;

 }
 case 131:



  break;

 case 134:

  VAR_11 = FUNC_2(VAR_8, VAR_10);

  break;

 case 132:



  break;

 case 129:
  break;

 default:



  VAR_11 = -VAR_0;


  break;

 }

 return VAR_11;

}
