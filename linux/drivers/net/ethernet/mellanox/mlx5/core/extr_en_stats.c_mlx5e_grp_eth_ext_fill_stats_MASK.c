
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int eth_ext_counters; } ;
struct TYPE_4__ {TYPE_1__ pport; } ;
struct mlx5e_priv {TYPE_2__ stats; int mdev; } ;


 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct mlx5e_priv *VAR_3, u64 *VAR_4,
     int VAR_5)
{
 int VAR_6;

 if (FUNC_1((VAR_3)->mdev, VAR_2))
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
   VAR_4[VAR_5++] =
    FUNC_0(&VAR_3->stats.pport.eth_ext_counters,
          VAR_1, VAR_6);
 return VAR_5;
}
