
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int * per_prio_counters; } ;
struct TYPE_4__ {TYPE_1__ pport; } ;
struct mlx5e_priv {TYPE_2__ stats; } ;


 int FUNC_0 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct mlx5e_priv *VAR_3,
       u64 *VAR_4,
       int VAR_5)
{
 int VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
   VAR_4[VAR_5++] =
    FUNC_0(&VAR_3->stats.pport.per_prio_counters[VAR_7],
          VAR_2, VAR_6);
 }

 return VAR_5;
}
