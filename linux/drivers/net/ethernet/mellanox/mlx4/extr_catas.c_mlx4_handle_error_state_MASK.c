
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_dev_persistent {int interface_state; int interface_state_mutex; int dev; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_dev_persistent*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mlx4_dev_persistent *VAR_2)
{
 int VAR_3 = 0;

 FUNC_0(VAR_2);
 FUNC_3(&VAR_2->interface_state_mutex);
 if (VAR_2->interface_state & VAR_1 &&
     !(VAR_2->interface_state & VAR_0)) {
  VAR_3 = FUNC_2(VAR_2->pdev);
  FUNC_1(VAR_2->dev, "mlx4_restart_one was ended, ret=%d\n",
     VAR_3);
 }
 FUNC_4(&VAR_2->interface_state_mutex);
}
