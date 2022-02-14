
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct aha1740_hostdata {scalar_t__ translation; TYPE_1__* edev; } ;
struct Scsi_Host {int irq; int io_port; } ;
struct TYPE_2__ {int slot; } ;


 struct aha1740_hostdata* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ,int ,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, struct Scsi_Host *VAR_1)
{
 struct aha1740_hostdata *VAR_2 = FUNC_0(VAR_1);
 FUNC_1(VAR_0, "aha174x at IO:%lx, IRQ %d, SLOT %d.\n"
        "Extended translation %sabled.\n",
        VAR_1->io_port, VAR_1->irq, VAR_2->edev->slot,
        VAR_2->translation ? "en" : "dis");
 return 0;
}
