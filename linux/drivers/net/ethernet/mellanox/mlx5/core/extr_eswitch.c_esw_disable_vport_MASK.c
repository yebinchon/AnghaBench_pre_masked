
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mlx5_vport {scalar_t__ vport; int enabled; scalar_t__ enabled_events; } ;
struct mlx5_eswitch {scalar_t__ manager_vport; scalar_t__ mode; int state_lock; int enabled_vports; int dev; int work_queue; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct mlx5_vport*) ;
 int FUNC_3 (struct mlx5_vport*) ;
 int FUNC_4 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 int FUNC_5 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 int FUNC_6 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,scalar_t__,int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct mlx5_eswitch *VAR_3,
         struct mlx5_vport *VAR_4)
{
 u16 VAR_5 = VAR_4->vport;

 if (!VAR_4->enabled)
  return;

 FUNC_1(VAR_3->dev, "Disabling vport(%d)\n", VAR_5);

 VAR_4->enabled = 0;


 FUNC_7(VAR_3->work_queue);

 FUNC_0(VAR_3->dev, VAR_4->vport, 0);
 FUNC_9(&VAR_3->state_lock);




 FUNC_2(VAR_4);
 VAR_4->enabled_events = 0;
 FUNC_6(VAR_3, VAR_4);
 if (VAR_3->manager_vport != VAR_5 &&
     VAR_3->mode == VAR_0) {
  FUNC_8(VAR_3->dev,
           VAR_2,
           VAR_5, 1,
           VAR_1);
  FUNC_4(VAR_3, VAR_4);
  FUNC_5(VAR_3, VAR_4);
  FUNC_3(VAR_4);
 }
 VAR_3->enabled_vports--;
 FUNC_10(&VAR_3->state_lock);
}
