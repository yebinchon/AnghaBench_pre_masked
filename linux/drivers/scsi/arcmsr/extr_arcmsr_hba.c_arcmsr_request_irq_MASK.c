
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct AdapterControlBlock {int vector_count; TYPE_1__* host; } ;
struct TYPE_2__ {int host_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,struct AdapterControlBlock*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct pci_dev*,int,int,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,unsigned long,char*,struct AdapterControlBlock*) ;

__attribute__((used)) static int
FUNC_8(struct pci_dev *VAR_10, struct AdapterControlBlock *VAR_11)
{
 unsigned long VAR_12;
 int VAR_13, VAR_14;

 if (VAR_9 == 0)
  goto msi_int0;
 VAR_13 = FUNC_2(VAR_10, 1, VAR_0,
   VAR_5);
 if (VAR_13 > 0) {
  FUNC_5("arcmsr%d: msi-x enabled\n", VAR_11->host->host_no);
  VAR_12 = 0;
 } else {
msi_int0:
  if (VAR_8 == 1) {
   VAR_13 = FUNC_2(VAR_10, 1, 1, VAR_4);
   if (VAR_13 == 1) {
    FUNC_0(&VAR_10->dev, "msi enabled\n");
    goto msi_int1;
   }
  }
  VAR_13 = FUNC_2(VAR_10, 1, 1, VAR_3);
  if (VAR_13 < 1)
   return VAR_1;
msi_int1:
  VAR_12 = VAR_2;
 }

 VAR_11->vector_count = VAR_13;
 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  if (FUNC_7(FUNC_4(VAR_10, VAR_14), VAR_7,
    VAR_12, "arcmsr", VAR_11)) {
   FUNC_6("arcmsr%d: request_irq =%d failed!\n",
    VAR_11->host->host_no, FUNC_4(VAR_10, VAR_14));
   goto out_free_irq;
  }
 }

 return VAR_6;
out_free_irq:
 while (--VAR_14 >= 0)
  FUNC_1(FUNC_4(VAR_10, VAR_14), VAR_11);
 FUNC_3(VAR_10);
 return VAR_1;
}
