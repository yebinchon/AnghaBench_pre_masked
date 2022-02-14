
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct olpc_ec_priv {int worker; int cmd_q_lock; int cmd_q; } ;
struct ec_cmd_desc {int node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct ec_cmd_desc *VAR_0,
  struct olpc_ec_priv *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_0->node);

 FUNC_3(&VAR_1->cmd_q_lock, VAR_2);
 FUNC_1(&VAR_0->node, &VAR_1->cmd_q);
 FUNC_4(&VAR_1->cmd_q_lock, VAR_2);

 FUNC_2(&VAR_1->worker);
}
