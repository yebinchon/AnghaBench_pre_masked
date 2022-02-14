
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mlx4_vport_state {scalar_t__ default_vlan; int default_qos; int vlan_proto; } ;
struct TYPE_10__ {scalar_t__ default_vlan; int default_qos; int vlan_proto; } ;
struct mlx4_vport_oper_state {TYPE_5__ state; int vlan_idx; } ;
struct TYPE_8__ {TYPE_2__* vf_admin; TYPE_1__* vf_oper; } ;
struct TYPE_9__ {TYPE_3__ master; } ;
struct mlx4_priv {int dev; TYPE_4__ mfunc; } ;
struct TYPE_7__ {struct mlx4_vport_state* vport; } ;
struct TYPE_6__ {struct mlx4_vport_oper_state* vport; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,scalar_t__,int *) ;
 int FUNC_1 (int *,char*,int,int ,int,int) ;
 int FUNC_2 (int *,char*,int,int) ;

__attribute__((used)) static int FUNC_3(struct mlx4_priv *VAR_1, int VAR_2, int VAR_3)
{
 struct mlx4_vport_oper_state *VAR_4;
 struct mlx4_vport_state *VAR_5;
 int VAR_6;

 VAR_4 = &VAR_1->mfunc.master.vf_oper[VAR_2].vport[VAR_3];
 VAR_5 = &VAR_1->mfunc.master.vf_admin[VAR_2].vport[VAR_3];

 if (VAR_5->default_vlan != VAR_4->state.default_vlan) {
  VAR_6 = FUNC_0(&VAR_1->dev, VAR_3,
        VAR_5->default_vlan,
        &VAR_4->vlan_idx);
  if (VAR_6) {
   VAR_4->vlan_idx = VAR_0;
   FUNC_2(&VAR_1->dev,
      "No vlan resources slave %d, port %d\n",
      VAR_2, VAR_3);
   return VAR_6;
  }
  FUNC_1(&VAR_1->dev, "alloc vlan %d idx  %d slave %d port %d\n",
    (int)(VAR_4->state.default_vlan),
    VAR_4->vlan_idx, VAR_2, VAR_3);
 }
 VAR_4->state.vlan_proto = VAR_5->vlan_proto;
 VAR_4->state.default_vlan = VAR_5->default_vlan;
 VAR_4->state.default_qos = VAR_5->default_qos;

 return 0;
}
