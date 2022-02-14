
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_6__ {scalar_t__ Privacy; scalar_t__ InfrastructureMode; scalar_t__ IELength; scalar_t__ IEs; } ;
struct wlan_network {TYPE_2__ network; } ;
struct security_priv {scalar_t__ ndisencryptstatus; scalar_t__ ndisauthtype; } ;
struct TYPE_7__ {scalar_t__ InfrastructureMode; } ;
struct TYPE_8__ {TYPE_3__ network; } ;
struct mlme_priv {TYPE_4__ cur_network; } ;
struct TYPE_5__ {int wifi_spec; } ;
struct adapter {TYPE_1__ registrypriv; struct mlme_priv mlmepriv; struct security_priv securitypriv; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct mlme_priv*,int ) ;
 int * FUNC_2 (scalar_t__,int ,scalar_t__*,scalar_t__) ;
 int * FUNC_3 (scalar_t__,scalar_t__,int *,scalar_t__*) ;

int FUNC_4(struct adapter *VAR_7, struct wlan_network *VAR_8)
{
 struct security_priv *VAR_9 = &VAR_7->securitypriv;
 struct mlme_priv *VAR_10 = &VAR_7->mlmepriv;
 u32 VAR_11;
 u32 VAR_12;


 uint VAR_13;

 int VAR_14 = 1;

 VAR_11 = VAR_9->ndisencryptstatus;
 VAR_12 = VAR_8->network.Privacy;

 if (FUNC_1(VAR_10, VAR_3)) {
  if (FUNC_3(VAR_8->network.IEs+VAR_5, VAR_8->network.IELength-VAR_5, ((void*)0), &VAR_13) != ((void*)0))
   return 1;
  else
   return 0;

 }
 if (VAR_7->registrypriv.wifi_spec == 1) {
  u8 *VAR_15 = ((void*)0);
  uint VAR_16 = 0;

  if ((VAR_11 == VAR_1) && (VAR_12 != 0))
     VAR_14 = 0;

  if (VAR_9->ndisauthtype == VAR_0) {
   VAR_15 = FUNC_2(VAR_8->network.IEs + VAR_4, VAR_6, &VAR_16, (VAR_8->network.IELength - VAR_4));
   if (VAR_15 && VAR_16 > 0) {
    VAR_14 = 1;
   } else {
    VAR_14 = 0;
   }
  }
 }


 if ((VAR_11 != VAR_1) && (VAR_12 == 0)) {
  FUNC_0("desired_encmode: %d, privacy: %d\n", VAR_11, VAR_12);
  VAR_14 = 0;
 }

 if (FUNC_1(VAR_10, VAR_2) == 1) {
  if (VAR_8->network.InfrastructureMode != VAR_10->cur_network.network.InfrastructureMode)
   VAR_14 = 0;
 }


 return VAR_14;
}
