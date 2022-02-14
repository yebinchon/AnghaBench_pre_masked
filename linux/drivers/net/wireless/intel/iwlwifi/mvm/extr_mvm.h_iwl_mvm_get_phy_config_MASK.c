
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_mvm {TYPE_1__* fw; } ;
struct TYPE_2__ {int phy_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iwl_mvm*) ;
 int FUNC_1 (struct iwl_mvm*) ;

__attribute__((used)) static inline u32 FUNC_2(struct iwl_mvm *VAR_4)
{
 u32 VAR_5 = ~(VAR_2 |
      VAR_0);
 u32 VAR_6 = FUNC_0(VAR_4);
 u32 VAR_7 = FUNC_1(VAR_4);

 VAR_5 |= VAR_7 << VAR_3 |
        VAR_6 << VAR_1;

 return VAR_4->fw->phy_config & VAR_5;
}
