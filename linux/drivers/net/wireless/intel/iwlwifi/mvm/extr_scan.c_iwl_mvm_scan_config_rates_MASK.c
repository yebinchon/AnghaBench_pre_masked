
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_mvm {TYPE_1__* nvm_data; } ;
struct ieee80211_supported_band {int n_bitrates; TYPE_2__* bitrates; } ;
typedef int __le32 ;
struct TYPE_4__ {int hw_value; } ;
struct TYPE_3__ {struct ieee80211_supported_band* bands; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static __le32 FUNC_3(struct iwl_mvm *VAR_2)
{
 struct ieee80211_supported_band *VAR_3;
 unsigned int VAR_4 = 0;
 int VAR_5;

 VAR_3 = &VAR_2->nvm_data->bands[VAR_0];
 for (VAR_5 = 0; VAR_5 < VAR_3->n_bitrates; VAR_5++)
  VAR_4 |= FUNC_2(VAR_3->bitrates[VAR_5].hw_value);
 VAR_3 = &VAR_2->nvm_data->bands[VAR_1];
 for (VAR_5 = 0; VAR_5 < VAR_3->n_bitrates; VAR_5++)
  VAR_4 |= FUNC_2(VAR_3->bitrates[VAR_5].hw_value);


 VAR_4 |= FUNC_0(VAR_4);

 return FUNC_1(VAR_4);
}
