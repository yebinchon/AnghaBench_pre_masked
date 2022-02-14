
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_dev_persistent {int state; int device_state_mutex; struct mlx4_dev* dev; } ;
struct mlx4_dev {TYPE_1__* persist; } ;
struct TYPE_2__ {int state; int pdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,int ,int ) ;
 int FUNC_4 (struct mlx4_dev*,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*) ;
 int FUNC_7 (struct mlx4_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

void FUNC_11(struct mlx4_dev_persistent *VAR_3)
{
 int VAR_4;
 struct mlx4_dev *VAR_5;

 if (!VAR_2)
  return;

 FUNC_8(&VAR_3->device_state_mutex);
 if (VAR_3->state & VAR_0)
  goto out;

 VAR_5 = VAR_3->dev;
 FUNC_4(VAR_5, "device is going to be reset\n");
 if (FUNC_5(VAR_5)) {
  VAR_4 = FUNC_7(VAR_5);
 } else {
  FUNC_2(VAR_5);
  VAR_4 = FUNC_6(VAR_5);
 }

 if (!VAR_4) {
  FUNC_4(VAR_5, "device was reset successfully\n");
 } else {



  if (!FUNC_10(VAR_5->persist->pdev))
   FUNC_0(1);
 }
 VAR_5->persist->state |= VAR_0;
 FUNC_9(&VAR_3->device_state_mutex);


 FUNC_3(VAR_5, VAR_1, 0);
 FUNC_1(VAR_5);
 return;

out:
 FUNC_9(&VAR_3->device_state_mutex);
}
