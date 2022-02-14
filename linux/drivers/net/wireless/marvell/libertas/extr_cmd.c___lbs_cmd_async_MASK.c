
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct lbs_private {int waitq; scalar_t__ is_deep_sleep; int is_auto_deep_sleep_enabled; scalar_t__ surpriseremoved; } ;
struct cmd_header {int dummy; } ;
struct cmd_ctrl_node {int (* callback ) (struct lbs_private*,unsigned long,struct cmd_header*) ;unsigned long callback_arg; scalar_t__ cmdwaitqwoken; TYPE_1__* cmdbuf; } ;
struct TYPE_2__ {scalar_t__ result; void* size; void* command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_ctrl_node* FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 struct cmd_ctrl_node* FUNC_4 (struct lbs_private*) ;
 int FUNC_5 (struct lbs_private*,struct cmd_ctrl_node*) ;
 int FUNC_6 (TYPE_1__*,struct cmd_header*,int) ;
 int FUNC_7 (int *) ;

struct cmd_ctrl_node *FUNC_8(struct lbs_private *VAR_3,
 uint16_t VAR_4, struct cmd_header *VAR_5, int VAR_6,
 int (*VAR_7)(struct lbs_private *, unsigned long, struct cmd_header *),
 unsigned long VAR_8)
{
 struct cmd_ctrl_node *VAR_9;

 if (VAR_3->surpriseremoved) {
  FUNC_3("PREP_CMD: card removed\n");
  VAR_9 = FUNC_0(-VAR_2);
  goto done;
 }




 if (!VAR_3->is_auto_deep_sleep_enabled) {
  if (VAR_3->is_deep_sleep) {
   FUNC_2("command not allowed in deep sleep\n");
   VAR_9 = FUNC_0(-VAR_0);
   goto done;
  }
 }

 VAR_9 = FUNC_4(VAR_3);
 if (VAR_9 == ((void*)0)) {
  FUNC_3("PREP_CMD: cmdnode is NULL\n");


  FUNC_7(&VAR_3->waitq);
  VAR_9 = FUNC_0(-VAR_1);
  goto done;
 }

 VAR_9->callback = VAR_7;
 VAR_9->callback_arg = VAR_8;


 FUNC_6(VAR_9->cmdbuf, VAR_5, VAR_6);


 VAR_9->cmdbuf->command = FUNC_1(VAR_4);
 VAR_9->cmdbuf->size = FUNC_1(VAR_6);
 VAR_9->cmdbuf->result = 0;

 FUNC_3("PREP_CMD: command 0x%04x\n", VAR_4);

 VAR_9->cmdwaitqwoken = 0;
 FUNC_5(VAR_3, VAR_9);
 FUNC_7(&VAR_3->waitq);

 done:
 return VAR_9;
}
