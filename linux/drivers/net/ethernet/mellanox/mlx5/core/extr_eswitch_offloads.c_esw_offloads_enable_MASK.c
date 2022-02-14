
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int termtbl_mutex; int encap; } ;
struct mlx5_eswitch {int dev; TYPE_1__ offloads; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mlx5_eswitch*) ;
 int FUNC_2 (struct mlx5_eswitch*) ;
 int FUNC_3 (struct mlx5_eswitch*) ;
 int FUNC_4 (struct mlx5_eswitch*) ;
 int FUNC_5 (struct mlx5_eswitch*,int) ;
 int FUNC_6 (struct mlx5_eswitch*) ;
 int FUNC_7 (struct mlx5_eswitch*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int VAR_4 ;

int FUNC_11(struct mlx5_eswitch *VAR_5)
{
 int VAR_6;

 if (FUNC_0(VAR_5->dev, VAR_4) &&
     FUNC_0(VAR_5->dev, VAR_3))
  VAR_5->offloads.encap = VAR_0;
 else
  VAR_5->offloads.encap = VAR_1;

 FUNC_9(VAR_5->dev);
 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6)
  goto err_steering_init;

 VAR_6 = FUNC_5(VAR_5, 1);
 if (VAR_6)
  goto err_vport_metadata;

 FUNC_7(VAR_5, VAR_2);

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6)
  goto err_reps;

 FUNC_1(VAR_5);
 FUNC_10(&VAR_5->offloads.termtbl_mutex);

 return 0;

err_reps:
 FUNC_6(VAR_5);
 FUNC_5(VAR_5, 0);
err_vport_metadata:
 FUNC_3(VAR_5);
err_steering_init:
 FUNC_8(VAR_5->dev);
 return VAR_6;
}
