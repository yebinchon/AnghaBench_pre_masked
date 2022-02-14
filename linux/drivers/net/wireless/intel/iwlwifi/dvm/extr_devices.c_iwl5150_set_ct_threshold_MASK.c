
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ct_kill_threshold; } ;
struct iwl_priv {TYPE_1__ hw_params; } ;
typedef int const s32 ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int const FUNC_1 (struct iwl_priv*) ;

__attribute__((used)) static void FUNC_2(struct iwl_priv *VAR_2)
{
 const s32 VAR_3 = VAR_1;
 s32 VAR_4 = (s32)FUNC_0(VAR_0) -
   FUNC_1(VAR_2);

 VAR_2->hw_params.ct_kill_threshold = VAR_4 * VAR_3;
}
