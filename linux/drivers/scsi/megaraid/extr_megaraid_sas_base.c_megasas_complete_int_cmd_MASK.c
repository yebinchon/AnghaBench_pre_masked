
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct megasas_instance {int int_cmd_wait_q; } ;
struct megasas_cmd {TYPE_2__* frame; int cmd_status_drv; } ;
struct TYPE_3__ {int cmd_status; } ;
struct TYPE_4__ {TYPE_1__ io; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct megasas_instance *VAR_0,
    struct megasas_cmd *VAR_1)
{
 VAR_1->cmd_status_drv = VAR_1->frame->io.cmd_status;
 FUNC_0(&VAR_0->int_cmd_wait_q);
}
