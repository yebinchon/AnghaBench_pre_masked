
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_comp_ctx {scalar_t__ status; int comp_status; } ;
struct TYPE_2__ {int aborted_cmd; int no_completion; } ;
struct ena_com_admin_queue {int running_state; int q_lock; TYPE_1__ stats; int completion_timeout; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (struct ena_com_admin_queue*,struct ena_comp_ctx*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ena_com_admin_queue*) ;
 unsigned long VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (unsigned long) ;
 scalar_t__ FUNC_9 (int) ;
 unsigned long FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct ena_comp_ctx *VAR_7,
           struct ena_com_admin_queue *VAR_8)
{
 unsigned long VAR_9 = 0;
 unsigned long VAR_10;
 int VAR_11;

 VAR_10 = VAR_6 + FUNC_10(VAR_8->completion_timeout);

 while (1) {
  FUNC_6(&VAR_8->q_lock, VAR_9);
  FUNC_3(VAR_8);
  FUNC_7(&VAR_8->q_lock, VAR_9);

  if (VAR_7->status != VAR_2)
   break;

  if (FUNC_8(VAR_10)) {
   FUNC_5("Wait for completion (polling) timeout\n");

   FUNC_6(&VAR_8->q_lock, VAR_9);
   VAR_8->stats.no_completion++;
   VAR_8->running_state = 0;
   FUNC_7(&VAR_8->q_lock, VAR_9);

   VAR_11 = -VAR_5;
   goto err;
  }

  FUNC_4(VAR_3);
 }

 if (FUNC_9(VAR_7->status == VAR_0)) {
  FUNC_5("Command was aborted\n");
  FUNC_6(&VAR_8->q_lock, VAR_9);
  VAR_8->stats.aborted_cmd++;
  FUNC_7(&VAR_8->q_lock, VAR_9);
  VAR_11 = -VAR_4;
  goto err;
 }

 FUNC_0(VAR_7->status != VAR_1, "Invalid comp status %d\n",
      VAR_7->status);

 VAR_11 = FUNC_2(VAR_7->comp_status);
err:
 FUNC_1(VAR_8, VAR_7);
 return VAR_11;
}
