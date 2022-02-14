
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ionic_dev {TYPE_1__* dev_cmd_regs; } ;
struct TYPE_2__ {int done; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

bool FUNC_1(struct ionic_dev *VAR_1)
{
 return FUNC_0(&VAR_1->dev_cmd_regs->done) & VAR_0;
}
