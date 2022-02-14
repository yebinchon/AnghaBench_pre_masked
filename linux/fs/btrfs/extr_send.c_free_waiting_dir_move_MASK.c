
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waiting_dir_move {int node; } ;
struct send_ctx {int waiting_dir_moves; } ;


 int FUNC_0 (struct waiting_dir_move*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct send_ctx *VAR_0,
      struct waiting_dir_move *VAR_1)
{
 if (!VAR_1)
  return;
 FUNC_1(&VAR_1->node, &VAR_0->waiting_dir_moves);
 FUNC_0(VAR_1);
}
