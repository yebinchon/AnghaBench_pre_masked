
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_private {scalar_t__ bss_type; int auto_tdls_timer_active; int auto_tdls_timer; TYPE_1__* adapter; } ;
struct TYPE_2__ {scalar_t__ auto_tdls; int fw_cap_info; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mwifiex_private*) ;

void FUNC_3(struct mwifiex_private *VAR_1)
{
 if (FUNC_0(VAR_1->adapter->fw_cap_info) &&
     VAR_1->adapter->auto_tdls &&
     VAR_1->bss_type == VAR_0) {
  VAR_1->auto_tdls_timer_active = 0;
  FUNC_1(&VAR_1->auto_tdls_timer);
  FUNC_2(VAR_1);
 }
}
