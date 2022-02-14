
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5dr_ste {int rule_list; int refcount; TYPE_1__* next_htbl; int ste_chain_location; } ;
struct mlx5dr_matcher_rx_tx {int dummy; } ;
struct mlx5dr_matcher {int dummy; } ;
struct TYPE_2__ {struct mlx5dr_ste* pointing_ste; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct mlx5dr_ste*,struct mlx5dr_ste*) ;
 int FUNC_3 (struct mlx5dr_matcher_rx_tx*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct mlx5dr_matcher *VAR_0,
      struct mlx5dr_matcher_rx_tx *VAR_1,
      struct mlx5dr_ste *VAR_2,
      struct mlx5dr_ste *VAR_3)
{
 VAR_3->next_htbl = VAR_2->next_htbl;
 VAR_3->ste_chain_location = VAR_2->ste_chain_location;

 if (!FUNC_3(VAR_1, VAR_3->ste_chain_location))
  VAR_3->next_htbl->pointing_ste = VAR_3;




 FUNC_5(&VAR_3->refcount, FUNC_4(&VAR_2->refcount));


 FUNC_2(VAR_2, VAR_3);
 FUNC_0(&VAR_3->rule_list);
 FUNC_1(&VAR_2->rule_list, &VAR_3->rule_list);
}
