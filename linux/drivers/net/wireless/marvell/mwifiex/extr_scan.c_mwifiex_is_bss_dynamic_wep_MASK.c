
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ encryption_mode; int wpa2_enabled; int wpa_enabled; int wep_enabled; } ;
struct mwifiex_private {TYPE_1__ sec_info; } ;
struct mwifiex_bssdescriptor {scalar_t__ privacy; int bcn_rsn_ie; int bcn_wpa_ie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,struct mwifiex_private*,struct mwifiex_bssdescriptor*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static bool
FUNC_3(struct mwifiex_private *VAR_3,
      struct mwifiex_bssdescriptor *VAR_4)
{
 if (!VAR_3->sec_info.wep_enabled && !VAR_3->sec_info.wpa_enabled &&
     !VAR_3->sec_info.wpa2_enabled &&
     !FUNC_2(VAR_4->bcn_wpa_ie, VAR_2) &&
     !FUNC_1(VAR_4->bcn_rsn_ie, VAR_1) &&
     VAR_3->sec_info.encryption_mode && VAR_4->privacy) {
  FUNC_0(VAR_0, "dynamic", VAR_3, VAR_4);
  return 1;
 }
 return 0;
}
