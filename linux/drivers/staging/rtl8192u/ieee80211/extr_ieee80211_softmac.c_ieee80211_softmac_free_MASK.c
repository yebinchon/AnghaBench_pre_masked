
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_device {int wx_mutex; int associate_retry_wq; int associate_timer; int * dot11d_info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ieee80211_device *VAR_0)
{
 FUNC_3(&VAR_0->wx_mutex);
 FUNC_2(VAR_0->dot11d_info);
 VAR_0->dot11d_info = ((void*)0);
 FUNC_1(&VAR_0->associate_timer);

 FUNC_0(&VAR_0->associate_retry_wq);

 FUNC_4(&VAR_0->wx_mutex);
}
