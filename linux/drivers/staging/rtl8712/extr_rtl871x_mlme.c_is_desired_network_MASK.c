
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
struct TYPE_5__ {scalar_t__ Privacy; scalar_t__ InfrastructureMode; int IELength; int IEs; } ;
struct wlan_network {TYPE_1__ network; } ;
struct security_priv {scalar_t__ PrivacyAlgrthm; scalar_t__ wps_phase; } ;
struct TYPE_6__ {scalar_t__ InfrastructureMode; } ;
struct TYPE_7__ {TYPE_2__ network; } ;
struct TYPE_8__ {TYPE_3__ cur_network; } ;
struct _adapter {TYPE_4__ mlmepriv; struct security_priv securitypriv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct _adapter *VAR_2,
    struct wlan_network *VAR_3)
{
 u8 VAR_4[512];
 uint VAR_5;
 int VAR_6 = 1;
 struct security_priv *VAR_7 = &VAR_2->securitypriv;

 if (VAR_7->wps_phase) {
  if (FUNC_1(VAR_3->network.IEs,
      VAR_3->network.IELength, VAR_4,
      &VAR_5))
   return 1;
  return 0;
 }
 if ((VAR_7->PrivacyAlgrthm != VAR_1) &&
      (VAR_3->network.Privacy == 0))
  VAR_6 = 0;
 if (FUNC_0(&VAR_2->mlmepriv, VAR_0)) {
  if (VAR_3->network.InfrastructureMode !=
   VAR_2->mlmepriv.cur_network.network.
   InfrastructureMode)
   VAR_6 = 0;
 }
 return VAR_6;
}
