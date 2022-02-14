
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_rl_table {int rl_lock; } ;
struct mlx5_rate_limit {scalar_t__ rate; int typical_pkt_sz; int max_burst_sz; int member_0; } ;
struct mlx5_rl_entry {struct mlx5_rate_limit rl; int index; int refcount; } ;
struct TYPE_2__ {struct mlx5_rl_table rl_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 struct mlx5_rl_entry* FUNC_0 (struct mlx5_rl_table*,struct mlx5_rate_limit*) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,scalar_t__,int ,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,int ,struct mlx5_rate_limit*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mlx5_core_dev *VAR_0, struct mlx5_rate_limit *VAR_1)
{
 struct mlx5_rl_table *VAR_2 = &VAR_0->priv.rl_table;
 struct mlx5_rl_entry *VAR_3 = ((void*)0);
 struct mlx5_rate_limit VAR_4 = {0};


 if (VAR_1->rate == 0)
  return;

 FUNC_3(&VAR_2->rl_lock);
 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (!VAR_3 || !VAR_3->refcount) {
  FUNC_1(VAR_0, "Rate %u, max_burst_sz %u typical_pkt_sz %u are not configured\n",
          VAR_1->rate, VAR_1->max_burst_sz, VAR_1->typical_pkt_sz);
  goto out;
 }

 VAR_3->refcount--;
 if (!VAR_3->refcount) {

  FUNC_2(VAR_0, VAR_3->index, &VAR_4);
  VAR_3->rl = VAR_4;
 }

out:
 FUNC_4(&VAR_2->rl_lock);
}
