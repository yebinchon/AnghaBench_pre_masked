
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_ctx {int task_idx_map; int dbg_ctx; } ;
typedef int s16 ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int,int ) ;

int FUNC_3(struct qedi_ctx *VAR_1)
{
 s16 VAR_2;

again:
 VAR_2 = FUNC_1(VAR_1->task_idx_map,
          VAR_0);

 if (VAR_2 >= VAR_0) {
  FUNC_0(&VAR_1->dbg_ctx, "FW task context pool is full.\n");
  VAR_2 = -1;
  goto err_idx;
 }

 if (FUNC_2(VAR_2, VAR_1->task_idx_map))
  goto again;

err_idx:
 return VAR_2;
}
