
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {unsigned int irq; int dev; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct AdapterCtlBlk {struct pci_dev* dev; struct Scsi_Host* scsi_host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_0 (struct AdapterCtlBlk*,unsigned long,unsigned int,unsigned int) ;
 int FUNC_1 (struct AdapterCtlBlk*) ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,unsigned long,...) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct pci_dev*) ;
 scalar_t__ FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 unsigned int FUNC_8 (struct pci_dev*,int ) ;
 unsigned long FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (struct pci_dev*,struct Scsi_Host*) ;
 int FUNC_11 (struct pci_dev*) ;
 scalar_t__ FUNC_12 (struct Scsi_Host*,int *) ;
 struct Scsi_Host* FUNC_13 (int *,int) ;
 int FUNC_14 (struct Scsi_Host*) ;
 int FUNC_15 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_16(struct pci_dev *VAR_6, const struct pci_device_id *VAR_7)
{
 struct Scsi_Host *VAR_8 = ((void*)0);
 struct AdapterCtlBlk *VAR_9 = ((void*)0);
 unsigned long VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;

 FUNC_3(VAR_0, "Init one instance (%s)\n", FUNC_7(VAR_6));
 FUNC_2();

 if (FUNC_6(VAR_6))
 {
  FUNC_4(VAR_3, "PCI Enable device failed.\n");
  return -VAR_1;
 }
 VAR_10 = FUNC_9(VAR_6, 0) & VAR_4;
 VAR_11 = FUNC_8(VAR_6, 0);
 VAR_12 = VAR_6->irq;
 FUNC_3(VAR_0, "IO_PORT=0x%04lx, IRQ=0x%x\n", VAR_10, VAR_6->irq);


 VAR_8 = FUNC_13(&VAR_5,
        sizeof(struct AdapterCtlBlk));
 if (!VAR_8) {
  FUNC_4(VAR_3, "scsi_host_alloc failed\n");
  goto fail;
 }
  VAR_9 = (struct AdapterCtlBlk*)VAR_8->hostdata;
  VAR_9->scsi_host = VAR_8;
  VAR_9->dev = VAR_6;


  if (FUNC_0(VAR_9, VAR_10, VAR_11, VAR_12)) {
  FUNC_4(VAR_3, "adapter init failed\n");
  goto fail;
 }

 FUNC_11(VAR_6);


 if (FUNC_12(VAR_8, &VAR_6->dev)) {
  FUNC_4(VAR_2, "scsi_add_host failed\n");
  goto fail;
 }
 FUNC_10(VAR_6, VAR_8);
 FUNC_15(VAR_8);

 return 0;

fail:
 if (VAR_9 != ((void*)0))
  FUNC_1(VAR_9);
 if (VAR_8 != ((void*)0))
  FUNC_14(VAR_8);
 FUNC_5(VAR_6);
 return -VAR_1;
}
