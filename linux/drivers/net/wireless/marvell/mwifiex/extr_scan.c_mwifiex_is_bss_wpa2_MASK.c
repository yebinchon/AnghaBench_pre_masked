
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ wpa2_enabled; int wpa_enabled; int wep_enabled; } ;
struct mwifiex_private {TYPE_1__ sec_info; } ;
struct mwifiex_bssdescriptor {int bcn_rsn_ie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,struct mwifiex_private*,struct mwifiex_bssdescriptor*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static bool
FUNC_2(struct mwifiex_private *VAR_2,
      struct mwifiex_bssdescriptor *VAR_3)
{
 if (!VAR_2->sec_info.wep_enabled && !VAR_2->sec_info.wpa_enabled &&
     VAR_2->sec_info.wpa2_enabled &&
     FUNC_1(VAR_3->bcn_rsn_ie, VAR_1)) {




  FUNC_0(VAR_0, "WAP2", VAR_2, VAR_3);
  return 1;
 }
 return 0;
}
