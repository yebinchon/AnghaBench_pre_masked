
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int num_vfs; } ;
struct mlx5_eswitch {scalar_t__ mode; TYPE_1__ esw_funcs; int dev; } ;
struct TYPE_4__ {int host_num_of_vfs; } ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int const*,int ) ;
 int FUNC_2 (int) ;
 TYPE_2__ VAR_1 ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int VAR_2 ;

void FUNC_6(struct mlx5_eswitch *VAR_3, const int VAR_4)
{
 const u32 *VAR_5;

 FUNC_2(VAR_3->mode != VAR_0);

 if (!FUNC_4(VAR_3->dev)) {
  VAR_3->esw_funcs.num_vfs = VAR_4;
  return;
 }

 VAR_5 = FUNC_5(VAR_3->dev);
 if (FUNC_0(VAR_5))
  return;

 VAR_3->esw_funcs.num_vfs = FUNC_1(VAR_2, VAR_5,
       VAR_1.host_num_of_vfs);
 FUNC_3(VAR_5);
}
