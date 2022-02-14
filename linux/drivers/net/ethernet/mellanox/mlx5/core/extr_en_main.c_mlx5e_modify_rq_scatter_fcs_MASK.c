
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_rq {int rqn; struct mlx5e_channel* channel; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5e_channel {struct mlx5e_priv* priv; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,void*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void*,void*,int ,int) ;
 int FUNC_2 (void*,void*,int ,int ) ;
 int FUNC_3 (void*) ;
 int VAR_4 ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (struct mlx5_core_dev*,int ,void*,int) ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_7(struct mlx5e_rq *VAR_10, bool VAR_11)
{
 struct mlx5e_channel *VAR_12 = VAR_10->channel;
 struct mlx5e_priv *VAR_13 = VAR_12->priv;
 struct mlx5_core_dev *VAR_14 = VAR_13->mdev;

 void *VAR_15;
 void *VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_17 = FUNC_3(VAR_6);
 VAR_15 = FUNC_5(VAR_17, VAR_1);
 if (!VAR_15)
  return -VAR_0;

 VAR_16 = FUNC_0(VAR_6, VAR_15, VAR_4);

 FUNC_1(VAR_6, VAR_15, VAR_7, VAR_3);
 FUNC_2(VAR_6, VAR_15, VAR_5,
     VAR_2);
 FUNC_1(VAR_16, VAR_16, VAR_8, VAR_11);
 FUNC_1(VAR_16, VAR_16, VAR_9, VAR_3);

 VAR_18 = FUNC_6(VAR_14, VAR_10->rqn, VAR_15, VAR_17);

 FUNC_4(VAR_15);

 return VAR_18;
}
