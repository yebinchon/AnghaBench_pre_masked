
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct ocxl_context {int status; int pasid; TYPE_4__* afu; int status_mutex; } ;
typedef enum ocxl_context_status { ____Placeholder_ocxl_context_status } ocxl_context_status ;
struct TYPE_6__ {int dvsec_afu_control_pos; } ;
struct TYPE_8__ {TYPE_3__* fn; int afu_control_lock; TYPE_2__ config; } ;
struct TYPE_5__ {int parent; } ;
struct TYPE_7__ {int link; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pci_dev*,int,int ) ;
 int FUNC_4 (int ,int ) ;
 struct pci_dev* FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;

int FUNC_7(struct ocxl_context *VAR_3)
{
 struct pci_dev *VAR_4;
 int VAR_5;
 enum ocxl_context_status VAR_6;
 int VAR_7;

 FUNC_1(&VAR_3->status_mutex);
 VAR_6 = VAR_3->status;
 VAR_3->status = VAR_1;
 FUNC_2(&VAR_3->status_mutex);
 if (VAR_6 != VAR_0)
  return 0;

 VAR_4 = FUNC_5(VAR_3->afu->fn->dev.parent);
 VAR_5 = VAR_3->afu->config.dvsec_afu_control_pos;

 FUNC_1(&VAR_3->afu->afu_control_lock);
 VAR_7 = FUNC_3(VAR_4, VAR_5, VAR_3->pasid);
 FUNC_2(&VAR_3->afu->afu_control_lock);
 FUNC_6(VAR_3->pasid, VAR_7);
 if (VAR_7) {
  if (VAR_7 == -VAR_2)
   return VAR_7;
 }
 VAR_7 = FUNC_4(VAR_3->afu->fn->link, VAR_3->pasid);
 if (VAR_7) {
  FUNC_0(&VAR_4->dev,
   "Couldn't remove PE entry cleanly: %d\n", VAR_7);
 }
 return 0;
}
