
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


union myrs_sgl {TYPE_3__* sge; } ;
struct TYPE_8__ {unsigned char lun; unsigned char target; unsigned char channel; } ;
struct TYPE_7__ {int dma_ctrl_to_host; int no_autosense; } ;
struct TYPE_10__ {int dma_size; union myrs_sgl dma_addr; int ioctl_opcode; TYPE_2__ pdev; TYPE_1__ control; int id; int opcode; } ;
union myrs_cmd_mbox {TYPE_4__ pdev_info; } ;
struct myrs_pdev_info {int dummy; } ;
struct myrs_cmdblk {unsigned char status; union myrs_cmd_mbox mbox; } ;
struct myrs_hba {TYPE_6__* pdev; int dcmd_mutex; TYPE_5__* host; struct myrs_cmdblk dcmd_blk; } ;
typedef int dma_addr_t ;
struct TYPE_12__ {int dev; } ;
struct TYPE_11__ {int shost_gendev; } ;
struct TYPE_9__ {int sge_count; int sge_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (int *,char*,unsigned char,unsigned char,unsigned char) ;
 int FUNC_1 (int *,struct myrs_pdev_info*,int,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct myrs_hba*,struct myrs_cmdblk*) ;
 int FUNC_7 (struct myrs_cmdblk*) ;

__attribute__((used)) static unsigned char FUNC_8(struct myrs_hba *VAR_5,
  unsigned char VAR_6, unsigned char VAR_7, unsigned char VAR_8,
  struct myrs_pdev_info *VAR_9)
{
 struct myrs_cmdblk *VAR_10 = &VAR_5->dcmd_blk;
 union myrs_cmd_mbox *VAR_11 = &VAR_10->mbox;
 dma_addr_t VAR_12;
 union myrs_sgl *VAR_13;
 unsigned char VAR_14;

 VAR_12 = FUNC_1(&VAR_5->pdev->dev, VAR_9,
     sizeof(struct myrs_pdev_info),
     VAR_0);
 if (FUNC_2(&VAR_5->pdev->dev, VAR_12))
  return VAR_4;

 FUNC_4(&VAR_5->dcmd_mutex);
 FUNC_7(VAR_10);
 VAR_11->pdev_info.opcode = VAR_1;
 VAR_11->pdev_info.id = VAR_2;
 VAR_11->pdev_info.control.dma_ctrl_to_host = 1;
 VAR_11->pdev_info.control.no_autosense = 1;
 VAR_11->pdev_info.dma_size = sizeof(struct myrs_pdev_info);
 VAR_11->pdev_info.pdev.lun = VAR_8;
 VAR_11->pdev_info.pdev.target = VAR_7;
 VAR_11->pdev_info.pdev.channel = VAR_6;
 VAR_11->pdev_info.ioctl_opcode = VAR_3;
 VAR_13 = &VAR_11->pdev_info.dma_addr;
 VAR_13->sge[0].sge_addr = VAR_12;
 VAR_13->sge[0].sge_count = VAR_11->pdev_info.dma_size;
 FUNC_0(&VAR_5->host->shost_gendev,
  "Sending GetPhysicalDeviceInfoValid for pdev %d:%d:%d\n",
  VAR_6, VAR_7, VAR_8);
 FUNC_6(VAR_5, VAR_10);
 VAR_14 = VAR_10->status;
 FUNC_5(&VAR_5->dcmd_mutex);
 FUNC_3(&VAR_5->pdev->dev, VAR_12,
    sizeof(struct myrs_pdev_info), VAR_0);
 return VAR_14;
}
