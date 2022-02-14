
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {int max_lun; int this_id; int irq; TYPE_1__* hostt; int sg_tablesize; int cmd_per_lun; int can_queue; int host_no; } ;
struct NCR5380_hostdata {int id_mask; int id_higher_mask; int flags; unsigned long poll_loops; int info; int base; int io_port; int work_q; int main_task; int disconnected; int unissued; int autosense; int * sensing; int * connected; int lock; scalar_t__ dma_len; scalar_t__* busy; struct Scsi_Host* host; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (char*,int,int,int ) ;
 int FUNC_5 () ;
 int VAR_15 ;
 scalar_t__ FUNC_6 (int) ;
 struct NCR5380_hostdata* FUNC_7 (struct Scsi_Host*) ;
 int FUNC_8 (int ,int,char*,char*,int,int ,int ,int ,int ,int ,int,char*,char*,char*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (unsigned long) ;

__attribute__((used)) static int FUNC_11(struct Scsi_Host *VAR_16, int VAR_17)
{
 struct NCR5380_hostdata *VAR_18 = FUNC_7(VAR_16);
 int VAR_19;
 unsigned long VAR_20;
 unsigned long VAR_21;

 VAR_16->max_lun = 7;

 VAR_18->host = VAR_16;
 VAR_18->id_mask = 1 << VAR_16->this_id;
 VAR_18->id_higher_mask = 0;
 for (VAR_19 = VAR_18->id_mask; VAR_19 <= 0x80; VAR_19 <<= 1)
  if (VAR_19 > VAR_18->id_mask)
   VAR_18->id_higher_mask |= VAR_19;
 for (VAR_19 = 0; VAR_19 < 8; ++VAR_19)
  VAR_18->busy[VAR_19] = 0;
 VAR_18->dma_len = 0;

 FUNC_9(&VAR_18->lock);
 VAR_18->connected = ((void*)0);
 VAR_18->sensing = ((void*)0);
 FUNC_0(&VAR_18->autosense);
 FUNC_0(&VAR_18->unissued);
 FUNC_0(&VAR_18->disconnected);

 VAR_18->flags = VAR_17;

 FUNC_1(&VAR_18->main_task, VAR_9);
 VAR_18->work_q = FUNC_4("ncr5380_%d",
                         VAR_14 | VAR_13,
                         1, VAR_16->host_no);
 if (!VAR_18->work_q)
  return -VAR_0;

 FUNC_8(VAR_18->info, sizeof(VAR_18->info),
  "%s, irq %d, io_port 0x%lx, base 0x%lx, can_queue %d, cmd_per_lun %d, sg_tablesize %d, this_id %d, flags { %s%s%s}",
  VAR_16->hostt->name, VAR_16->irq, VAR_18->io_port,
  VAR_18->base, VAR_16->can_queue, VAR_16->cmd_per_lun,
  VAR_16->sg_tablesize, VAR_16->this_id,
  VAR_18->flags & VAR_1 ? "DMA_FIXUP " : "",
  VAR_18->flags & VAR_2 ? "NO_PSEUDO_DMA " : "",
  VAR_18->flags & VAR_3 ? "TOSHIBA_DELAY " : "");

 FUNC_3(VAR_5, VAR_4);
 FUNC_3(VAR_6, VAR_7);
 FUNC_3(VAR_12, 0);
 FUNC_3(VAR_10, 0);


 VAR_19 = 0;
 VAR_20 = VAR_15 + 1;
 do {
  FUNC_5();
 } while (FUNC_10(VAR_20));
 VAR_20 += FUNC_6(256);
 do {
  FUNC_2(VAR_11);
  ++VAR_19;
  FUNC_5();
 } while (FUNC_10(VAR_20));
 VAR_21 = VAR_19 / 256;
 VAR_18->poll_loops = VAR_8 * VAR_21 / 2;

 return 0;
}
