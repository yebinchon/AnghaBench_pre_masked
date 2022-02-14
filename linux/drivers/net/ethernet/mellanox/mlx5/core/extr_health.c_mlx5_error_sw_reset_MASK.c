
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_core_dev {scalar_t__ state; int intf_state_mutex; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*,scalar_t__,unsigned long) ;
 unsigned long VAR_6 ;
 int FUNC_3 (struct mlx5_core_dev*,int) ;
 int FUNC_4 (struct mlx5_core_dev*,char*) ;
 scalar_t__ FUNC_5 (struct mlx5_core_dev*) ;
 unsigned long FUNC_6 (unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct mlx5_core_dev*) ;
 int FUNC_10 (unsigned long,unsigned long) ;

void FUNC_11(struct mlx5_core_dev *VAR_7)
{
 unsigned long VAR_8, VAR_9 = VAR_3;
 int VAR_10 = -VAR_0;

 FUNC_7(&VAR_7->intf_state_mutex);
 if (VAR_7->state != VAR_2)
  goto unlock;

 FUNC_4(VAR_7, "start\n");

 if (FUNC_0(VAR_7) == VAR_5) {

  VAR_10 = FUNC_3(VAR_7, 1);

  if (VAR_10 == -VAR_0) {
   VAR_9 = VAR_1;
   goto recover_from_sw_reset;
  }

  FUNC_9(VAR_7);
 }

recover_from_sw_reset:

 VAR_8 = VAR_6 + FUNC_6(VAR_9);
 do {
  if (FUNC_5(VAR_7) == VAR_4)
   break;

  FUNC_1();
 } while (!FUNC_10(VAR_6, VAR_8));

 if (FUNC_5(VAR_7) != VAR_4) {
  FUNC_2(&VAR_7->pdev->dev, "NIC IFC still %d after %lums.\n",
   FUNC_5(VAR_7), VAR_9);
 }


 if (!VAR_10)
  FUNC_3(VAR_7, 0);

 FUNC_4(VAR_7, "end\n");

unlock:
 FUNC_8(&VAR_7->intf_state_mutex);
}
