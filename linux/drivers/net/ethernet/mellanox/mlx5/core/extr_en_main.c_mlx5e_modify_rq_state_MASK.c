
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_rq {int rqn; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,void*,int ) ;
 int FUNC_1 (void*,void*,int ,int) ;
 int FUNC_2 (void*) ;
 int VAR_2 ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (struct mlx5_core_dev*,int ,void*,int) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_6(struct mlx5e_rq *VAR_6, int VAR_7, int VAR_8)
{
 struct mlx5_core_dev *VAR_9 = VAR_6->mdev;

 void *VAR_10;
 void *VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_12 = FUNC_2(VAR_3);
 VAR_10 = FUNC_4(VAR_12, VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_3, VAR_10, VAR_2);

 FUNC_1(VAR_3, VAR_10, VAR_4, VAR_7);
 FUNC_1(VAR_11, VAR_11, VAR_5, VAR_8);

 VAR_13 = FUNC_5(VAR_9, VAR_6->rqn, VAR_10, VAR_12);

 FUNC_3(VAR_10);

 return VAR_13;
}
