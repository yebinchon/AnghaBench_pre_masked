
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int flow_source; } ;
struct mlx5_flow_spec {TYPE_3__ flow_context; int match_criteria_enable; int match_criteria; int match_value; } ;
struct mlx5_eswitch {int dev; } ;
struct mlx5_esw_flow_attr {TYPE_2__* in_rep; TYPE_4__* in_mdev; } ;
struct TYPE_5__ {int eswitch; } ;
struct TYPE_8__ {TYPE_1__ priv; } ;
struct TYPE_6__ {scalar_t__ vport; } ;


 void* FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,void*,int ,scalar_t__) ;
 int FUNC_5 (int ,void*,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (void*,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (struct mlx5_eswitch*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void
FUNC_10(struct mlx5_eswitch *VAR_15,
      struct mlx5_flow_spec *VAR_16,
      struct mlx5_esw_flow_attr *VAR_17)
{
 void *VAR_18;
 void *VAR_19;




 if (FUNC_9(VAR_15)) {
  VAR_18 = FUNC_0(VAR_5, VAR_16->match_value, VAR_11);
  FUNC_4(VAR_7, VAR_18, VAR_9,
    FUNC_8(VAR_17->in_mdev->priv.eswitch,
           VAR_17->in_rep->vport));

  VAR_18 = FUNC_0(VAR_5, VAR_16->match_criteria, VAR_11);
  FUNC_5(VAR_7, VAR_18, VAR_9);

  VAR_16->match_criteria_enable |= VAR_2;
  VAR_19 = FUNC_0(VAR_5, VAR_16->match_criteria, VAR_10);
  if (FUNC_7(VAR_19, 0, FUNC_6(VAR_6)))
   VAR_16->match_criteria_enable |= VAR_1;
 } else {
  VAR_19 = FUNC_0(VAR_5, VAR_16->match_value, VAR_10);
  FUNC_4(VAR_6, VAR_19, VAR_13, VAR_17->in_rep->vport);

  if (FUNC_1(VAR_15->dev, VAR_8))
   FUNC_4(VAR_6, VAR_19,
     VAR_12,
     FUNC_3(VAR_17->in_mdev, VAR_14));

  VAR_19 = FUNC_0(VAR_5, VAR_16->match_criteria, VAR_10);
  FUNC_5(VAR_6, VAR_19, VAR_13);
  if (FUNC_1(VAR_15->dev, VAR_8))
   FUNC_5(VAR_6, VAR_19,
      VAR_12);

  VAR_16->match_criteria_enable |= VAR_1;
 }

 if (FUNC_2(VAR_15->dev, VAR_4) &&
     VAR_17->in_rep->vport == VAR_3)
  VAR_16->flow_context.flow_source = VAR_0;
}
