
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {scalar_t__ psstate; int driver_lock; int cmdpendingq; } ;
struct cmd_ds_802_11_ps_mode {scalar_t__ action; } ;
struct cmd_ctrl_node {TYPE_1__* cmdbuf; int list; scalar_t__ result; } ;
struct TYPE_2__ {int command; int size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct lbs_private *VAR_4,
     struct cmd_ctrl_node *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7 = 1;

 if (!VAR_5) {
  FUNC_1("QUEUE_CMD: cmdnode is NULL\n");
  return;
 }
 if (!VAR_5->cmdbuf->size) {
  FUNC_1("DNLD_CMD: cmd size is zero\n");
  return;
 }
 VAR_5->result = 0;


 if (FUNC_2(VAR_5->cmdbuf->command) == VAR_0) {
  struct cmd_ds_802_11_ps_mode *VAR_8 = (void *)VAR_5->cmdbuf;

  if (VAR_8->action == FUNC_0(VAR_2)) {
   if (VAR_4->psstate != VAR_3)
    VAR_7 = 0;
  }
 }

 if (FUNC_2(VAR_5->cmdbuf->command) == VAR_1)
  VAR_7 = 0;

 FUNC_5(&VAR_4->driver_lock, VAR_6);

 if (VAR_7)
  FUNC_4(&VAR_5->list, &VAR_4->cmdpendingq);
 else
  FUNC_3(&VAR_5->list, &VAR_4->cmdpendingq);

 FUNC_6(&VAR_4->driver_lock, VAR_6);

 FUNC_1("QUEUE_CMD: inserted command 0x%04x into cmdpendingq\n",
       FUNC_2(VAR_5->cmdbuf->command));
}
