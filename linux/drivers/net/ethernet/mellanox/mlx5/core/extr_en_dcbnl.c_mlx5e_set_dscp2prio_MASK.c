
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {size_t* dscp2prio; } ;
struct mlx5e_priv {TYPE_1__ dcbx_dp; int mdev; } ;


 int FUNC_0 (int ,size_t,size_t) ;

__attribute__((used)) static int FUNC_1(struct mlx5e_priv *VAR_0, u8 VAR_1, u8 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0->mdev, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_0->dcbx_dp.dscp2prio[VAR_1] = VAR_2;
 return VAR_3;
}
