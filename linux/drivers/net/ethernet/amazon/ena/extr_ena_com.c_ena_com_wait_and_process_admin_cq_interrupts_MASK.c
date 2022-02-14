
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_comp_ctx {char* status; int comp_status; int cmd_opcode; int wait_event; } ;
struct TYPE_2__ {int no_completion; } ;
struct ena_com_admin_queue {int polling; int running_state; scalar_t__ auto_polling; int q_lock; TYPE_1__ stats; int completion_timeout; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ena_com_admin_queue*,struct ena_comp_ctx*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ena_com_admin_queue*) ;
 int FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct ena_comp_ctx *VAR_3,
       struct ena_com_admin_queue *VAR_4)
{
 unsigned long VAR_5 = 0;
 int VAR_6;

 FUNC_8(&VAR_3->wait_event,
        FUNC_7(
         VAR_4->completion_timeout));






 if (FUNC_6(VAR_3->status == VAR_1)) {
  FUNC_4(&VAR_4->q_lock, VAR_5);
  FUNC_2(VAR_4);
  VAR_4->stats.no_completion++;
  FUNC_5(&VAR_4->q_lock, VAR_5);

  if (VAR_3->status == VAR_0) {
   FUNC_3("The ena device sent a completion but the driver didn't receive a MSI-X interrupt (cmd %d), autopolling mode is %s\n",
          VAR_3->cmd_opcode,
          VAR_4->auto_polling ? "ON" : "OFF");

   if (VAR_4->auto_polling)
    VAR_4->polling = 1;
  } else {
   FUNC_3("The ena device doesn't send a completion for the admin cmd %d status %d\n",
          VAR_3->cmd_opcode, VAR_3->status);
  }




  if (!VAR_4->polling) {
   VAR_4->running_state = 0;
   VAR_6 = -VAR_2;
   goto err;
  }
 }

 VAR_6 = FUNC_1(VAR_3->comp_status);
err:
 FUNC_0(VAR_4, VAR_3);
 return VAR_6;
}
