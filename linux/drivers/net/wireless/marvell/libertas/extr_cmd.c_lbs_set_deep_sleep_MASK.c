
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int is_deep_sleep; int (* enter_deep_sleep ) (struct lbs_private*) ;int (* exit_deep_sleep ) (struct lbs_private*) ;int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct lbs_private*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct lbs_private*) ;
 int FUNC_7 (struct lbs_private*) ;

int FUNC_8(struct lbs_private *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1) {
  if (VAR_0->is_deep_sleep != 1) {
   FUNC_1("deep sleep: sleep\n");
   FUNC_0(!VAR_0->enter_deep_sleep);
   VAR_2 = VAR_0->enter_deep_sleep(VAR_0);
   if (!VAR_2) {
    FUNC_5(VAR_0->dev);
    FUNC_4(VAR_0->dev);
   }
  } else {
   FUNC_3(VAR_0->dev, "deep sleep: already enabled\n");
  }
 } else {
  if (VAR_0->is_deep_sleep) {
   FUNC_1("deep sleep: wakeup\n");
   FUNC_0(!VAR_0->exit_deep_sleep);
   VAR_2 = VAR_0->exit_deep_sleep(VAR_0);
   if (!VAR_2) {
    VAR_2 = FUNC_2(VAR_0);
    if (VAR_2)
     FUNC_3(VAR_0->dev,
         "deep sleep: wakeup failed\n");
   }
  }
 }

 return VAR_2;
}
