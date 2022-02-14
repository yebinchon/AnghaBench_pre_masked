
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_intrpt_config {int dummy; } ;
struct qlcnic_hardware_context {int num_msix; TYPE_2__* intr_tbl; int diag_test; } ;
struct qlcnic_adapter {int flags; TYPE_1__* pdev; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_4__ {int id; scalar_t__ src; int type; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct qlcnic_adapter*,int) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 TYPE_2__* FUNC_4 (int ) ;

int FUNC_5(struct qlcnic_adapter *VAR_3, int VAR_4)
{
 struct qlcnic_hardware_context *VAR_5 = VAR_3->ahw;
 int VAR_6, VAR_7;

 if (FUNC_3(VAR_3) &&
     !VAR_5->diag_test &&
     (VAR_3->flags & VAR_2)) {
  VAR_5->intr_tbl =
   FUNC_4(FUNC_0(sizeof(struct qlcnic_intrpt_config),
        VAR_5->num_msix));
  if (!VAR_5->intr_tbl)
   return -VAR_0;

  for (VAR_7 = 0; VAR_7 < VAR_5->num_msix; VAR_7++) {
   VAR_5->intr_tbl[VAR_7].type = VAR_1;
   VAR_5->intr_tbl[VAR_7].id = VAR_7;
   VAR_5->intr_tbl[VAR_7].src = 0;
  }

  VAR_6 = FUNC_2(VAR_3, 1);
  if (VAR_6)
   FUNC_1(&VAR_3->pdev->dev,
    "Failed to configure Interrupt for %d vector\n",
    VAR_5->num_msix);
  return VAR_6;
 }

 return 0;
}
