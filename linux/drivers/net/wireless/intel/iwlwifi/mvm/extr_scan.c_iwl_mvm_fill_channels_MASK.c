
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iwl_mvm {TYPE_1__* nvm_data; } ;
struct ieee80211_supported_band {int n_channels; TYPE_2__* channels; } ;
struct TYPE_4__ {int hw_value; } ;
struct TYPE_3__ {struct ieee80211_supported_band* bands; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_0(struct iwl_mvm *VAR_2, u8 *VAR_3,
      u32 VAR_4)
{
 struct ieee80211_supported_band *VAR_5;
 int VAR_6, VAR_7 = 0;

 VAR_5 = &VAR_2->nvm_data->bands[VAR_0];
 for (VAR_6 = 0; VAR_6 < VAR_5->n_channels && VAR_7 < VAR_4; VAR_6++, VAR_7++)
  VAR_3[VAR_7] = VAR_5->channels[VAR_6].hw_value;
 VAR_5 = &VAR_2->nvm_data->bands[VAR_1];
 for (VAR_6 = 0; VAR_6 < VAR_5->n_channels && VAR_7 < VAR_4; VAR_6++, VAR_7++)
  VAR_3[VAR_7] = VAR_5->channels[VAR_6].hw_value;
}
