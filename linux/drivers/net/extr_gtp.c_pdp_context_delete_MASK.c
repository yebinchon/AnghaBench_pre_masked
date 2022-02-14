
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdp_ctx {int rcu_head; int hlist_addr; int hlist_tid; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct pdp_ctx *VAR_1)
{
 FUNC_1(&VAR_1->hlist_tid);
 FUNC_1(&VAR_1->hlist_addr);
 FUNC_0(&VAR_1->rcu_head, VAR_0);
}
