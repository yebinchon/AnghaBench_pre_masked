
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx5e_priv {int mdev; } ;
struct mlx5_pme_stats {int error_counters; int status_counters; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct mlx5_pme_stats*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct mlx5e_priv *VAR_4, u64 *VAR_5,
        int VAR_6)
{
 struct mlx5_pme_stats VAR_7;
 int VAR_8;

 FUNC_1(VAR_4->mdev, &VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  VAR_5[VAR_6++] = FUNC_0(VAR_7.status_counters,
         VAR_3, VAR_8);

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  VAR_5[VAR_6++] = FUNC_0(VAR_7.error_counters,
         VAR_2, VAR_8);

 return VAR_6;
}
