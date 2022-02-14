
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
struct dpni_rsp_get_queue {int qdbin; int fqid; int user_context; int flc; int flags; int dest_prio; int dest_id; } ;
struct dpni_queue_id {int qdbin; void* fqid; } ;
struct TYPE_4__ {void* value; void* stash_control; } ;
struct TYPE_3__ {void* hold_active; void* type; int priority; void* id; } ;
struct dpni_queue {void* user_context; TYPE_2__ flc; TYPE_1__ destination; } ;
struct dpni_cmd_get_queue {int qtype; void* index; void* tc; } ;
typedef enum dpni_queue_type { ____Placeholder_dpni_queue_type } dpni_queue_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_6(struct fsl_mc_io *VAR_4,
     u32 VAR_5,
     u16 VAR_6,
     enum dpni_queue_type VAR_7,
     u8 VAR_8,
     u8 VAR_9,
     struct dpni_queue *VAR_10,
     struct dpni_queue_id *VAR_11)
{
 struct fsl_mc_command VAR_12 = { 0 };
 struct dpni_cmd_get_queue *VAR_13;
 struct dpni_rsp_get_queue *VAR_14;
 int VAR_15;


 VAR_12.header = FUNC_4(VAR_1,
       VAR_5,
       VAR_6);
 VAR_13 = (struct dpni_cmd_get_queue *)VAR_12.params;
 VAR_13->qtype = VAR_7;
 VAR_13->tc = VAR_8;
 VAR_13->index = VAR_9;


 VAR_15 = FUNC_5(VAR_4, &VAR_12);
 if (VAR_15)
  return VAR_15;


 VAR_14 = (struct dpni_rsp_get_queue *)VAR_12.params;
 VAR_10->destination.id = FUNC_2(VAR_14->dest_id);
 VAR_10->destination.priority = VAR_14->dest_prio;
 VAR_10->destination.type = FUNC_0(VAR_14->flags,
       VAR_0);
 VAR_10->flc.stash_control = FUNC_0(VAR_14->flags,
        VAR_3);
 VAR_10->destination.hold_active = FUNC_0(VAR_14->flags,
       VAR_2);
 VAR_10->flc.value = FUNC_3(VAR_14->flc);
 VAR_10->user_context = FUNC_3(VAR_14->user_context);
 VAR_11->fqid = FUNC_2(VAR_14->fqid);
 VAR_11->qdbin = FUNC_1(VAR_14->qdbin);

 return 0;
}
