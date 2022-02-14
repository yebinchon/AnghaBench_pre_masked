
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct npe {TYPE_1__* regs; } ;
struct TYPE_2__ {int exec_status_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

int FUNC_1(struct npe *VAR_1)
{
 return (FUNC_0(&VAR_1->regs->exec_status_cmd) & VAR_0) != 0;
}
