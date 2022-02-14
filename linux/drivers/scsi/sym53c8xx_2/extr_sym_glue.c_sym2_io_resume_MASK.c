
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_data {scalar_t__ io_reset; } ;
struct pci_dev {int dummy; } ;
struct Scsi_Host {int host_lock; } ;


 int FUNC_0 (scalar_t__) ;
 struct Scsi_Host* FUNC_1 (struct pci_dev*) ;
 struct sym_data* FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_1(VAR_0);
 struct sym_data *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(VAR_1->host_lock);
 if (VAR_2->io_reset)
  FUNC_0(VAR_2->io_reset);
 FUNC_4(VAR_1->host_lock);
}
