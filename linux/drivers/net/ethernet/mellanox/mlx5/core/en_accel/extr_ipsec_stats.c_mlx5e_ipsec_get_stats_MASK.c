
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mlx5e_priv {TYPE_1__* ipsec; } ;
struct TYPE_2__ {int sw_stats; int stats; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_2(struct mlx5e_priv *VAR_5, u64 *VAR_6)
{
 int VAR_7, VAR_8 = 0;

 if (!VAR_5->ipsec)
  return 0;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  VAR_6[VAR_8++] = FUNC_0(&VAR_5->ipsec->stats,
         VAR_3, VAR_7);

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  VAR_6[VAR_8++] = FUNC_1(&VAR_5->ipsec->sw_stats,
            VAR_4, VAR_7);

 return VAR_0;
}
