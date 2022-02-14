
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mlx5e_priv {TYPE_1__* ipsec; int mdev; } ;
struct TYPE_2__ {int stats; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,int *,int ) ;

void FUNC_2(struct mlx5e_priv *VAR_1)
{
 int VAR_2;

 if (!VAR_1->ipsec)
  return;

 VAR_2 = FUNC_1(VAR_1->mdev, (u64 *)&VAR_1->ipsec->stats,
          VAR_0);
 if (VAR_2)
  FUNC_0(&VAR_1->ipsec->stats, 0, sizeof(VAR_1->ipsec->stats));
}
