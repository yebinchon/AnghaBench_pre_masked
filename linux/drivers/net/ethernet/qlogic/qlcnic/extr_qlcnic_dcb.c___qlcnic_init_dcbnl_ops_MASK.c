
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_dcb {TYPE_2__* adapter; int state; } ;
struct TYPE_4__ {TYPE_1__* netdev; } ;
struct TYPE_3__ {int * dcbnl_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static inline void FUNC_1(struct qlcnic_dcb *VAR_2)
{
 if (FUNC_0(VAR_0, &VAR_2->state))
  VAR_2->adapter->netdev->dcbnl_ops = &VAR_1;
}
