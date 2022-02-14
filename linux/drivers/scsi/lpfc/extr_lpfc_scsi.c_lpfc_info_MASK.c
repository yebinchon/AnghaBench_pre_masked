
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {char* ModelDesc; scalar_t__* Port; TYPE_2__* pcidev; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int lpfcinfobuf ;
struct TYPE_4__ {int irq; int devfn; TYPE_1__* bus; } ;
struct TYPE_3__ {int number; } ;


 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,int,char*,...) ;
 int FUNC_4 (char*,char*,int) ;

const char *
FUNC_5(struct Scsi_Host *VAR_0)
{
 struct lpfc_vport *VAR_1 = (struct lpfc_vport *) VAR_0->hostdata;
 struct lpfc_hba *VAR_2 = VAR_1->phba;
 int VAR_3 = 0;
 static char VAR_4[384];
 char VAR_5[384] = {0};

 FUNC_2(VAR_4, 0, sizeof(VAR_4));
 if (VAR_2 && VAR_2->pcidev){

  FUNC_3(VAR_5, sizeof(VAR_5), VAR_2->ModelDesc);
  if (FUNC_4(VAR_4, VAR_5, sizeof(VAR_4)) >=
      sizeof(VAR_4))
   goto buffer_done;


  FUNC_3(VAR_5, sizeof(VAR_5),
     " on PCI bus %02x device %02x irq %d",
     VAR_2->pcidev->bus->number, VAR_2->pcidev->devfn,
     VAR_2->pcidev->irq);
  if (FUNC_4(VAR_4, VAR_5, sizeof(VAR_4)) >=
      sizeof(VAR_4))
   goto buffer_done;


  if (VAR_2->Port[0]) {
   FUNC_3(VAR_5, sizeof(VAR_5), " port %s", VAR_2->Port);
   if (FUNC_4(VAR_4, VAR_5, sizeof(VAR_4)) >=
       sizeof(VAR_4))
    goto buffer_done;
  }


  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3 != 0) {
   FUNC_3(VAR_5, sizeof(VAR_5),
      " Logical Link Speed: %d Mbps", VAR_3);
   if (FUNC_4(VAR_4, VAR_5, sizeof(VAR_4)) >=
       sizeof(VAR_4))
    goto buffer_done;
  }


  if (!FUNC_0(VAR_2)) {
   FUNC_3(VAR_5, sizeof(VAR_5), " PCI resettable");
   FUNC_4(VAR_4, VAR_5, sizeof(VAR_4));
  }
 }

buffer_done:
 return VAR_4;
}
