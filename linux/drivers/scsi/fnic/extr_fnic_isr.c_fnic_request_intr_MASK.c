
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fnic {char* name; TYPE_2__* msix; TYPE_1__* lport; int pdev; int vdev; } ;
struct TYPE_4__ {char* devname; int requested; struct fnic* devid; int * isr; } ;
struct TYPE_3__ {int host; } ;


 int FUNC_0 (TYPE_2__*) ;
 char* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_1 (struct fnic*) ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int *,int ,char*,struct fnic*) ;
 int FUNC_4 (int ,int ,char*,int) ;
 int FUNC_5 (char*,char*,char*) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct fnic *VAR_13)
{
 int VAR_14 = 0;
 int VAR_15;

 switch (FUNC_6(VAR_13->vdev)) {

 case 130:
  VAR_14 = FUNC_3(FUNC_2(VAR_13->pdev, 0),
    &VAR_7, VAR_5, VAR_0, VAR_13);
  break;

 case 129:
  VAR_14 = FUNC_3(FUNC_2(VAR_13->pdev, 0), &VAR_8,
      0, VAR_13->name, VAR_13);
  break;

 case 128:

  FUNC_5(VAR_13->msix[VAR_2].devname,
   "%.11s-fcs-rq", VAR_13->name);
  VAR_13->msix[VAR_2].isr = VAR_10;
  VAR_13->msix[VAR_2].devid = VAR_13;

  FUNC_5(VAR_13->msix[VAR_3].devname,
   "%.11s-fcs-wq", VAR_13->name);
  VAR_13->msix[VAR_3].isr = VAR_11;
  VAR_13->msix[VAR_3].devid = VAR_13;

  FUNC_5(VAR_13->msix[VAR_4].devname,
   "%.11s-scsi-wq", VAR_13->name);
  VAR_13->msix[VAR_4].isr = VAR_12;
  VAR_13->msix[VAR_4].devid = VAR_13;

  FUNC_5(VAR_13->msix[VAR_1].devname,
   "%.11s-err-notify", VAR_13->name);
  VAR_13->msix[VAR_1].isr =
   VAR_9;
  VAR_13->msix[VAR_1].devid = VAR_13;

  for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_13->msix); VAR_15++) {
   VAR_14 = FUNC_3(FUNC_2(VAR_13->pdev, VAR_15),
       VAR_13->msix[VAR_15].isr, 0,
       VAR_13->msix[VAR_15].devname,
       VAR_13->msix[VAR_15].devid);
   if (VAR_14) {
    FUNC_4(VAR_6, VAR_13->lport->host,
          "MSIX: request_irq"
          " failed %d\n", VAR_14);
    FUNC_1(VAR_13);
    break;
   }
   VAR_13->msix[VAR_15].requested = 1;
  }
  break;

 default:
  break;
 }

 return VAR_14;
}
