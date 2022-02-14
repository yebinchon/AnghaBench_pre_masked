
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union myrs_sgl {TYPE_3__* sge; } ;
struct TYPE_9__ {int dma_size; } ;
struct TYPE_6__ {int dma_ctrl_to_host; int no_autosense; } ;
struct TYPE_7__ {int dma_size; union myrs_sgl dma_addr; int ioctl_opcode; TYPE_1__ control; int id; int opcode; } ;
union myrs_cmd_mbox {TYPE_4__ ctlr_info; TYPE_2__ common; } ;
struct myrs_cmdblk {unsigned char status; union myrs_cmd_mbox mbox; } ;
struct myrs_hba {TYPE_5__* host; int fwstat_addr; struct myrs_cmdblk mcmd_blk; } ;
struct myrs_fwstat {int dummy; } ;
struct TYPE_10__ {int shost_gendev; } ;
struct TYPE_8__ {int sge_count; int sge_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct myrs_hba*,struct myrs_cmdblk*) ;
 int FUNC_2 (struct myrs_cmdblk*) ;

__attribute__((used)) static unsigned char FUNC_3(struct myrs_hba *VAR_3)
{
 struct myrs_cmdblk *VAR_4 = &VAR_3->mcmd_blk;
 union myrs_cmd_mbox *VAR_5 = &VAR_4->mbox;
 union myrs_sgl *VAR_6;
 unsigned char VAR_7 = VAR_4->status;

 FUNC_2(VAR_4);
 VAR_5->common.opcode = VAR_0;
 VAR_5->common.id = VAR_2;
 VAR_5->common.control.dma_ctrl_to_host = 1;
 VAR_5->common.control.no_autosense = 1;
 VAR_5->common.dma_size = sizeof(struct myrs_fwstat);
 VAR_5->common.ioctl_opcode = VAR_1;
 VAR_6 = &VAR_5->common.dma_addr;
 VAR_6->sge[0].sge_addr = VAR_3->fwstat_addr;
 VAR_6->sge[0].sge_count = VAR_5->ctlr_info.dma_size;
 FUNC_0(&VAR_3->host->shost_gendev, "Sending GetHealthStatus\n");
 FUNC_1(VAR_3, VAR_4);
 VAR_7 = VAR_4->status;

 return VAR_7;
}
