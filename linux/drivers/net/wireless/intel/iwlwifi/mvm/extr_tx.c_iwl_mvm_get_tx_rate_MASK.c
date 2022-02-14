
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct iwl_mvm {TYPE_3__* nvm_data; } ;
struct TYPE_5__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {size_t band; TYPE_2__ control; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_6__ {int * bands; } ;
struct TYPE_4__ {int flags; int idx; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,char*,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,struct ieee80211_sta*) ;

__attribute__((used)) static u32 FUNC_4(struct iwl_mvm *VAR_7,
          struct ieee80211_tx_info *VAR_8,
          struct ieee80211_sta *VAR_9)
{
 int VAR_10;
 u8 VAR_11;
 u32 VAR_12 = 0;


 FUNC_1(VAR_8->control.rates[0].flags & VAR_0,
    "Got an HT rate (flags:0x%x/mcs:%d) for a non data frame\n",
    VAR_8->control.rates[0].flags,
    VAR_8->control.rates[0].idx);

 VAR_10 = VAR_8->control.rates[0].idx;

 if (VAR_10 < 0 || VAR_10 >= VAR_4)
  VAR_10 = FUNC_3(
    &VAR_7->nvm_data->bands[VAR_8->band], VAR_9);


 if (VAR_8->band == VAR_5)
  VAR_10 += VAR_2;


 FUNC_0(VAR_1 != 0);


 VAR_11 = FUNC_2(VAR_10);


 if ((VAR_10 >= VAR_1) && (VAR_10 <= VAR_3))
  VAR_12 |= VAR_6;

 return (u32)VAR_11 | VAR_12;
}
