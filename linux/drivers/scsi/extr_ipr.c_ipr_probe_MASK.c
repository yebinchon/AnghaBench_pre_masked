
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct ipr_ioa_cfg {int scan_enabled; int nvectors; int hrrq_num; TYPE_4__* host; scalar_t__ iopoll_weight; TYPE_3__* hrrq; scalar_t__ sis64; TYPE_2__* chip_cfg; int work_q; } ;
struct TYPE_7__ {int kobj; } ;
struct TYPE_10__ {int host_lock; TYPE_1__ shost_dev; } ;
struct TYPE_9__ {int iopoll; } ;
struct TYPE_8__ {scalar_t__ iopoll_weight; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct pci_dev*,struct pci_device_id const*) ;
 int FUNC_4 (struct ipr_ioa_cfg*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int VAR_3 ;
 int FUNC_7 (int *,scalar_t__,int ) ;
 struct ipr_ioa_cfg* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_4__*,int *) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (int ,unsigned long) ;
 int FUNC_14 (int ,unsigned long) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *) ;

__attribute__((used)) static int FUNC_17(struct pci_dev *VAR_4, const struct pci_device_id *VAR_5)
{
 struct ipr_ioa_cfg *VAR_6;
 unsigned long VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_3(VAR_4, VAR_5);

 if (VAR_8)
  return VAR_8;

 VAR_6 = FUNC_8(VAR_4);
 VAR_8 = FUNC_4(VAR_6);

 if (VAR_8) {
  FUNC_0(VAR_4);
  return VAR_8;
 }

 VAR_8 = FUNC_10(VAR_6->host, &VAR_4->dev);

 if (VAR_8) {
  FUNC_0(VAR_4);
  return VAR_8;
 }

 VAR_8 = FUNC_2(&VAR_6->host->shost_dev.kobj,
       &VAR_3);

 if (VAR_8) {
  FUNC_11(VAR_6->host);
  FUNC_0(VAR_4);
  return VAR_8;
 }

 VAR_8 = FUNC_15(&VAR_6->host->shost_dev.kobj,
   &VAR_1);

 if (VAR_8) {
  FUNC_5(&VAR_6->host->shost_dev.kobj,
    &VAR_0);
  FUNC_6(&VAR_6->host->shost_dev.kobj,
    &VAR_3);
  FUNC_11(VAR_6->host);
  FUNC_0(VAR_4);
  return VAR_8;
 }

 VAR_8 = FUNC_1(&VAR_6->host->shost_dev.kobj,
       &VAR_0);

 if (VAR_8) {
  FUNC_16(&VAR_6->host->shost_dev.kobj,
          &VAR_1);
  FUNC_6(&VAR_6->host->shost_dev.kobj,
          &VAR_3);
  FUNC_11(VAR_6->host);
  FUNC_0(VAR_4);
  return VAR_8;
 }
 FUNC_13(VAR_6->host->host_lock, VAR_7);
 VAR_6->scan_enabled = 1;
 FUNC_9(&VAR_6->work_q);
 FUNC_14(VAR_6->host->host_lock, VAR_7);

 VAR_6->iopoll_weight = VAR_6->chip_cfg->iopoll_weight;

 if (VAR_6->iopoll_weight && VAR_6->sis64 && VAR_6->nvectors > 1) {
  for (VAR_9 = 1; VAR_9 < VAR_6->hrrq_num; VAR_9++) {
   FUNC_7(&VAR_6->hrrq[VAR_9].iopoll,
     VAR_6->iopoll_weight, VAR_2);
  }
 }

 FUNC_12(VAR_6->host);

 return 0;
}
