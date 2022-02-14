
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_mpfs {int size; int bitmap; int lock; } ;
struct TYPE_2__ {struct mlx5_mpfs* mpfs; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct mlx5_mpfs*) ;
 struct mlx5_mpfs* FUNC_4 (int,int ) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;

int FUNC_6(struct mlx5_core_dev *VAR_3)
{
 int VAR_4 = 1 << FUNC_0(VAR_3, VAR_2);
 struct mlx5_mpfs *VAR_5;

 if (!FUNC_1(VAR_3))
  return 0;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_5(&VAR_5->lock);
 VAR_5->size = VAR_4;
 VAR_5->bitmap = FUNC_2(VAR_4, VAR_1);
 if (!VAR_5->bitmap) {
  FUNC_3(VAR_5);
  return -VAR_0;
 }

 VAR_3->priv.mpfs = VAR_5;
 return 0;
}
