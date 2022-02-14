
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_comp_ctx {int occupied; } ;
struct ena_com_admin_queue {int outstanding_cmds; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ena_com_admin_queue *VAR_0,
         struct ena_comp_ctx *VAR_1)
{
 VAR_1->occupied = 0;
 FUNC_0(&VAR_0->outstanding_cmds);
}
