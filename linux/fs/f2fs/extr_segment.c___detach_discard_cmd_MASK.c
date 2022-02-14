
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct discard_cmd_control {int discard_cmd_cnt; int undiscard_blks; int root; int queued_discard; } ;
struct discard_cmd {scalar_t__ state; scalar_t__ len; int rb_node; int list; int queued; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,struct discard_cmd*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(struct discard_cmd_control *VAR_2,
       struct discard_cmd *VAR_3)
{
 if (VAR_3->state == VAR_0)
  FUNC_1(VAR_3->queued, &VAR_2->queued_discard);

 FUNC_3(&VAR_3->list);
 FUNC_4(&VAR_3->rb_node, &VAR_2->root);
 VAR_2->undiscard_blks -= VAR_3->len;

 FUNC_2(VAR_1, VAR_3);

 FUNC_0(&VAR_2->discard_cmd_cnt);
}
