
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_7__ {scalar_t__ default_vlan; int default_qos; } ;
struct mlx4_vport_oper_state {TYPE_3__ state; } ;
struct TYPE_5__ {TYPE_4__* vf_oper; } ;
struct TYPE_6__ {TYPE_1__ master; } ;
struct mlx4_priv {TYPE_2__ mfunc; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_8__ {struct mlx4_vport_oper_state* vport; } ;


 scalar_t__ VAR_0 ;
 struct mlx4_priv* FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (struct mlx4_dev*,int,int) ;

bool FUNC_2(struct mlx4_dev *VAR_1, int VAR_2, int VAR_3,
     u16 *VAR_4, u8 *VAR_5)
{
 struct mlx4_vport_oper_state *VAR_6;
 struct mlx4_priv *VAR_7;

 VAR_7 = FUNC_0(VAR_1);
 VAR_2 = FUNC_1(VAR_1, VAR_3, VAR_2);
 VAR_6 = &VAR_7->mfunc.master.vf_oper[VAR_3].vport[VAR_2];

 if (VAR_0 != VAR_6->state.default_vlan) {
  if (VAR_4)
   *VAR_4 = VAR_6->state.default_vlan;
  if (VAR_5)
   *VAR_5 = VAR_6->state.default_qos;
  return 1;
 }
 return 0;
}
