
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opqual; unsigned int ev_seq; int addr; int optype; int opcode; int id; } ;
union myrb_cmd_mbox {TYPE_1__ type3E; } ;
struct scsi_sense_hdr {scalar_t__ sense_key; int asc; size_t ascq; } ;
struct myrb_log_entry {unsigned int seq_num; int target; int channel; int sense; } ;
struct myrb_cmdblk {union myrb_cmd_mbox mbox; } ;
struct myrb_hba {TYPE_2__* pdev; int host; struct myrb_cmdblk mcmd_blk; } ;
typedef int sshdr ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned short VAR_6 ;
 scalar_t__ VAR_7 ;
 struct myrb_log_entry* FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (int *,int,struct myrb_log_entry*,int ) ;
 int FUNC_3 (struct scsi_sense_hdr*,int ,int) ;
 int * VAR_8 ;
 unsigned short FUNC_4 (struct myrb_hba*,struct myrb_cmdblk*) ;
 int FUNC_5 (struct myrb_cmdblk*) ;
 int FUNC_6 (int ,int,struct scsi_sense_hdr*) ;
 int FUNC_7 (int ,int ,char*,unsigned int,unsigned short,...) ;

__attribute__((used)) static void FUNC_8(struct myrb_hba *VAR_9, unsigned int VAR_10)
{
 struct myrb_cmdblk *VAR_11 = &VAR_9->mcmd_blk;
 union myrb_cmd_mbox *VAR_12 = &VAR_11->mbox;
 struct myrb_log_entry *VAR_13;
 dma_addr_t VAR_14;
 unsigned short VAR_15;

 VAR_13 = FUNC_1(&VAR_9->pdev->dev,
        sizeof(struct myrb_log_entry),
        &VAR_14, VAR_1);
 if (!VAR_13)
  return;

 FUNC_5(VAR_11);
 VAR_12->type3E.id = VAR_5;
 VAR_12->type3E.opcode = VAR_4;
 VAR_12->type3E.optype = VAR_0;
 VAR_12->type3E.opqual = 1;
 VAR_12->type3E.ev_seq = VAR_10;
 VAR_12->type3E.addr = VAR_14;
 VAR_15 = FUNC_4(VAR_9, VAR_11);
 if (VAR_15 != VAR_6)
  FUNC_7(VAR_3, VAR_9->host,
        "Failed to get event log %d, status %04x\n",
        VAR_10, VAR_15);

 else if (VAR_13->seq_num == VAR_10) {
  struct scsi_sense_hdr VAR_16;

  FUNC_3(&VAR_16, 0, sizeof(VAR_16));
  FUNC_6(VAR_13->sense, 32, &VAR_16);

  if (VAR_16.sense_key == VAR_7 &&
      VAR_16.asc == 0x80 &&
      VAR_16.ascq < FUNC_0(VAR_8))
   FUNC_7(VAR_2, VAR_9->host,
         "Physical drive %d:%d: %s\n",
         VAR_13->channel, VAR_13->target,
         VAR_8[VAR_16.ascq]);
  else
   FUNC_7(VAR_2, VAR_9->host,
         "Physical drive %d:%d: Sense: %X/%02X/%02X\n",
         VAR_13->channel, VAR_13->target,
         VAR_16.sense_key, VAR_16.asc, VAR_16.ascq);
 }

 FUNC_2(&VAR_9->pdev->dev, sizeof(struct myrb_log_entry),
     VAR_13, VAR_14);
}
