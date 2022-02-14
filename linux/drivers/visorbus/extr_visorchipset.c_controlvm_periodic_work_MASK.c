
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct controlvm_message {int dummy; } ;
struct TYPE_2__ {int controlvm_pending_msg_valid; scalar_t__ poll_jiffies; int periodic_controlvm_work; scalar_t__ most_recent_message_jiffies; struct controlvm_message controlvm_pending_msg; int controlvm_channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (struct controlvm_message,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (struct controlvm_message*) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,struct controlvm_message*) ;

__attribute__((used)) static void FUNC_7(struct work_struct *VAR_9)
{
 struct controlvm_message VAR_10;
 int VAR_11 = 0;
 int VAR_12;


 do {
  VAR_12 = FUNC_6(VAR_7->controlvm_channel,
      VAR_1,
      &VAR_10);
 } while ((!VAR_12) && (++VAR_11 < VAR_0));
 if (VAR_12 != -VAR_2)
  goto schedule_out;
 if (VAR_7->controlvm_pending_msg_valid) {




  VAR_10 = VAR_7->controlvm_pending_msg;
  VAR_7->controlvm_pending_msg_valid = 0;
  VAR_12 = 0;
 } else {
  VAR_12 = FUNC_2(&VAR_10);
 }
 while (!VAR_12) {
  VAR_7->most_recent_message_jiffies = VAR_8;
  VAR_12 = FUNC_0(VAR_10,
         FUNC_5
         (VAR_7->controlvm_channel));
  if (VAR_12 == -VAR_2) {
   VAR_7->controlvm_pending_msg = VAR_10;
   VAR_7->controlvm_pending_msg_valid = 1;
   break;
  }

  VAR_12 = FUNC_2(&VAR_10);
 }

 FUNC_1();






schedule_out:
 if (FUNC_4(VAR_8, VAR_7->most_recent_message_jiffies +
    (VAR_3 * VAR_4))) {




  if (VAR_7->poll_jiffies != VAR_6)
   VAR_7->poll_jiffies = VAR_6;
 } else {
  if (VAR_7->poll_jiffies != VAR_5)
   VAR_7->poll_jiffies = VAR_5;
 }
 FUNC_3(&VAR_7->periodic_controlvm_work,
         VAR_7->poll_jiffies);
}
