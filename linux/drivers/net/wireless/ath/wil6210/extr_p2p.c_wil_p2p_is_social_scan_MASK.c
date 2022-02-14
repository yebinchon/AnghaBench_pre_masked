
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfg80211_scan_request {int n_channels; TYPE_1__** channels; } ;
struct TYPE_2__ {scalar_t__ hw_value; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(struct cfg80211_scan_request *VAR_1)
{
 return (VAR_1->n_channels == 1) &&
        (VAR_1->channels[0]->hw_value == VAR_0);
}
