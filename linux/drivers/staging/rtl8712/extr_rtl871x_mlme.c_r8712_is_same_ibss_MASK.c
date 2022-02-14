
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ Privacy; } ;
struct wlan_network {TYPE_1__ network; } ;
struct security_priv {scalar_t__ PrivacyAlgrthm; } ;
struct _adapter {struct security_priv securitypriv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

int FUNC_1(struct _adapter *VAR_1, struct wlan_network *VAR_2)
{
 int VAR_3 = 1;
 struct security_priv *VAR_4 = &VAR_1->securitypriv;

 if ((VAR_4->PrivacyAlgrthm != VAR_0) &&
      (VAR_2->network.Privacy == FUNC_0(0)))
  VAR_3 = 0;
 else if ((VAR_4->PrivacyAlgrthm == VAR_0) &&
   (VAR_2->network.Privacy == FUNC_0(1)))
  VAR_3 = 0;
 else
  VAR_3 = 1;
 return VAR_3;

}
