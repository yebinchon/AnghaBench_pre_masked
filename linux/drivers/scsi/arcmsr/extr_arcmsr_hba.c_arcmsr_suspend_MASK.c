
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pci_dev {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct AdapterControlBlock {int arcmsr_do_message_isr_bh; int refresh_timer; int eternal_timer; } ;
typedef int pm_message_t ;


 int FUNC_0 (struct AdapterControlBlock*) ;
 int FUNC_1 (struct AdapterControlBlock*) ;
 int FUNC_2 (struct pci_dev*,struct AdapterControlBlock*) ;
 int FUNC_3 (struct AdapterControlBlock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*) ;
 struct Scsi_Host* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,struct Scsi_Host*) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_12(struct pci_dev *VAR_1, pm_message_t VAR_2)
{
 uint32_t VAR_3;
 struct Scsi_Host *VAR_4 = FUNC_8(VAR_1);
 struct AdapterControlBlock *VAR_5 =
  (struct AdapterControlBlock *)VAR_4->hostdata;

 VAR_3 = FUNC_0(VAR_5);
 FUNC_2(VAR_1, VAR_5);
 FUNC_4(&VAR_5->eternal_timer);
 if (VAR_0)
  FUNC_4(&VAR_5->refresh_timer);
 FUNC_5(&VAR_5->arcmsr_do_message_isr_bh);
 FUNC_3(VAR_5);
 FUNC_1(VAR_5);
 FUNC_10(VAR_1, VAR_4);
 FUNC_9(VAR_1);
 FUNC_7(VAR_1);
 FUNC_11(VAR_1, FUNC_6(VAR_1, VAR_2));
 return 0;
}
