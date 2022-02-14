
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_rl_table {int max_size; int max_rate; int min_rate; TYPE_2__* rl_entry; int rl_lock; } ;
struct mlx5_rl_entry {int dummy; } ;
struct TYPE_3__ {struct mlx5_rl_table rl_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;
struct TYPE_4__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 void* FUNC_1 (struct mlx5_core_dev*,int ) ;
 TYPE_2__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct mlx5_core_dev*,char*,int,int,int) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_5(struct mlx5_core_dev *VAR_7)
{
 struct mlx5_rl_table *VAR_8 = &VAR_7->priv.rl_table;
 int VAR_9;

 FUNC_4(&VAR_8->rl_lock);
 if (!FUNC_0(VAR_7, VAR_6) || !FUNC_1(VAR_7, VAR_2)) {
  VAR_8->max_size = 0;
  return 0;
 }


 VAR_8->max_size = FUNC_1(VAR_7, VAR_5) - 1;
 VAR_8->max_rate = FUNC_1(VAR_7, VAR_3);
 VAR_8->min_rate = FUNC_1(VAR_7, VAR_4);

 VAR_8->rl_entry = FUNC_2(VAR_8->max_size, sizeof(struct mlx5_rl_entry),
      VAR_1);
 if (!VAR_8->rl_entry)
  return -VAR_0;




 for (VAR_9 = 0; VAR_9 < VAR_8->max_size; VAR_9++)
  VAR_8->rl_entry[VAR_9].index = VAR_9 + 1;


 FUNC_3(VAR_7, "Rate limit: %u rates are supported, range: %uMbps to %uMbps\n",
         VAR_8->max_size,
         VAR_8->min_rate >> 10,
         VAR_8->max_rate >> 10);

 return 0;
}
