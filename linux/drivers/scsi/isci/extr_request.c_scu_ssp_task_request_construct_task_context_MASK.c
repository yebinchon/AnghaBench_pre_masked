
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ssp_task_iu {int dummy; } ;
struct TYPE_4__ {int frame_type; } ;
struct TYPE_3__ {TYPE_2__ ssp; } ;
struct scu_task_context {int control_frame; int ssp_command_iu_length; TYPE_1__ type; scalar_t__ transfer_length_bytes; int task_type; int priority; } ;
struct isci_request {struct scu_task_context* tc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct isci_request*,struct scu_task_context*) ;

__attribute__((used)) static void FUNC_1(struct isci_request *VAR_3)
{
 struct scu_task_context *VAR_4 = VAR_3->tc;

 FUNC_0(VAR_3, VAR_4);

 VAR_4->control_frame = 1;
 VAR_4->priority = VAR_0;
 VAR_4->task_type = VAR_1;
 VAR_4->transfer_length_bytes = 0;
 VAR_4->type.ssp.frame_type = VAR_2;
 VAR_4->ssp_command_iu_length =
  sizeof(struct ssp_task_iu) / sizeof(u32);
}
