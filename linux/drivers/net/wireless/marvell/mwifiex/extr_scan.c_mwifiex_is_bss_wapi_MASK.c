
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ wapi_enabled; } ;
struct mwifiex_private {TYPE_1__ sec_info; } ;
struct mwifiex_bssdescriptor {int bcn_wapi_ie; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool
FUNC_1(struct mwifiex_private *VAR_1,
      struct mwifiex_bssdescriptor *VAR_2)
{
 if (VAR_1->sec_info.wapi_enabled &&
     FUNC_0(VAR_2->bcn_wapi_ie, VAR_0))
  return 1;
 return 0;
}
