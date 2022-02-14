
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* slave_state; } ;
struct TYPE_10__ {TYPE_4__ master; } ;
struct mlx4_priv {TYPE_5__ mfunc; } ;
struct mlx4_eqe {int dummy; } ;
struct TYPE_7__ {int function; } ;
struct mlx4_dev {TYPE_2__ caps; TYPE_1__* persist; } ;
struct TYPE_8__ {int active; } ;
struct TYPE_6__ {int num_vfs; } ;


 struct mlx4_priv* FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (struct mlx4_dev*,int,struct mlx4_eqe*) ;

__attribute__((used)) static void FUNC_2(struct mlx4_dev *VAR_0, int VAR_1,
        struct mlx4_eqe *VAR_2)
{
 struct mlx4_priv *VAR_3 = FUNC_0(VAR_0);

 if (VAR_1 < 0 || VAR_1 > VAR_0->persist->num_vfs ||
     VAR_1 == VAR_0->caps.function ||
     !VAR_3->mfunc.master.slave_state[VAR_1].active)
  return;

 FUNC_1(VAR_0, VAR_1, VAR_2);
}
