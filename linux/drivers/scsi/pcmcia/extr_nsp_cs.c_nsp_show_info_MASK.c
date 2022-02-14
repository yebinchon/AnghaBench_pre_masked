
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct Scsi_Host {int host_no; int this_id; int sg_tablesize; int base; scalar_t__ n_io_port; int io_port; int irq; scalar_t__ hostdata; } ;
struct TYPE_3__ {TYPE_2__* Sync; int Lock; int CurrentSC; scalar_t__ MmioLength; } ;
typedef TYPE_1__ nsp_hw_data ;
struct TYPE_4__ {int SyncNegotiation; int SyncPeriod; int SyncOffset; } ;


 int FUNC_0 (TYPE_2__*) ;






 int VAR_0 ;
 int FUNC_1 (struct seq_file*,char*,int,...) ;
 int FUNC_2 (struct seq_file*,char) ;
 int FUNC_3 (struct seq_file*,char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_1, struct Scsi_Host *VAR_2)
{
 int VAR_3;
 int VAR_4;
 unsigned long VAR_5;
 nsp_hw_data *VAR_6;
 int VAR_7;

 VAR_7 = VAR_2->host_no;
 VAR_6 = (nsp_hw_data *)VAR_2->hostdata;

 FUNC_3(VAR_1, "NinjaSCSI status\n\n"
  "Driver version:        $Revision: 1.23 $\n");
 FUNC_1(VAR_1, "SCSI host No.:         %d\n", VAR_7);
 FUNC_1(VAR_1, "IRQ:                   %d\n", VAR_2->irq);
 FUNC_1(VAR_1, "IO:                    0x%lx-0x%lx\n", VAR_2->io_port, VAR_2->io_port + VAR_2->n_io_port - 1);
 FUNC_1(VAR_1, "MMIO(virtual address): 0x%lx-0x%lx\n", VAR_2->base, VAR_2->base + VAR_6->MmioLength - 1);
 FUNC_1(VAR_1, "sg_tablesize:          %d\n", VAR_2->sg_tablesize);

 FUNC_3(VAR_1, "burst transfer mode:   ");
 switch (VAR_0) {
 case 132:
  FUNC_3(VAR_1, "io8");
  break;
 case 133:
  FUNC_3(VAR_1, "io32");
  break;
 case 131:
  FUNC_3(VAR_1, "mem32");
  break;
 default:
  FUNC_3(VAR_1, "???");
  break;
 }
 FUNC_2(VAR_1, '\n');


 FUNC_4(&(VAR_6->Lock), VAR_5);
 FUNC_1(VAR_1, "CurrentSC:             0x%p\n\n", VAR_6->CurrentSC);
 FUNC_5(&(VAR_6->Lock), VAR_5);

 FUNC_3(VAR_1, "SDTR status\n");
 for(VAR_3 = 0; VAR_3 < FUNC_0(VAR_6->Sync); VAR_3++) {

  FUNC_1(VAR_1, "id %d: ", VAR_3);

  if (VAR_3 == VAR_2->this_id) {
   FUNC_3(VAR_1, "----- NinjaSCSI-3 host adapter\n");
   continue;
  }

  switch(VAR_6->Sync[VAR_3].SyncNegotiation) {
  case 128:
   FUNC_3(VAR_1, " sync");
   break;
  case 130:
   FUNC_3(VAR_1, "async");
   break;
  case 129:
   FUNC_3(VAR_1, " none");
   break;
  default:
   FUNC_3(VAR_1, "?????");
   break;
  }

  if (VAR_6->Sync[VAR_3].SyncPeriod != 0) {
   VAR_4 = 1000000 / (VAR_6->Sync[VAR_3].SyncPeriod * 4);

   FUNC_1(VAR_1, " transfer %d.%dMB/s, offset %d",
    VAR_4 / 1000,
    VAR_4 % 1000,
    VAR_6->Sync[VAR_3].SyncOffset
    );
  }
  FUNC_2(VAR_1, '\n');
 }
 return 0;
}
