
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snic {char* name; TYPE_1__* msix; int shost; int pdev; int vdev; } ;
typedef enum vnic_dev_intr_mode { ____Placeholder_vnic_dev_intr_mode } vnic_dev_intr_mode ;
struct TYPE_2__ {int requested; struct snic* devid; int devname; int isr; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int ,int ,struct snic*) ;
 int FUNC_5 (struct snic*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (int ) ;

int
FUNC_8(struct snic *VAR_7)
{
 int VAR_8 = 0, VAR_9;
 enum vnic_dev_intr_mode VAR_10;

 VAR_10 = FUNC_7(VAR_7->vdev);
 FUNC_1(VAR_10 != VAR_3);
 FUNC_6(VAR_7->msix[VAR_2].devname,
  "%.11s-scsi-wq",
  VAR_7->name);
 VAR_7->msix[VAR_2].isr = VAR_6;
 VAR_7->msix[VAR_2].devid = VAR_7;

 FUNC_6(VAR_7->msix[VAR_1].devname,
  "%.11s-io-cmpl",
  VAR_7->name);
 VAR_7->msix[VAR_1].isr = VAR_5;
 VAR_7->msix[VAR_1].devid = VAR_7;

 FUNC_6(VAR_7->msix[VAR_0].devname,
  "%.11s-err-notify",
  VAR_7->name);
 VAR_7->msix[VAR_0].isr = VAR_4;
 VAR_7->msix[VAR_0].devid = VAR_7;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_7->msix); VAR_9++) {
  VAR_8 = FUNC_4(FUNC_3(VAR_7->pdev, VAR_9),
      VAR_7->msix[VAR_9].isr,
      0,
      VAR_7->msix[VAR_9].devname,
      VAR_7->msix[VAR_9].devid);
  if (VAR_8) {
   FUNC_2(VAR_7->shost,
          "MSI-X: request_irq(%d) failed %d\n",
          VAR_9,
          VAR_8);
   FUNC_5(VAR_7);
   break;
  }
  VAR_7->msix[VAR_9].requested = 1;
 }

 return VAR_8;
}
