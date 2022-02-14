
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5dr_table {int tx; int rx; struct mlx5dr_domain* dmn; } ;
struct TYPE_2__ {int * nic_tbl; } ;
struct mlx5dr_matcher {scalar_t__ match_criteria; TYPE_1__ tx; TYPE_1__ rx; int mask; struct mlx5dr_table* tbl; } ;
struct mlx5dr_match_parameters {int match_sz; } ;
struct mlx5dr_match_param {int dummy; } ;
struct mlx5dr_domain {int type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int) ;
 int FUNC_1 (struct mlx5dr_matcher*) ;
 int FUNC_2 (struct mlx5dr_matcher*,TYPE_1__*) ;
 int FUNC_3 (struct mlx5dr_domain*,char*) ;
 int FUNC_4 (scalar_t__,int *,struct mlx5dr_match_parameters*) ;

__attribute__((used)) static int FUNC_5(struct mlx5dr_matcher *VAR_2,
      struct mlx5dr_match_parameters *VAR_3)
{
 struct mlx5dr_table *VAR_4 = VAR_2->tbl;
 struct mlx5dr_domain *VAR_5 = VAR_4->dmn;
 int VAR_6;

 if (VAR_2->match_criteria >= VAR_0) {
  FUNC_3(VAR_5, "Invalid match criteria attribute\n");
  return -VAR_1;
 }

 if (VAR_3) {
  if (VAR_3->match_sz > sizeof(struct mlx5dr_match_param)) {
   FUNC_3(VAR_5, "Invalid match size attribute\n");
   return -VAR_1;
  }
  FUNC_4(VAR_2->match_criteria,
          &VAR_2->mask, VAR_3);
 }

 switch (VAR_5->type) {
 case 129:
  VAR_2->rx.nic_tbl = &VAR_4->rx;
  VAR_6 = FUNC_2(VAR_2, &VAR_2->rx);
  break;
 case 128:
  VAR_2->tx.nic_tbl = &VAR_4->tx;
  VAR_6 = FUNC_2(VAR_2, &VAR_2->tx);
  break;
 case 130:
  VAR_2->rx.nic_tbl = &VAR_4->rx;
  VAR_2->tx.nic_tbl = &VAR_4->tx;
  VAR_6 = FUNC_1(VAR_2);
  break;
 default:
  FUNC_0(1);
  return -VAR_1;
 }

 return VAR_6;
}
