
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_priv {TYPE_2__* lib; } ;
struct TYPE_4__ {TYPE_1__* bt_params; } ;
struct TYPE_3__ {scalar_t__ advanced_bt_coexist; } ;



__attribute__((used)) static inline bool FUNC_0(struct iwl_priv *VAR_0)
{
 return VAR_0->lib->bt_params &&
        VAR_0->lib->bt_params->advanced_bt_coexist;
}
