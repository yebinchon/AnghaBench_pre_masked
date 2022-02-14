
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wpa2_enabled; int wpa_enabled; scalar_t__ wep_enabled; } ;
struct mwifiex_private {TYPE_1__ sec_info; } ;
struct mwifiex_bssdescriptor {scalar_t__ privacy; } ;



__attribute__((used)) static bool
FUNC_0(struct mwifiex_private *VAR_0,
     struct mwifiex_bssdescriptor *VAR_1)
{
 if (VAR_0->sec_info.wep_enabled && !VAR_0->sec_info.wpa_enabled &&
     !VAR_0->sec_info.wpa2_enabled && VAR_1->privacy) {
  return 1;
 }
 return 0;
}
