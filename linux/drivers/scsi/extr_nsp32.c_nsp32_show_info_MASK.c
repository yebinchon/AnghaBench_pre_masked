
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct Scsi_Host {int host_no; unsigned int io_port; int this_id; int sg_tablesize; int base; scalar_t__ n_io_port; int irq; scalar_t__ hostdata; } ;
struct TYPE_5__ {TYPE_3__* target; int Lock; int CurrentSC; TYPE_1__* pci_devid; scalar_t__ MmioLength; } ;
typedef TYPE_2__ nsp32_hw_data ;
struct TYPE_6__ {scalar_t__ sync_flag; int period; scalar_t__ offset; } ;
struct TYPE_4__ {long driver_data; } ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned char FUNC_1 (unsigned int,int ) ;
 int * VAR_7 ;
 int FUNC_2 (unsigned int,int ) ;
 int VAR_8 ;
 int FUNC_3 (struct seq_file*,char*,...) ;
 int FUNC_4 (struct seq_file*,char) ;
 int FUNC_5 (struct seq_file*,char*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_9, struct Scsi_Host *VAR_10)
{
 unsigned long VAR_11;
 nsp32_hw_data *VAR_12;
 int VAR_13;
 unsigned int VAR_14;
 unsigned char VAR_15;
 int VAR_16, VAR_17;
 long VAR_18;

 VAR_13 = VAR_10->host_no;
 VAR_12 = (nsp32_hw_data *)VAR_10->hostdata;
 VAR_14 = VAR_10->io_port;

 FUNC_5(VAR_9, "NinjaSCSI-32 status\n\n");
 FUNC_3(VAR_9, "Driver version:        %s, $Revision: 1.33 $\n", VAR_8);
 FUNC_3(VAR_9, "SCSI host No.:         %d\n", VAR_13);
 FUNC_3(VAR_9, "IRQ:                   %d\n", VAR_10->irq);
 FUNC_3(VAR_9, "IO:                    0x%lx-0x%lx\n", VAR_10->io_port, VAR_10->io_port + VAR_10->n_io_port - 1);
 FUNC_3(VAR_9, "MMIO(virtual address): 0x%lx-0x%lx\n", VAR_10->base, VAR_10->base + VAR_12->MmioLength - 1);
 FUNC_3(VAR_9, "sg_tablesize:          %d\n", VAR_10->sg_tablesize);
 FUNC_3(VAR_9, "Chip revision:         0x%x\n", (FUNC_2(VAR_14, VAR_2) >> 8) & 0xff);

 VAR_15 = FUNC_1(VAR_14, VAR_1);
 VAR_18 = VAR_12->pci_devid->driver_data;




 FUNC_3(VAR_9, "OEM:                   %ld, %s\n", (VAR_15 & (VAR_3|VAR_4)), VAR_7[VAR_18]);

 FUNC_6(&(VAR_12->Lock), VAR_11);
 FUNC_3(VAR_9, "CurrentSC:             0x%p\n\n", VAR_12->CurrentSC);
 FUNC_7(&(VAR_12->Lock), VAR_11);


 FUNC_5(VAR_9, "SDTR status\n");
 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_12->target); VAR_16++) {

  FUNC_3(VAR_9, "id %d: ", VAR_16);

  if (VAR_16 == VAR_10->this_id) {
   FUNC_5(VAR_9, "----- NinjaSCSI-32 host adapter\n");
   continue;
  }

  if (VAR_12->target[VAR_16].sync_flag == VAR_6) {
   if (VAR_12->target[VAR_16].period == 0 &&
       VAR_12->target[VAR_16].offset == VAR_0 ) {
    FUNC_5(VAR_9, "async");
   } else {
    FUNC_5(VAR_9, " sync");
   }
  } else {
   FUNC_5(VAR_9, " none");
  }

  if (VAR_12->target[VAR_16].period != 0) {

   VAR_17 = 1000000 / (VAR_12->target[VAR_16].period * 4);

   FUNC_3(VAR_9, " transfer %d.%dMB/s, offset %d",
    VAR_17 / 1000,
    VAR_17 % 1000,
    VAR_12->target[VAR_16].offset
    );
  }
  FUNC_4(VAR_9, '\n');
 }
 return 0;
}
