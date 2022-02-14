
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct lbs_private {scalar_t__ psmode; scalar_t__ psstate; int surpriseremoved; int main_thread; int host_sleep_q; scalar_t__ is_host_sleep_activated; scalar_t__ is_host_sleep_configured; int ds_awake_q; scalar_t__ is_deep_sleep; int work_thread; scalar_t__ wiphy_registered; struct net_device* dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct lbs_private*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct lbs_private*) ;
 int FUNC_6 (struct lbs_private*) ;
 int FUNC_7 (struct lbs_private*) ;
 int FUNC_8 (struct lbs_private*,int ,int) ;
 int FUNC_9 (struct lbs_private*) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct lbs_private *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->dev;

 FUNC_6(VAR_4);

 if (VAR_4->wiphy_registered)
  FUNC_7(VAR_4);

 FUNC_9(VAR_4);




 FUNC_4("destroying worker thread\n");
 FUNC_0(VAR_4->work_thread);
 FUNC_4("done destroying worker thread\n");

 if (VAR_4->psmode == VAR_1) {
  VAR_4->psmode = VAR_0;




  if (VAR_4->psstate != VAR_3)
   FUNC_8(VAR_4, VAR_2, 1);
 }

 if (VAR_4->is_deep_sleep) {
  VAR_4->is_deep_sleep = 0;
  FUNC_10(&VAR_4->ds_awake_q);
 }

 VAR_4->is_host_sleep_configured = 0;
 VAR_4->is_host_sleep_activated = 0;
 FUNC_10(&VAR_4->host_sleep_q);


 VAR_4->surpriseremoved = 1;
 FUNC_2(VAR_4->main_thread);

 FUNC_5(VAR_4);
 FUNC_3(VAR_4);
 FUNC_1(VAR_5);
}
