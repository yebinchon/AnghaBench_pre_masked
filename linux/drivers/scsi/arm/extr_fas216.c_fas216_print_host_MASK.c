
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_4__ {int dma; int irq; int io_base; int type; } ;
struct TYPE_5__ {TYPE_1__ scsi; } ;
typedef TYPE_2__ FAS216_Info ;


 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,int ) ;

void FUNC_1(FAS216_Info *VAR_0, struct seq_file *VAR_1)
{
 FUNC_0(VAR_1,
   "\n"
   "Chip    : %s\n"
   " Address: 0x%p\n"
   " IRQ    : %d\n"
   " DMA    : %d\n",
   VAR_0->scsi.type, VAR_0->scsi.io_base,
   VAR_0->scsi.irq, VAR_0->scsi.dma);
}
