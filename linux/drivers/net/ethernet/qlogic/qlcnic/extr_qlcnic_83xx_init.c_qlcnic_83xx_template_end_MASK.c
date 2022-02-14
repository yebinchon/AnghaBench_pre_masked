
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_3__* pdev; TYPE_2__* ahw; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int template_end; scalar_t__ seq_error; } ;
struct TYPE_5__ {TYPE_1__ reset; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct qlcnic_adapter *VAR_0)
{
 VAR_0->ahw->reset.template_end = 1;
 if (VAR_0->ahw->reset.seq_error == 0)
  FUNC_0(&VAR_0->pdev->dev,
   "HW restart process completed successfully.\n");
 else
  FUNC_0(&VAR_0->pdev->dev,
   "HW restart completed with timeout errors.\n");
}
