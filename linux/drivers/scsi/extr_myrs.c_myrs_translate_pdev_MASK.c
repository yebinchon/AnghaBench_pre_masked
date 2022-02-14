
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union myrs_sgl {TYPE_3__* sge; } ;
struct TYPE_6__ {unsigned char target; unsigned char channel; unsigned char lun; } ;
struct TYPE_5__ {int dma_ctrl_to_host; int no_autosense; } ;
struct TYPE_8__ {int dma_size; union myrs_sgl dma_addr; int ioctl_opcode; TYPE_2__ pdev; TYPE_1__ control; int opcode; } ;
union myrs_cmd_mbox {TYPE_4__ pdev_info; } ;
struct pci_dev {int dev; } ;
struct myrs_cmdblk {unsigned char status; union myrs_cmd_mbox mbox; } ;
struct myrs_hba {int dcmd_mutex; struct myrs_cmdblk dcmd_blk; struct pci_dev* pdev; } ;
struct myrs_devmap {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_7__ {int sge_count; int sge_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (int *,struct myrs_devmap*,int,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int,int ) ;
 int FUNC_3 (struct myrs_devmap*,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct myrs_hba*,struct myrs_cmdblk*) ;

__attribute__((used)) static unsigned char FUNC_7(struct myrs_hba *VAR_4,
  unsigned char VAR_5, unsigned char VAR_6, unsigned char VAR_7,
  struct myrs_devmap *VAR_8)
{
 struct pci_dev *VAR_9 = VAR_4->pdev;
 dma_addr_t VAR_10;
 struct myrs_cmdblk *VAR_11;
 union myrs_cmd_mbox *VAR_12;
 union myrs_sgl *VAR_13;
 unsigned char VAR_14;

 FUNC_3(VAR_8, 0x0, sizeof(struct myrs_devmap));
 VAR_10 = FUNC_0(&VAR_9->dev, VAR_8,
         sizeof(struct myrs_devmap),
         VAR_0);
 if (FUNC_1(&VAR_9->dev, VAR_10))
  return VAR_3;

 FUNC_4(&VAR_4->dcmd_mutex);
 VAR_11 = &VAR_4->dcmd_blk;
 VAR_12 = &VAR_11->mbox;
 VAR_12->pdev_info.opcode = VAR_1;
 VAR_12->pdev_info.control.dma_ctrl_to_host = 1;
 VAR_12->pdev_info.control.no_autosense = 1;
 VAR_12->pdev_info.dma_size = sizeof(struct myrs_devmap);
 VAR_12->pdev_info.pdev.target = VAR_6;
 VAR_12->pdev_info.pdev.channel = VAR_5;
 VAR_12->pdev_info.pdev.lun = VAR_7;
 VAR_12->pdev_info.ioctl_opcode = VAR_2;
 VAR_13 = &VAR_12->pdev_info.dma_addr;
 VAR_13->sge[0].sge_addr = VAR_10;
 VAR_13->sge[0].sge_count = VAR_12->pdev_info.dma_size;

 FUNC_6(VAR_4, VAR_11);
 VAR_14 = VAR_11->status;
 FUNC_5(&VAR_4->dcmd_mutex);
 FUNC_2(&VAR_9->dev, VAR_10,
    sizeof(struct myrs_devmap), VAR_0);
 return VAR_14;
}
