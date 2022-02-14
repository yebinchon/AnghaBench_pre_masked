
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct lbs_private {scalar_t__ connect_status; int auto_deep_sleep_timeout; int auto_deepsleep_timer; int wakeup_dev_required; scalar_t__ is_auto_deep_sleep_enabled; scalar_t__ is_activity_detected; } ;
struct cmd_header {int size; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct lbs_private* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct lbs_private*,int ,struct cmd_header*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct cmd_header*,int ,int) ;
 int FUNC_5 (int *,scalar_t__) ;
 struct lbs_private* VAR_5 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_6)
{
 struct lbs_private *VAR_7 = FUNC_1(VAR_7, VAR_6, VAR_3);

 if (VAR_7->is_activity_detected) {
  VAR_7->is_activity_detected = 0;
 } else {
  if (VAR_7->is_auto_deep_sleep_enabled &&
      (!VAR_7->wakeup_dev_required) &&
      (VAR_7->connect_status != VAR_2)) {
   struct cmd_header VAR_8;

   FUNC_3("Entering auto deep sleep mode...\n");
   FUNC_4(&VAR_8, 0, sizeof(VAR_8));
   VAR_8.size = FUNC_0(sizeof(VAR_8));
   FUNC_2(VAR_7, VAR_0, &VAR_8,
     sizeof(VAR_8));
  }
 }
 FUNC_5(&VAR_7->auto_deepsleep_timer , VAR_4 +
    (VAR_7->auto_deep_sleep_timeout * VAR_1)/1000);
}
