
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_sta_node {int is_11n_enabled; } ;
struct mwifiex_private {scalar_t__ bss_role; scalar_t__ bss_mode; TYPE_1__* adapter; int ap_11n_enabled; } ;
struct TYPE_2__ {int adhoc_11n_enabled; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct mwifiex_private *VAR_2,
          struct mwifiex_sta_node *VAR_3)
{
 if (!VAR_3 || ((VAR_2->bss_role == VAR_0) &&
        !VAR_2->ap_11n_enabled) ||
     ((VAR_2->bss_mode == VAR_1) &&
      !VAR_2->adapter->adhoc_11n_enabled))
  return 0;

 return VAR_3->is_11n_enabled;
}
