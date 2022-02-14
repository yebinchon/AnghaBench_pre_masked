
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct TYPE_4__ {int value; int stash_control; } ;
struct TYPE_3__ {int hold_active; int type; int priority; int id; } ;
struct dpni_queue {int user_context; TYPE_2__ flc; TYPE_1__ destination; } ;
struct dpni_cmd_set_queue {int qtype; void* user_context; void* flc; int flags; int dest_prio; int dest_id; void* options; void* index; void* tc; } ;
typedef enum dpni_queue_type { ____Placeholder_dpni_queue_type } dpni_queue_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_5(struct fsl_mc_io *VAR_4,
     u32 VAR_5,
     u16 VAR_6,
     enum dpni_queue_type VAR_7,
     u8 VAR_8,
     u8 VAR_9,
     u8 VAR_10,
     const struct dpni_queue *VAR_11)
{
 struct fsl_mc_command VAR_12 = { 0 };
 struct dpni_cmd_set_queue *VAR_13;


 VAR_12.header = FUNC_3(VAR_1,
       VAR_5,
       VAR_6);
 VAR_13 = (struct dpni_cmd_set_queue *)VAR_12.params;
 VAR_13->qtype = VAR_7;
 VAR_13->tc = VAR_8;
 VAR_13->index = VAR_9;
 VAR_13->options = VAR_10;
 VAR_13->dest_id = FUNC_0(VAR_11->destination.id);
 VAR_13->dest_prio = VAR_11->destination.priority;
 FUNC_2(VAR_13->flags, VAR_0, VAR_11->destination.type);
 FUNC_2(VAR_13->flags, VAR_3, VAR_11->flc.stash_control);
 FUNC_2(VAR_13->flags, VAR_2,
         VAR_11->destination.hold_active);
 VAR_13->flc = FUNC_1(VAR_11->flc.value);
 VAR_13->user_context = FUNC_1(VAR_11->user_context);


 return FUNC_4(VAR_4, &VAR_12);
}
