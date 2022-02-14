
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ ndisauthtype; int AuthAlgrthm; void* ndisencryptstatus; } ;
struct _adapter {TYPE_1__ securitypriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 struct _adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_8, u32 VAR_9)
{
 struct _adapter *VAR_10 = FUNC_0(VAR_8);
 int VAR_11 = 0;

 if ((VAR_9 & VAR_1) && (VAR_9 & VAR_0)) {
  VAR_10->securitypriv.ndisencryptstatus =
       VAR_7;
  VAR_10->securitypriv.ndisauthtype =
       VAR_3;
  VAR_10->securitypriv.AuthAlgrthm = 3;
 } else if (VAR_9 & VAR_1) {
  VAR_10->securitypriv.ndisencryptstatus =
       VAR_7;
  VAR_10->securitypriv.ndisauthtype = VAR_5;
  VAR_10->securitypriv.AuthAlgrthm = 1;
 } else if (VAR_9 & VAR_0) {
  if (VAR_10->securitypriv.ndisauthtype <
       VAR_6) {
   VAR_10->securitypriv.ndisauthtype =
       VAR_4;
   VAR_10->securitypriv.AuthAlgrthm = 0;
  }
 } else {
  VAR_11 = -VAR_2;
 }
 return VAR_11;
}
