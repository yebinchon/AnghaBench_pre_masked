
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {int ps_disabled; int hw; } ;
struct TYPE_2__ {scalar_t__ power_scheme; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int*) ;
 int VAR_2 ;
 int FUNC_1 (struct iwl_mvm*) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_2(struct iwl_mvm *VAR_4)
{
 bool VAR_5;
 int VAR_6;


 VAR_5 = (VAR_3.power_scheme == VAR_1);

 FUNC_0(VAR_4->hw,
     VAR_0,
     VAR_2,
     &VAR_5);


 if (VAR_4->ps_disabled != VAR_5) {
  bool VAR_7 = VAR_4->ps_disabled;

  VAR_4->ps_disabled = VAR_5;
  VAR_6 = FUNC_1(VAR_4);
  if (VAR_6) {
   VAR_4->ps_disabled = VAR_7;
   return VAR_6;
  }
 }

 return 0;
}
