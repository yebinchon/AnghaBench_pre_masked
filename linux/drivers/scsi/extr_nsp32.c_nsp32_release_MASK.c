
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct Scsi_Host {scalar_t__ n_io_port; scalar_t__ io_port; scalar_t__ irq; scalar_t__ hostdata; } ;
struct TYPE_5__ {scalar_t__ MmioAddress; int sg_paddr; scalar_t__ sg_list; TYPE_1__* Pci; int auto_paddr; scalar_t__ autoparam; } ;
typedef TYPE_2__ nsp32_hw_data ;
typedef int nsp32_autoparam ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct Scsi_Host *VAR_1)
{
 nsp32_hw_data *VAR_2 = (nsp32_hw_data *)VAR_1->hostdata;

 if (VAR_2->autoparam) {
  FUNC_0(&VAR_2->Pci->dev, sizeof(nsp32_autoparam),
        VAR_2->autoparam, VAR_2->auto_paddr);
 }

 if (VAR_2->sg_list) {
  FUNC_0(&VAR_2->Pci->dev, VAR_0,
        VAR_2->sg_list, VAR_2->sg_paddr);
 }

 if (VAR_1->irq) {
  FUNC_1(VAR_1->irq, VAR_2);
 }

 if (VAR_1->io_port && VAR_1->n_io_port) {
  FUNC_3(VAR_1->io_port, VAR_1->n_io_port);
 }

 if (VAR_2->MmioAddress) {
  FUNC_2(VAR_2->MmioAddress);
 }

 return 0;
}
