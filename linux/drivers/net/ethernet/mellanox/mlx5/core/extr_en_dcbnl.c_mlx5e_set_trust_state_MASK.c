
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int trust_state; } ;
struct mlx5e_priv {TYPE_1__ dcbx_dp; int mdev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mlx5e_priv*) ;

__attribute__((used)) static int FUNC_2(struct mlx5e_priv *VAR_0, u8 VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0->mdev, VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_0->dcbx_dp.trust_state = VAR_1;
 FUNC_1(VAR_0);

 return VAR_2;
}
