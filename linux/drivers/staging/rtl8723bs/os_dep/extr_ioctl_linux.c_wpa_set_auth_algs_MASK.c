
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ ndisauthtype; int dot11AuthAlgrthm; void* ndisencryptstatus; } ;
struct adapter {TYPE_1__ securitypriv; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_12, u32 VAR_13)
{
 struct adapter *VAR_14 = (struct adapter *)FUNC_1(VAR_12);
 int VAR_15 = 0;

 if ((VAR_13 & VAR_8) && (VAR_13 & VAR_7)) {
  FUNC_0("wpa_set_auth_algs, WLAN_AUTH_SHARED_KEY and WLAN_AUTH_OPEN [value:0x%x]\n", VAR_13);
  VAR_14->securitypriv.ndisencryptstatus = VAR_5;
  VAR_14->securitypriv.ndisauthtype = VAR_1;
  VAR_14->securitypriv.dot11AuthAlgrthm = VAR_9;
 } else if (VAR_13 & VAR_8) {
  FUNC_0("wpa_set_auth_algs, WLAN_AUTH_SHARED_KEY  [value:0x%x]\n", VAR_13);
  VAR_14->securitypriv.ndisencryptstatus = VAR_5;

  VAR_14->securitypriv.ndisauthtype = VAR_3;
  VAR_14->securitypriv.dot11AuthAlgrthm = VAR_11;
 } else if (VAR_13 & VAR_7) {
  FUNC_0("wpa_set_auth_algs, WLAN_AUTH_OPEN\n");

  if (VAR_14->securitypriv.ndisauthtype < VAR_4) {
   VAR_14->securitypriv.ndisauthtype = VAR_2;
   VAR_14->securitypriv.dot11AuthAlgrthm = VAR_10;
  }
 } else if (VAR_13 & VAR_6) {
  FUNC_0("wpa_set_auth_algs, WLAN_AUTH_LEAP\n");
 } else {
  FUNC_0("wpa_set_auth_algs, error!\n");
  VAR_15 = -VAR_0;
 }

 return VAR_15;

}
