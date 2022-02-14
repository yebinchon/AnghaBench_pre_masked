
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {int flags; TYPE_3__* pdev; TYPE_2__* msix_entries; TYPE_1__* ahw; } ;
typedef int irq_handler_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int vector; } ;
struct TYPE_4__ {int num_msix; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,unsigned long,char*,struct qlcnic_adapter*) ;

int FUNC_4(struct qlcnic_adapter *VAR_5)
{
 irq_handler_t VAR_6;
 u32 VAR_7;
 int VAR_8 = 0;
 unsigned long VAR_9 = 0;

 if (!(VAR_5->flags & VAR_2) &&
     !(VAR_5->flags & VAR_1))
  VAR_9 |= VAR_0;

 if (VAR_5->flags & VAR_1) {
  VAR_6 = VAR_3;
  VAR_7 = VAR_5->msix_entries[VAR_5->ahw->num_msix - 1].vector;
  VAR_8 = FUNC_3(VAR_7, VAR_6, VAR_9, "qlcnic-MB", VAR_5);
  if (VAR_8) {
   FUNC_0(&VAR_5->pdev->dev,
    "failed to register MBX interrupt\n");
   return VAR_8;
  }
 } else {
  VAR_6 = VAR_4;
  VAR_7 = VAR_5->msix_entries[0].vector;
  VAR_8 = FUNC_3(VAR_7, VAR_6, VAR_9, "qlcnic", VAR_5);
  if (VAR_8) {
   FUNC_0(&VAR_5->pdev->dev,
    "failed to register INTx interrupt\n");
   return VAR_8;
  }
  FUNC_1(VAR_5);
 }


 FUNC_2(VAR_5);

 return VAR_8;
}
