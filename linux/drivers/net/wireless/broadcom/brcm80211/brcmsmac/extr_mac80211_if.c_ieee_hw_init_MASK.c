
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_hw {int max_rates; char* rate_control_algorithm; scalar_t__ sta_data_size; TYPE_1__* wiphy; int queues; int extra_tx_headroom; } ;
struct TYPE_2__ {int interface_modes; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (struct ieee80211_hw*,int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_8)
{
 FUNC_2(VAR_8, VAR_0);
 FUNC_2(VAR_8, VAR_7);
 FUNC_2(VAR_8, VAR_6);

 VAR_8->extra_tx_headroom = FUNC_1();
 VAR_8->queues = VAR_5;
 VAR_8->max_rates = 2;


 VAR_8->wiphy->interface_modes = FUNC_0(VAR_4) |
         FUNC_0(VAR_3) |
         FUNC_0(VAR_2);
 FUNC_4(VAR_8->wiphy, VAR_1);

 VAR_8->rate_control_algorithm = "minstrel_ht";

 VAR_8->sta_data_size = 0;
 return FUNC_3(VAR_8);
}
