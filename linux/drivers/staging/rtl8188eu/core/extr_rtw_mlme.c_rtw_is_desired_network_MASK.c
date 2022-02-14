
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint ;
typedef scalar_t__ u32 ;
struct TYPE_6__ {scalar_t__ Privacy; scalar_t__ InfrastructureMode; scalar_t__ ie_length; scalar_t__ ies; } ;
struct wlan_network {TYPE_2__ network; } ;
struct security_priv {scalar_t__ ndisencryptstatus; } ;
struct TYPE_7__ {scalar_t__ InfrastructureMode; } ;
struct TYPE_8__ {TYPE_3__ network; } ;
struct mlme_priv {TYPE_4__ cur_network; } ;
struct TYPE_5__ {int wifi_spec; } ;
struct adapter {TYPE_1__ registrypriv; struct mlme_priv mlmepriv; struct security_priv securitypriv; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct mlme_priv*,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct adapter *VAR_4, struct wlan_network *VAR_5)
{
 struct security_priv *VAR_6 = &VAR_4->securitypriv;
 struct mlme_priv *VAR_7 = &VAR_4->mlmepriv;
 u32 VAR_8;
 u32 VAR_9;


 uint VAR_10;

 int VAR_11 = 1;

 VAR_8 = VAR_6->ndisencryptstatus;
 VAR_9 = VAR_5->network.Privacy;

 if (FUNC_1(VAR_7, VAR_2)) {
  if (FUNC_2(VAR_5->network.ies+VAR_3, VAR_5->network.ie_length-VAR_3, ((void*)0), &VAR_10))
   return 1;
  else
   return 0;
 }
 if (VAR_4->registrypriv.wifi_spec == 1) {
  if ((VAR_8 == VAR_0) && (VAR_9 != 0))
   VAR_11 = 0;
 }

 if ((VAR_8 != VAR_0) && (VAR_9 == 0)) {
  FUNC_0("desired_encmode: %d, privacy: %d\n", VAR_8, VAR_9);
  VAR_11 = 0;
 }

 if (FUNC_1(VAR_7, VAR_1)) {
  if (VAR_5->network.InfrastructureMode != VAR_7->cur_network.network.InfrastructureMode)
   VAR_11 = 0;
 }

 return VAR_11;
}
