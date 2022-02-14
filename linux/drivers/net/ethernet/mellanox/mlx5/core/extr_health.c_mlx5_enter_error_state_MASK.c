
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int events; } ;
struct mlx5_core_dev {scalar_t__ state; int intf_state_mutex; TYPE_1__ priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (int ,int ,void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mlx5_core_dev *VAR_3, bool VAR_4)
{
 FUNC_3(&VAR_3->intf_state_mutex);
 if (VAR_3->state == VAR_0)
  goto unlock;
 if (VAR_3->state == VAR_1) {
  VAR_3->state = VAR_0;
  goto unlock;
 }

 if (FUNC_0(VAR_3) || VAR_4) {
  VAR_3->state = VAR_0;
  FUNC_1(VAR_3);
 }

 FUNC_2(VAR_3->priv.events, VAR_2, (void *)1);
unlock:
 FUNC_4(&VAR_3->intf_state_mutex);
}
