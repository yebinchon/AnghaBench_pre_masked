
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct megasas_instance {int abort_cmd_wait_q; } ;
struct megasas_cmd {scalar_t__ cmd_status_drv; scalar_t__ sync_cmd; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct megasas_instance *VAR_0,
         struct megasas_cmd *VAR_1)
{
 if (VAR_1->sync_cmd) {
  VAR_1->sync_cmd = 0;
  VAR_1->cmd_status_drv = 0;
  FUNC_0(&VAR_0->abort_cmd_wait_q);
 }
}
