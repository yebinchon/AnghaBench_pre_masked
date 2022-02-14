
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct vmxnet3_adapter {TYPE_1__ intr; int pdev; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct vmxnet3_adapter *VAR_3)
{
 if (VAR_3->intr.type == VAR_2)
  FUNC_2(VAR_3->pdev);
 else if (VAR_3->intr.type == VAR_1)
  FUNC_1(VAR_3->pdev);
 else
  FUNC_0(VAR_3->intr.type != VAR_0);
}
