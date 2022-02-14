
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int error_code; } ;
struct TYPE_7__ {int header_type; } ;
struct TYPE_10__ {TYPE_4__ error; TYPE_2__ common; } ;
struct vub300_mmc_host {int command_complete; int sg_request; TYPE_5__ resp; TYPE_3__* cmd; scalar_t__ urb; int data; TYPE_1__* command_res_urb; } ;
struct urb {scalar_t__ status; scalar_t__ context; } ;
struct TYPE_8__ {void* error; } ;
struct TYPE_6__ {scalar_t__ actual_length; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_0)
{
 struct vub300_mmc_host *VAR_1 = (struct vub300_mmc_host *)VAR_0->context;
 if (VAR_0->status) {

 } else if (VAR_1->command_res_urb->actual_length == 0) {




 } else if (!VAR_1->data) {

 } else if (VAR_1->resp.common.header_type != 0x02) {




 } else if (VAR_1->urb) {
  VAR_1->cmd->error =
   FUNC_3(VAR_1->resp.error.error_code);
  FUNC_2(VAR_1->urb);
 } else {
  VAR_1->cmd->error =
   FUNC_3(VAR_1->resp.error.error_code);
  FUNC_1(&VAR_1->sg_request);
 }
 FUNC_0(&VAR_1->command_complete);
}
