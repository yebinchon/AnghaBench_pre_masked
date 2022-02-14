
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfg80211_scan_info {int aborted; } ;
struct TYPE_2__ {int state; int completed; int timeout; int roc_freq; int roc_notify; int is_roc; } ;
struct ath10k {TYPE_1__ scan; int * scan_channel; int hw; int data_lock; } ;






 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct cfg80211_scan_info*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct ath10k *VAR_0)
{
 FUNC_5(&VAR_0->data_lock);

 switch (VAR_0->scan.state) {
 case 130:
  break;
 case 129:
 case 131:
  if (!VAR_0->scan.is_roc) {
   struct cfg80211_scan_info VAR_1 = {
    .aborted = (VAR_0->scan.state ==
         131),
   };

   FUNC_4(VAR_0->hw, &VAR_1);
  } else if (VAR_0->scan.roc_notify) {
   FUNC_3(VAR_0->hw);
  }

 case 128:
  VAR_0->scan.state = 130;
  VAR_0->scan_channel = ((void*)0);
  VAR_0->scan.roc_freq = 0;
  FUNC_0(VAR_0);
  FUNC_1(&VAR_0->scan.timeout);
  FUNC_2(&VAR_0->scan.completed);
  break;
 }
}
