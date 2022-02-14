
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_rq {int rqn; struct mlx5e_channel* channel; } ;
struct mlx5e_channel {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,void*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void*,void*,int,int) ;
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

__attribute__((used)) static int FUNC_7(struct mlx5e_rq *VAR_9, bool VAR_10)
{
 struct mlx5e_channel *VAR_11 = VAR_9->channel;
 struct mlx5_core_dev *VAR_12 = VAR_11->mdev;
 void *VAR_13;
 void *VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_15 = FUNC_3(VAR_6);
 VAR_13 = FUNC_5(VAR_15, VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_14 = FUNC_0(VAR_6, VAR_13, VAR_4);

 FUNC_1(VAR_6, VAR_13, VAR_7, VAR_3);
 FUNC_2(VAR_6, VAR_13, VAR_5,
     VAR_2);
 FUNC_1(VAR_14, VAR_14, VAR_10, VAR_10);
 FUNC_1(VAR_14, VAR_14, VAR_8, VAR_3);

 VAR_16 = FUNC_6(VAR_12, VAR_9->rqn, VAR_13, VAR_15);

 FUNC_4(VAR_13);

 return VAR_16;
}
