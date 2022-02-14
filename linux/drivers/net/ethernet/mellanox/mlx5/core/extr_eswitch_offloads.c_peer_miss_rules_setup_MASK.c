
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_flow_spec {int match_criteria; int match_criteria_enable; int match_value; } ;
struct TYPE_6__ {int flags; int vhca_id; int num; } ;
struct mlx5_flow_destination {TYPE_3__ vport; int type; } ;
struct mlx5_eswitch {int dummy; } ;
struct TYPE_5__ {TYPE_1__* eswitch; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;
struct TYPE_4__ {int manager_vport; } ;


 void* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,void*,int ,int ) ;
 int FUNC_3 (int ,void*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (struct mlx5_eswitch*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_5(struct mlx5_eswitch *VAR_13,
      struct mlx5_core_dev *VAR_14,
      struct mlx5_flow_spec *VAR_15,
      struct mlx5_flow_destination *VAR_16)
{
 void *VAR_17;

 if (FUNC_4(VAR_13)) {
  VAR_17 = FUNC_0(VAR_4, VAR_15->match_criteria,
        VAR_9);
  FUNC_3(VAR_6, VAR_17, VAR_7);

  VAR_15->match_criteria_enable = VAR_3;
 } else {
  VAR_17 = FUNC_0(VAR_4, VAR_15->match_value,
        VAR_8);

  FUNC_2(VAR_5, VAR_17, VAR_10,
    FUNC_1(VAR_14, VAR_12));

  VAR_15->match_criteria_enable = VAR_2;

  VAR_17 = FUNC_0(VAR_4, VAR_15->match_criteria,
        VAR_8);
  FUNC_3(VAR_5, VAR_17, VAR_11);
  FUNC_3(VAR_5, VAR_17,
     VAR_10);
 }

 VAR_16->type = VAR_0;
 VAR_16->vport.num = VAR_14->priv.eswitch->manager_vport;
 VAR_16->vport.vhca_id = FUNC_1(VAR_14, VAR_12);
 VAR_16->vport.flags |= VAR_1;
}
