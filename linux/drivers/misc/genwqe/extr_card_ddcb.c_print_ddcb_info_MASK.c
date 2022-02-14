
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct genwqe_dev {int print_lock; int card_idx; struct pci_dev* pci_dev; } ;
struct ddcb_queue {int ddcb_act; int ddcb_max; struct ddcb* ddcb_vaddr; int ddcb_next; } ;
struct ddcb {int cmd; int priv_64; int shi; int hsi; int seqnum_16; int retc_16; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,char,int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *,char*,int ,int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct genwqe_dev *VAR_0, struct ddcb_queue *VAR_1)
{
 int VAR_2;
 struct ddcb *VAR_3;
 unsigned long VAR_4;
 struct pci_dev *VAR_5 = VAR_0->pci_dev;

 FUNC_4(&VAR_0->print_lock, VAR_4);

 FUNC_3(&VAR_5->dev,
   "DDCB list for card #%d (ddcb_act=%d / ddcb_next=%d):\n",
   VAR_0->card_idx, VAR_1->ddcb_act, VAR_1->ddcb_next);

 VAR_3 = VAR_1->ddcb_vaddr;
 for (VAR_2 = 0; VAR_2 < VAR_1->ddcb_max; VAR_2++) {
  FUNC_2(&VAR_5->dev,
   "  %c %-3d: RETC=%03x SEQ=%04x HSI=%02X SHI=%02x PRIV=%06llx CMD=%03x\n",
   VAR_2 == VAR_1->ddcb_act ? '>' : ' ',
   VAR_2,
   FUNC_0(VAR_3->retc_16),
   FUNC_0(VAR_3->seqnum_16),
   VAR_3->hsi,
   VAR_3->shi,
   FUNC_1(VAR_3->priv_64),
   VAR_3->cmd);
  VAR_3++;
 }
 FUNC_5(&VAR_0->print_lock, VAR_4);
}
