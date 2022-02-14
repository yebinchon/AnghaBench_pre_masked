
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_ctx {int pending_dir_moves; } ;
struct pending_dir_move {int update_refs; int node; int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pending_dir_move*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void FUNC_6(struct send_ctx *VAR_0, struct pending_dir_move *VAR_1)
{
 if (!FUNC_4(&VAR_1->list))
  FUNC_3(&VAR_1->list);
 if (!FUNC_0(&VAR_1->node))
  FUNC_5(&VAR_1->node, &VAR_0->pending_dir_moves);
 FUNC_1(&VAR_1->update_refs);
 FUNC_2(VAR_1);
}
