
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int tdn; } ;
struct TYPE_4__ {int pdn; TYPE_1__ td; } ;
struct mlx5_core_dev {TYPE_2__ mlx5e_res; } ;


 void* FUNC_0 (int ,void*,int ) ;
 scalar_t__ FUNC_1 (void*,void*,int ) ;
 int FUNC_2 (void*,void*,int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct mlx5_core_dev*,void*,int ,int *) ;
 scalar_t__ FUNC_5 (struct mlx5_core_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_6(struct mlx5_core_dev *VAR_6, void *VAR_7, u32 *VAR_8)
{
 void *VAR_9 = FUNC_0(VAR_0, VAR_7, VAR_1);

 FUNC_2(VAR_9, VAR_9, VAR_5, VAR_6->mlx5e_res.td.tdn);

 if (FUNC_1(VAR_9, VAR_9, VAR_4))
  FUNC_2(VAR_9, VAR_9, VAR_2, VAR_6->mlx5e_res.pdn);

 if (FUNC_5(VAR_6))
  FUNC_2(VAR_9, VAR_9, VAR_3, 1);

 return FUNC_4(VAR_6, VAR_7, FUNC_3(VAR_0), VAR_8);
}
