
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_ctx {int dbg_ctx; int task_idx_map; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int,int ) ;

void FUNC_2(struct qedi_ctx *VAR_0, int VAR_1)
{
 if (!FUNC_1(VAR_1, VAR_0->task_idx_map))
  FUNC_0(&VAR_0->dbg_ctx,
    "FW task context, already cleared, tid=0x%x\n", VAR_1);
}
