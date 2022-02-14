
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5dr_ste_htbl {struct mlx5dr_ste* ste_arr; int chunk_size; } ;
struct mlx5dr_ste {int dummy; } ;
struct mlx5dr_matcher_rx_tx {int dummy; } ;
struct mlx5dr_matcher {TYPE_1__* tbl; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int dmn; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5dr_matcher*,struct mlx5dr_matcher_rx_tx*,int ,struct mlx5dr_ste_htbl*,struct list_head*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5dr_ste*) ;
 scalar_t__ FUNC_4 (struct mlx5dr_ste*) ;

__attribute__((used)) static int FUNC_5(struct mlx5dr_matcher *VAR_1,
        struct mlx5dr_matcher_rx_tx *VAR_2,
        struct mlx5dr_ste_htbl *VAR_3,
        struct mlx5dr_ste_htbl *VAR_4,
        struct list_head *VAR_5)
{
 struct mlx5dr_ste *VAR_6;
 int VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 VAR_7 = FUNC_2(VAR_3->chunk_size);

 if (VAR_7 < 1) {
  FUNC_1(VAR_1->tbl->dmn, "Invalid number of entries\n");
  return -VAR_0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  VAR_6 = &VAR_3->ste_arr[VAR_9];
  if (FUNC_4(VAR_6))
   continue;

  VAR_8 = FUNC_0(VAR_1,
          VAR_2,
          FUNC_3(VAR_6),
          VAR_4,
          VAR_5);
  if (VAR_8)
   goto clean_copy;
 }

clean_copy:
 return VAR_8;
}
