
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_msgq_cmdq {struct bfa_msgq* msgq; int pending_q; int depth; } ;
struct bfa_msgq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bfa_msgq_cmdq*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct bfa_msgq_cmdq *VAR_2, struct bfa_msgq *VAR_3)
{
 VAR_2->depth = VAR_0;
 FUNC_0(&VAR_2->pending_q);
 VAR_2->msgq = VAR_3;
 FUNC_1(VAR_2, VAR_1);
}
