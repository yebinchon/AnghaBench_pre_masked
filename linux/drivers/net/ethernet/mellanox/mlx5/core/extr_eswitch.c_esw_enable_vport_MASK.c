
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {int trusted; int max_rate; } ;
struct TYPE_3__ {int bw_share; } ;
struct mlx5_vport {scalar_t__ vport; int enabled; int enabled_events; TYPE_2__ info; TYPE_1__ qos; } ;
struct mlx5_eswitch {scalar_t__ mode; scalar_t__ manager_vport; int state_lock; int dev; int enabled_vports; } ;
typedef enum mlx5_eswitch_vport_event { ____Placeholder_mlx5_eswitch_vport_event } mlx5_eswitch_vport_event ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (struct mlx5_vport*) ;
 int FUNC_4 (struct mlx5_vport*) ;
 scalar_t__ FUNC_5 (struct mlx5_eswitch*,struct mlx5_vport*,int ,int ) ;
 int FUNC_6 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct mlx5_eswitch *VAR_1, struct mlx5_vport *VAR_2,
        enum mlx5_eswitch_vport_event VAR_3)
{
 u16 VAR_4 = VAR_2->vport;

 FUNC_8(&VAR_1->state_lock);
 FUNC_0(VAR_2->enabled);

 FUNC_2(VAR_1->dev, "Enabling VPORT(%d)\n", VAR_4);


 if (VAR_4 && VAR_1->mode == VAR_0)
  FUNC_4(VAR_2);


 FUNC_1(VAR_1, VAR_2);


 if (FUNC_5(VAR_1, VAR_2, VAR_2->info.max_rate,
     VAR_2->qos.bw_share))
  FUNC_6(VAR_1->dev, "Failed to attach vport %d to eswitch rate limiter", VAR_4);


 VAR_2->enabled_events = VAR_3;
 VAR_2->enabled = 1;




 if (VAR_1->manager_vport == VAR_4 ||
     (!VAR_4 && FUNC_7(VAR_1->dev)))
  VAR_2->info.trusted = 1;

 FUNC_3(VAR_2);

 VAR_1->enabled_vports++;
 FUNC_2(VAR_1->dev, "Enabled VPORT(%d)\n", VAR_4);
 FUNC_9(&VAR_1->state_lock);
}
