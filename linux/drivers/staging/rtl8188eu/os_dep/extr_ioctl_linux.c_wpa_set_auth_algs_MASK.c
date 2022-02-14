
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ ndisauthtype; int dot11AuthAlgrthm; void* ndisencryptstatus; } ;
struct adapter {TYPE_1__ securitypriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_12, u32 VAR_13)
{
 struct adapter *VAR_14 = (struct adapter *)FUNC_1(VAR_12);
 int VAR_15 = 0;

 if ((VAR_13 & VAR_2) && (VAR_13 & VAR_1)) {
  FUNC_0("wpa_set_auth_algs, AUTH_ALG_SHARED_KEY and  AUTH_ALG_OPEN_SYSTEM [value:0x%x]\n", VAR_13);
  VAR_14->securitypriv.ndisencryptstatus = VAR_8;
  VAR_14->securitypriv.ndisauthtype = VAR_4;
  VAR_14->securitypriv.dot11AuthAlgrthm = VAR_9;
 } else if (VAR_13 & VAR_2) {
  FUNC_0("wpa_set_auth_algs, AUTH_ALG_SHARED_KEY  [value:0x%x]\n", VAR_13);
  VAR_14->securitypriv.ndisencryptstatus = VAR_8;

  VAR_14->securitypriv.ndisauthtype = VAR_6;
  VAR_14->securitypriv.dot11AuthAlgrthm = VAR_11;
 } else if (VAR_13 & VAR_1) {
  FUNC_0("wpa_set_auth_algs, AUTH_ALG_OPEN_SYSTEM\n");
  if (VAR_14->securitypriv.ndisauthtype < VAR_7) {
   VAR_14->securitypriv.ndisauthtype = VAR_5;
   VAR_14->securitypriv.dot11AuthAlgrthm = VAR_10;
  }
 } else if (VAR_13 & VAR_0) {
  FUNC_0("wpa_set_auth_algs, AUTH_ALG_LEAP\n");
 } else {
  FUNC_0("wpa_set_auth_algs, error!\n");
  VAR_15 = -VAR_3;
 }
 return VAR_15;
}
