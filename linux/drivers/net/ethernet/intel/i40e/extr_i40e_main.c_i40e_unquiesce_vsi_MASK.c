
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i40e_vsi {TYPE_2__* netdev; int state; } ;
struct TYPE_5__ {TYPE_1__* netdev_ops; } ;
struct TYPE_4__ {int (* ndo_open ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct i40e_vsi*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct i40e_vsi *VAR_1)
{
 if (!FUNC_3(VAR_0, VAR_1->state))
  return;

 if (VAR_1->netdev && FUNC_1(VAR_1->netdev))
  VAR_1->netdev->netdev_ops->ndo_open(VAR_1->netdev);
 else
  FUNC_0(VAR_1);
}
