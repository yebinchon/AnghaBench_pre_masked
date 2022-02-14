
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union myrs_sgl {TYPE_1__* sge; } ;
struct TYPE_4__ {int dma_size; unsigned int evnum_upper; unsigned int evnum_lower; union myrs_sgl dma_addr; int ioctl_opcode; scalar_t__ ctlr_num; int opcode; } ;
union myrs_cmd_mbox {TYPE_2__ get_event; } ;
struct pci_dev {int dev; } ;
struct myrs_cmdblk {unsigned char status; union myrs_cmd_mbox mbox; } ;
struct myrs_hba {struct myrs_cmdblk mcmd_blk; struct pci_dev* pdev; } ;
struct myrs_event {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int sge_count; int sge_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (int *,struct myrs_event*,int,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int,int ) ;
 int FUNC_3 (struct myrs_hba*,struct myrs_cmdblk*) ;

__attribute__((used)) static unsigned char FUNC_4(struct myrs_hba *VAR_4,
  unsigned int VAR_5, struct myrs_event *VAR_6)
{
 struct pci_dev *VAR_7 = VAR_4->pdev;
 dma_addr_t VAR_8;
 struct myrs_cmdblk *VAR_9 = &VAR_4->mcmd_blk;
 union myrs_cmd_mbox *VAR_10 = &VAR_9->mbox;
 union myrs_sgl *VAR_11;
 unsigned char VAR_12;

 VAR_8 = FUNC_0(&VAR_7->dev, VAR_6,
        sizeof(struct myrs_event), VAR_0);
 if (FUNC_1(&VAR_7->dev, VAR_8))
  return VAR_3;

 VAR_10->get_event.opcode = VAR_1;
 VAR_10->get_event.dma_size = sizeof(struct myrs_event);
 VAR_10->get_event.evnum_upper = VAR_5 >> 16;
 VAR_10->get_event.ctlr_num = 0;
 VAR_10->get_event.ioctl_opcode = VAR_2;
 VAR_10->get_event.evnum_lower = VAR_5 & 0xFFFF;
 VAR_11 = &VAR_10->get_event.dma_addr;
 VAR_11->sge[0].sge_addr = VAR_8;
 VAR_11->sge[0].sge_count = VAR_10->get_event.dma_size;
 FUNC_3(VAR_4, VAR_9);
 VAR_12 = VAR_9->status;
 FUNC_2(&VAR_7->dev, VAR_8,
    sizeof(struct myrs_event), VAR_0);

 return VAR_12;
}
