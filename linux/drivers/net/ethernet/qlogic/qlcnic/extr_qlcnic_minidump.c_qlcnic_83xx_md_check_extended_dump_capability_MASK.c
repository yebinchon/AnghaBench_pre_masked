
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_2__* ahw; TYPE_1__* pdev; } ;
struct TYPE_4__ {int* extra_capability; } ;
struct TYPE_3__ {scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool
FUNC_0(struct qlcnic_adapter *VAR_2)
{





 return ((VAR_2->pdev->device == VAR_0) &&
  (VAR_2->ahw->extra_capability[0] &
   VAR_1));
}
