
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5e_rqt {int enabled; int rqtn; } ;
struct TYPE_2__ {int rqn; } ;
struct mlx5e_priv {TYPE_1__ drop_rq; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (void*,void*,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (struct mlx5_core_dev*,int *,int,int *) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_6(struct mlx5e_priv *VAR_7, int VAR_8, struct mlx5e_rqt *VAR_9)
{
 struct mlx5_core_dev *VAR_10 = VAR_7->mdev;
 void *VAR_11;
 int VAR_12;
 int VAR_13;
 u32 *VAR_14;
 int VAR_15;

 VAR_12 = FUNC_2(VAR_2) + sizeof(u32) * VAR_8;
 VAR_14 = FUNC_4(VAR_12, VAR_1);
 if (!VAR_14)
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_2, VAR_14, VAR_5);

 FUNC_1(VAR_11, VAR_11, VAR_4, VAR_8);
 FUNC_1(VAR_11, VAR_11, VAR_6, VAR_8);

 for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++)
  FUNC_1(VAR_11, VAR_11, VAR_3[VAR_15], VAR_7->drop_rq.rqn);

 VAR_13 = FUNC_5(VAR_10, VAR_14, VAR_12, &VAR_9->rqtn);
 if (!VAR_13)
  VAR_9->enabled = 1;

 FUNC_3(VAR_14);
 return VAR_13;
}
