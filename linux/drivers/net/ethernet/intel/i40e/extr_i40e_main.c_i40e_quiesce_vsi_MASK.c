
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i40e_vsi {TYPE_2__* netdev; int state; } ;
struct TYPE_5__ {TYPE_1__* netdev_ops; } ;
struct TYPE_4__ {int (* ndo_stop ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i40e_vsi*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct i40e_vsi *VAR_2)
{
 if (FUNC_4(VAR_0, VAR_2->state))
  return;

 FUNC_2(VAR_1, VAR_2->state);
 if (VAR_2->netdev && FUNC_1(VAR_2->netdev))
  VAR_2->netdev->netdev_ops->ndo_stop(VAR_2->netdev);
 else
  FUNC_0(VAR_2);
}
