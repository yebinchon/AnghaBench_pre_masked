
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct npe {TYPE_1__* regs; } ;
struct TYPE_2__ {int exec_data; int exec_status_cmd; int exec_addr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static u32 FUNC_2(struct npe *VAR_0, u32 VAR_1, int VAR_2)
{
 FUNC_1(VAR_1, &VAR_0->regs->exec_addr);
 FUNC_1(VAR_2, &VAR_0->regs->exec_status_cmd);



 FUNC_0(&VAR_0->regs->exec_data);
 FUNC_0(&VAR_0->regs->exec_data);
 return FUNC_0(&VAR_0->regs->exec_data);
}
