
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_private {int scan_aborting; int * scan_request; } ;
struct mwifiex_adapter {int scan_processing; int priv_num; struct mwifiex_private** priv; int mwifiex_cmd_lock; } ;
struct cfg80211_scan_info {int aborted; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct cfg80211_scan_info*) ;
 int FUNC_1 (struct mwifiex_adapter*) ;
 int FUNC_2 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mwifiex_adapter *VAR_1)
{
 struct mwifiex_private *VAR_2;
 int VAR_3;

 FUNC_1(VAR_1);

 if (VAR_1->scan_processing) {
  FUNC_3(&VAR_1->mwifiex_cmd_lock);
  VAR_1->scan_processing = 0;
  FUNC_4(&VAR_1->mwifiex_cmd_lock);
  for (VAR_3 = 0; VAR_3 < VAR_1->priv_num; VAR_3++) {
   VAR_2 = VAR_1->priv[VAR_3];
   if (!VAR_2)
    continue;
   if (VAR_2->scan_request) {
    struct cfg80211_scan_info VAR_4 = {
     .aborted = 1,
    };

    FUNC_2(VAR_1, VAR_0,
         "info: aborting scan\n");
    FUNC_0(VAR_2->scan_request, &VAR_4);
    VAR_2->scan_request = ((void*)0);
    VAR_2->scan_aborting = 0;
   }
  }
 }
}
