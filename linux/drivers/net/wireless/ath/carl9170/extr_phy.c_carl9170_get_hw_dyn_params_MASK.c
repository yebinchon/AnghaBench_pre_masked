
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ieee80211_channel {unsigned int hw_value; scalar_t__ center_freq; } ;
struct carl9170_phy_freq_params {int dummy; } ;
typedef enum carl9170_bw { ____Placeholder_carl9170_bw } carl9170_bw ;
struct TYPE_3__ {scalar_t__ freq; struct carl9170_phy_freq_params const* params; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static const struct carl9170_phy_freq_params *
FUNC_4(struct ieee80211_channel *VAR_2,
      enum carl9170_bw VAR_3)
{
 unsigned int VAR_4 = 0;
 u16 VAR_5 = 2412;

 if (VAR_2) {
  VAR_4 = VAR_2->hw_value;
  VAR_5 = VAR_2->center_freq;
 }

 FUNC_1(VAR_4 >= FUNC_0(VAR_1));

 FUNC_2(VAR_0 != 3);

 FUNC_3(VAR_1[VAR_4].freq != VAR_5);

 return &VAR_1[VAR_4].params[VAR_3];
}
