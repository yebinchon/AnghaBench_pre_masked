
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_ctx {int pending_dir_moves; } ;
struct pending_dir_move {int node; int list; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,struct list_head*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,struct list_head*) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static void FUNC_8(struct send_ctx *VAR_1,
          struct pending_dir_move *VAR_2,
          struct list_head *VAR_3)
{
 if (FUNC_4(&VAR_2->list)) {
  FUNC_3(&VAR_2->list, VAR_3);
 } else {
  FUNC_0(VAR_0);
  FUNC_5(&VAR_2->list, &VAR_0);
  FUNC_3(&VAR_2->list, VAR_3);
  FUNC_6(&VAR_0, VAR_3);
 }
 if (!FUNC_2(&VAR_2->node)) {
  FUNC_7(&VAR_2->node, &VAR_1->pending_dir_moves);
  FUNC_1(&VAR_2->node);
 }
}
