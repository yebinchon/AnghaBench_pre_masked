
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* dcb; } ;
struct TYPE_2__ {int * ops; } ;


 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct qlcnic_adapter *VAR_2)
{
 if (FUNC_0(VAR_2))
  VAR_2->dcb->ops = &VAR_0;
 else if (FUNC_1(VAR_2))
  VAR_2->dcb->ops = &VAR_1;
}
