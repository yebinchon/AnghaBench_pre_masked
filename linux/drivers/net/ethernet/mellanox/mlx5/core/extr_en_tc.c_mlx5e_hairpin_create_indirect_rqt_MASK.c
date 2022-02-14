
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct TYPE_2__ {int enabled; int rqtn; } ;
struct mlx5e_hairpin {TYPE_1__ indir_rqt; struct mlx5e_priv* func_priv; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (void*,void*,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (struct mlx5_core_dev*,int *,int,int *) ;
 int FUNC_6 (struct mlx5e_hairpin*,void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct mlx5e_hairpin *VAR_7)
{
 int VAR_8, VAR_9, VAR_10 = VAR_2;
 struct mlx5e_priv *VAR_11 = VAR_7->func_priv;
 struct mlx5_core_dev *VAR_12 = VAR_11->mdev;
 void *VAR_13;
 u32 *VAR_14;

 VAR_8 = FUNC_2(VAR_3) + sizeof(u32) * VAR_10;
 VAR_14 = FUNC_4(VAR_8, VAR_1);
 if (!VAR_14)
  return -VAR_0;

 VAR_13 = FUNC_0(VAR_3, VAR_14, VAR_5);

 FUNC_1(VAR_13, VAR_13, VAR_4, VAR_10);
 FUNC_1(VAR_13, VAR_13, VAR_6, VAR_10);

 FUNC_6(VAR_7, VAR_13);

 VAR_9 = FUNC_5(VAR_12, VAR_14, VAR_8, &VAR_7->indir_rqt.rqtn);
 if (!VAR_9)
  VAR_7->indir_rqt.enabled = 1;

 FUNC_3(VAR_14);
 return VAR_9;
}
