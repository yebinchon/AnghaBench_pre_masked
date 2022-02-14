
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx {int hal_buf; int scan_lock; int * scan_req; int hw; int scan_work; } ;
struct ieee80211_hw {struct wcn36xx* priv; } ;
struct cfg80211_scan_info {int aborted; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct cfg80211_scan_info*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct wcn36xx*) ;
 int FUNC_7 (struct wcn36xx*) ;
 int FUNC_8 (struct wcn36xx*) ;
 int FUNC_9 (struct wcn36xx*) ;
 int FUNC_10 (struct wcn36xx*) ;
 int FUNC_11 (struct wcn36xx*) ;

__attribute__((used)) static void FUNC_12(struct ieee80211_hw *VAR_1)
{
 struct wcn36xx *VAR_2 = VAR_1->priv;

 FUNC_5(VAR_0, "mac stop\n");

 FUNC_0(&VAR_2->scan_work);

 FUNC_3(&VAR_2->scan_lock);
 if (VAR_2->scan_req) {
  struct cfg80211_scan_info VAR_3 = {
   .aborted = 1,
  };

  FUNC_1(VAR_2->hw, &VAR_3);
 }
 VAR_2->scan_req = ((void*)0);
 FUNC_4(&VAR_2->scan_lock);

 FUNC_6(VAR_2);
 FUNC_11(VAR_2);
 FUNC_7(VAR_2);
 FUNC_10(VAR_2);

 FUNC_9(VAR_2);
 FUNC_8(VAR_2);

 FUNC_2(VAR_2->hal_buf);
}
