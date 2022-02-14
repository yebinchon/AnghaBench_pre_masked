
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_priv {scalar_t__ bt_traffic_load; scalar_t__ bt_full_concurrent; TYPE_2__* lib; } ;
struct TYPE_4__ {TYPE_1__* bt_params; } ;
struct TYPE_3__ {scalar_t__ advanced_bt_coexist; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct iwl_priv*) ;

__attribute__((used)) static int FUNC_1(struct iwl_priv *VAR_3)
{
 if (VAR_3->lib->bt_params &&
     VAR_3->lib->bt_params->advanced_bt_coexist &&
     (VAR_3->bt_full_concurrent ||
      VAR_3->bt_traffic_load >= VAR_0)) {




  return VAR_2;
 }

 if (FUNC_0(VAR_3))
  return VAR_2;
 else
  return VAR_1;
}
