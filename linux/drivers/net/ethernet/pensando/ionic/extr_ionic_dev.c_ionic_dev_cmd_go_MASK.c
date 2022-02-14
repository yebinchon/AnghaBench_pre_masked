
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ionic_dev_cmd {int dummy; } ionic_dev_cmd ;
struct ionic_dev {TYPE_1__* dev_cmd_regs; } ;
struct TYPE_2__ {int doorbell; int done; int cmd; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,union ionic_dev_cmd*,int) ;

void FUNC_2(struct ionic_dev *VAR_0, union ionic_dev_cmd *VAR_1)
{
 FUNC_1(&VAR_0->dev_cmd_regs->cmd, VAR_1, sizeof(*VAR_1));
 FUNC_0(0, &VAR_0->dev_cmd_regs->done);
 FUNC_0(1, &VAR_0->dev_cmd_regs->doorbell);
}
