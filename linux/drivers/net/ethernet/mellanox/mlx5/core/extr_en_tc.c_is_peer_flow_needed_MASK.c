
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx5e_tc_flow {struct mlx5_esw_flow_attr* esw_attr; } ;
struct mlx5_esw_flow_attr {int action; TYPE_3__* in_mdev; TYPE_2__* in_rep; } ;
struct TYPE_5__ {int devcom; } ;
struct TYPE_7__ {TYPE_1__ priv; } ;
struct TYPE_6__ {scalar_t__ vport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct mlx5e_tc_flow*,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static bool FUNC_4(struct mlx5e_tc_flow *VAR_4)
{
 struct mlx5_esw_flow_attr *VAR_5 = VAR_4->esw_attr;
 bool VAR_6 = VAR_5->in_rep->vport != VAR_3 &&
  FUNC_0(VAR_4, VAR_0);
 bool VAR_7 = !!(VAR_5->action &
          VAR_2);
 bool VAR_8 = FUNC_1(VAR_5->in_mdev->priv.devcom,
      VAR_1);

 if (!VAR_8)
  return 0;

 if ((FUNC_3(VAR_5->in_mdev) ||
      FUNC_2(VAR_5->in_mdev)) &&
     (VAR_6 || VAR_7))
  return 1;

 return 0;
}
