
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len_op; int cmd_id; } ;
struct tcmu_mailbox {scalar_t__ cmd_tail; scalar_t__ cmd_head; TYPE_1__ hdr; } ;
struct tcmu_dev {scalar_t__ cmdr_last_cleaned; int cmd_timer; int inflight_queue; scalar_t__ cmd_time_out; int qfull_queue; int cmdr_size; int flags; int commands; struct tcmu_mailbox* mb_addr; } ;
struct tcmu_cmd_entry {scalar_t__ cmd_tail; scalar_t__ cmd_head; TYPE_1__ hdr; } ;
struct tcmu_cmd {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 struct tcmu_cmd* FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct tcmu_mailbox*,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_11 (struct tcmu_cmd*,struct tcmu_mailbox*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int *,int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_15 (int ,int *) ;

__attribute__((used)) static unsigned int FUNC_16(struct tcmu_dev *VAR_7)
{
 struct tcmu_mailbox *VAR_8;
 struct tcmu_cmd *VAR_9;
 int VAR_10 = 0;

 if (FUNC_15(VAR_1, &VAR_7->flags)) {
  FUNC_7("ring broken, not handling completions\n");
  return 0;
 }

 VAR_8 = VAR_7->mb_addr;
 FUNC_10(VAR_8, sizeof(*VAR_8));

 while (VAR_7->cmdr_last_cleaned != FUNC_0(VAR_8->cmd_tail)) {

  struct tcmu_cmd_entry *VAR_11 = (void *) VAR_8 + VAR_0 + VAR_7->cmdr_last_cleaned;

  FUNC_10(VAR_11, sizeof(*VAR_11));

  if (FUNC_13(VAR_11->hdr.len_op) == VAR_3) {
   FUNC_1(VAR_7->cmdr_last_cleaned,
        FUNC_12(VAR_11->hdr.len_op),
        VAR_7->cmdr_size);
   continue;
  }
  FUNC_2(FUNC_13(VAR_11->hdr.len_op) != VAR_2);

  VAR_9 = FUNC_5(&VAR_7->commands, VAR_11->hdr.cmd_id);
  if (!VAR_9) {
   FUNC_7("cmd_id %u not found, ring is broken\n",
          VAR_11->hdr.cmd_id);
   FUNC_9(VAR_1, &VAR_7->flags);
   break;
  }

  FUNC_11(VAR_9, VAR_11);

  FUNC_1(VAR_7->cmdr_last_cleaned,
       FUNC_12(VAR_11->hdr.len_op),
       VAR_7->cmdr_size);

  VAR_10++;
 }

 if (VAR_8->cmd_tail == VAR_8->cmd_head) {

  FUNC_4(&VAR_7->cmd_timer);

  if (FUNC_6(&VAR_7->qfull_queue)) {




   if (FUNC_3(&VAR_4) >
       VAR_5)
    FUNC_8(&VAR_6, 0);
  }
 } else if (VAR_7->cmd_time_out) {
  FUNC_14(&VAR_7->inflight_queue, &VAR_7->cmd_timer);
 }

 return VAR_10;
}
