
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {TYPE_1__* hw; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {scalar_t__ extra_beacon_tailroom; } ;


 int FUNC_0 (struct iwl_mvm*,char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_1(struct iwl_mvm *VAR_0,
      char *VAR_1, size_t VAR_2,
      loff_t *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);

 VAR_0->hw->extra_beacon_tailroom = 0;
 return VAR_4 ?: VAR_2;
}
