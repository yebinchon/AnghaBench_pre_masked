
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int value ;
typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int AuthAlgrthm; int ndisencryptstatus; int ndisauthtype; } ;
struct _adapter {TYPE_1__ securitypriv; } ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct _adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_5, u8 VAR_6, u32 VAR_7)
{
 struct _adapter *VAR_8 = FUNC_0(VAR_5);

 switch (VAR_6) {
 case 128:
  VAR_8->securitypriv.AuthAlgrthm = 2;
  switch ((VAR_7) & 0xff) {
  case 1:
   VAR_8->securitypriv.ndisauthtype =
    VAR_2;
   VAR_8->securitypriv.ndisencryptstatus =
    VAR_3;
   break;
  case 2:
   VAR_8->securitypriv.ndisauthtype =
    VAR_1;
   VAR_8->securitypriv.ndisencryptstatus =
    VAR_4;
   break;
  }
  break;
 case 130:
  break;
 case 133:
  break;
 case 131:
  break;
 case 134:
  return FUNC_1(VAR_5, VAR_7);
 case 132:
  break;
 case 129:

  break;
 default:
  return -VAR_0;
 }
 return 0;
}
