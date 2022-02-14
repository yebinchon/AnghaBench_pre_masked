
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tool_ctx {int msg_wq; int db_wq; int link_wq; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct tool_ctx *VAR_0)
{
 FUNC_0(&VAR_0->link_wq);
 FUNC_0(&VAR_0->db_wq);
 FUNC_0(&VAR_0->msg_wq);
}
