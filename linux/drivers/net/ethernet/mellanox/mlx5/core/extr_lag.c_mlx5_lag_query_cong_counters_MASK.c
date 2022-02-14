
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mlx5_lag {TYPE_1__* pf; } ;
struct mlx5_core_dev {int dummy; } ;
typedef int __be64 ;
struct TYPE_2__ {struct mlx5_core_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mlx5_lag*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int,int ) ;
 int VAR_3 ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct mlx5_core_dev*,int,void*,int) ;
 struct mlx5_lag* FUNC_7 (struct mlx5_core_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;

int FUNC_10(struct mlx5_core_dev *VAR_5,
     u64 *VAR_6,
     int VAR_7,
     size_t *VAR_8)
{
 int VAR_9 = FUNC_0(VAR_4);
 struct mlx5_core_dev *VAR_10[VAR_2];
 struct mlx5_lag *VAR_11;
 int VAR_12;
 int VAR_13, VAR_14, VAR_15;
 void *VAR_16;

 VAR_16 = FUNC_4(VAR_9, VAR_1);
 if (!VAR_16)
  return -VAR_0;

 FUNC_5(VAR_6, 0, sizeof(*VAR_6) * VAR_7);

 FUNC_8(&VAR_3);
 VAR_11 = FUNC_7(VAR_5);
 if (VAR_11 && FUNC_1(VAR_11)) {
  VAR_12 = VAR_2;
  VAR_10[0] = VAR_11->pf[0].dev;
  VAR_10[1] = VAR_11->pf[1].dev;
 } else {
  VAR_12 = 1;
  VAR_10[0] = VAR_5;
 }

 for (VAR_14 = 0; VAR_14 < VAR_12; ++VAR_14) {
  VAR_13 = FUNC_6(VAR_10[VAR_14], 0, VAR_16, VAR_9);
  if (VAR_13)
   goto unlock;

  for (VAR_15 = 0; VAR_15 < VAR_7; ++VAR_15)
   VAR_6[VAR_15] += FUNC_2((__be64 *)(VAR_16 + VAR_8[VAR_15]));
 }

unlock:
 FUNC_9(&VAR_3);
 FUNC_3(VAR_16);
 return VAR_13;
}
