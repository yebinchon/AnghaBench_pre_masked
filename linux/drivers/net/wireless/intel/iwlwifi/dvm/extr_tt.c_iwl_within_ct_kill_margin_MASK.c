
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int advanced_tt; } ;
struct iwl_priv {scalar_t__ temperature; TYPE_1__ thermal_throttle; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct iwl_priv *VAR_3)
{
 s32 VAR_4 = VAR_3->temperature;
 bool VAR_5 = 0;

 if (!VAR_3->thermal_throttle.advanced_tt)
  VAR_5 = ((VAR_4 + VAR_2) >=
    VAR_1) ? 1 : 0;
 else
  VAR_5 = ((VAR_4 + VAR_2) >=
    VAR_0) ? 1 : 0;
 return VAR_5;
}
