
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int device; } ;
struct jsm_board {int maxports; struct jsm_board** channels; struct jsm_board* ch_equeue; struct jsm_board* ch_rqueue; int re_map_membase; int irq; int iobase; } ;






 int FUNC_0 (int ,struct jsm_board*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct jsm_board*) ;
 int FUNC_3 (struct jsm_board*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct pci_dev*) ;
 struct jsm_board* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_0)
{
 struct jsm_board *VAR_1 = FUNC_6(VAR_0);
 int VAR_2 = 0;

 switch (VAR_0->device) {
 case 131:
 case 130:
 case 129:
 case 128:

  FUNC_4(0x0, VAR_1->iobase + 0x4c);
  break;
 default:
  break;
 }

 FUNC_2(VAR_1);

 FUNC_0(VAR_1->irq, VAR_1);
 FUNC_1(VAR_1->re_map_membase);


 for (VAR_2 = 0; VAR_2 < VAR_1->maxports; VAR_2++) {
  if (VAR_1->channels[VAR_2]) {
   FUNC_3(VAR_1->channels[VAR_2]->ch_rqueue);
   FUNC_3(VAR_1->channels[VAR_2]->ch_equeue);
   FUNC_3(VAR_1->channels[VAR_2]);
  }
 }

 FUNC_7(VAR_0);
 FUNC_5(VAR_0);
 FUNC_3(VAR_1);
}
