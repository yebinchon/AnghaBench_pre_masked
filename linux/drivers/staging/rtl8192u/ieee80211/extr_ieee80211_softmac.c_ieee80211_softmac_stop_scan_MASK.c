
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_device {int scanning; int scan_mutex; int softmac_scan_wq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_device *VAR_0)
{




 FUNC_1(&VAR_0->scan_mutex);


 if (VAR_0->scanning == 1) {
  VAR_0->scanning = 0;

  FUNC_0(&VAR_0->softmac_scan_wq);
 }


 FUNC_2(&VAR_0->scan_mutex);
}
