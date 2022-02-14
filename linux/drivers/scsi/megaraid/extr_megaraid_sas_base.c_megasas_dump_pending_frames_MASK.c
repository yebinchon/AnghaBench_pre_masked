
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union megasas_sgl {TYPE_2__* sge32; TYPE_1__* sge64; } ;
typedef int u32 ;
typedef int u16 ;
struct megasas_pthru_frame {int sge_count; int sense_buf_phys_addr_lo; int data_xfer_len; int cdb_len; int lun; int target_id; int cmd; union megasas_sgl sgl; } ;
struct megasas_io_frame {int sge_count; int sense_buf_phys_addr_lo; int start_lba_hi; int start_lba_lo; int target_id; int cmd; union megasas_sgl sgl; } ;
struct megasas_instance {int max_fw_cmds; TYPE_4__* host; TYPE_3__* pdev; struct megasas_cmd** cmd_list; int fw_outstanding; } ;
struct megasas_cmd {int sync_cmd; scalar_t__ frame_phys_addr; int frame_count; scalar_t__ frame; int scmd; } ;
struct TYPE_8__ {unsigned long host_no; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int phys_addr; int length; } ;
struct TYPE_5__ {int phys_addr; int length; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,unsigned long,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;

__attribute__((used)) static inline void
FUNC_5(struct megasas_instance *VAR_4)
{
 struct megasas_cmd *VAR_5;
 int VAR_6,VAR_7;
 union megasas_sgl *VAR_8;
 struct megasas_io_frame *VAR_9;
 struct megasas_pthru_frame *VAR_10;
 u32 VAR_11;
 u16 VAR_12 = VAR_4->max_fw_cmds;

 FUNC_1(&VAR_4->pdev->dev, "[%d]: Dumping Frame Phys Address of all pending cmds in FW\n",VAR_4->host->host_no);
 FUNC_1(&VAR_4->pdev->dev, "[%d]: Total OS Pending cmds : %d\n",VAR_4->host->host_no,FUNC_0(&VAR_4->fw_outstanding));
 if (VAR_0)
  FUNC_1(&VAR_4->pdev->dev, "[%d]: 64 bit SGLs were sent to FW\n",VAR_4->host->host_no);
 else
  FUNC_1(&VAR_4->pdev->dev, "[%d]: 32 bit SGLs were sent to FW\n",VAR_4->host->host_no);

 FUNC_1(&VAR_4->pdev->dev, "[%d]: Pending OS cmds in FW : \n",VAR_4->host->host_no);
 for (VAR_6 = 0; VAR_6 < VAR_12; VAR_6++) {
  VAR_5 = VAR_4->cmd_list[VAR_6];
  if (!VAR_5->scmd)
   continue;
  FUNC_1(&VAR_4->pdev->dev, "[%d]: Frame addr :0x%08lx : ",VAR_4->host->host_no,(unsigned long)VAR_5->frame_phys_addr);
  if (FUNC_4(VAR_5->scmd) == VAR_2) {
   VAR_9 = (struct megasas_io_frame *)VAR_5->frame;
   VAR_8 = &VAR_9->sgl;
   VAR_11 = VAR_9->sge_count;
   FUNC_1(&VAR_4->pdev->dev, "[%d]: frame count : 0x%x, Cmd : 0x%x, Tgt id : 0x%x,"
   " lba lo : 0x%x, lba_hi : 0x%x, sense_buf addr : 0x%x,sge count : 0x%x\n",
   VAR_4->host->host_no, VAR_5->frame_count, VAR_9->cmd, VAR_9->target_id,
   FUNC_2(VAR_9->start_lba_lo), FUNC_2(VAR_9->start_lba_hi),
   FUNC_2(VAR_9->sense_buf_phys_addr_lo), VAR_11);
  } else {
   VAR_10 = (struct megasas_pthru_frame *) VAR_5->frame;
   VAR_8 = &VAR_10->sgl;
   VAR_11 = VAR_10->sge_count;
   FUNC_1(&VAR_4->pdev->dev, "[%d]: frame count : 0x%x, Cmd : 0x%x, Tgt id : 0x%x, "
   "lun : 0x%x, cdb_len : 0x%x, data xfer len : 0x%x, sense_buf addr : 0x%x,sge count : 0x%x\n",
   VAR_4->host->host_no, VAR_5->frame_count, VAR_10->cmd, VAR_10->target_id,
   VAR_10->lun, VAR_10->cdb_len, FUNC_2(VAR_10->data_xfer_len),
   FUNC_2(VAR_10->sense_buf_phys_addr_lo), VAR_11);
  }
  if (VAR_3 & VAR_1) {
   for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++) {
    if (VAR_0)
     FUNC_1(&VAR_4->pdev->dev, "sgl len : 0x%x, sgl addr : 0x%llx\n",
      FUNC_2(VAR_8->sge64[VAR_7].length),
      FUNC_3(VAR_8->sge64[VAR_7].phys_addr));
    else
     FUNC_1(&VAR_4->pdev->dev, "sgl len : 0x%x, sgl addr : 0x%x\n",
      FUNC_2(VAR_8->sge32[VAR_7].length),
      FUNC_2(VAR_8->sge32[VAR_7].phys_addr));
   }
  }
 }
 FUNC_1(&VAR_4->pdev->dev, "[%d]: Pending Internal cmds in FW : \n",VAR_4->host->host_no);
 for (VAR_6 = 0; VAR_6 < VAR_12; VAR_6++) {

  VAR_5 = VAR_4->cmd_list[VAR_6];

  if (VAR_5->sync_cmd == 1)
   FUNC_1(&VAR_4->pdev->dev, "0x%08lx : ", (unsigned long)VAR_5->frame_phys_addr);
 }
 FUNC_1(&VAR_4->pdev->dev, "[%d]: Dumping Done\n\n",VAR_4->host->host_no);
}
