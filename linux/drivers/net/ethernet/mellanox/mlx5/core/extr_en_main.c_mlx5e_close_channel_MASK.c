
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_channel {int napi; int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5e_channel*) ;
 int FUNC_1 (struct mlx5e_channel*) ;
 int FUNC_2 (struct mlx5e_channel*) ;
 int FUNC_3 (struct mlx5e_channel*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct mlx5e_channel *VAR_1)
{
 if (FUNC_5(VAR_0, VAR_1->state))
  FUNC_2(VAR_1);
 FUNC_1(VAR_1);
 FUNC_4(&VAR_1->napi);
 FUNC_3(VAR_1);

 FUNC_0(VAR_1);
}
