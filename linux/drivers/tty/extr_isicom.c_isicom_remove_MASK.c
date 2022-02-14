
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct isi_board {unsigned int port_count; int index; scalar_t__ base; int irq; TYPE_1__* ports; } ;
struct TYPE_2__ {int port; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct isi_board*) ;
 int VAR_1 ;
 int FUNC_1 (struct pci_dev*) ;
 struct isi_board* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_2)
{
 struct isi_board *VAR_3 = FUNC_2(VAR_2);
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->port_count; VAR_4++) {
  FUNC_5(VAR_1, VAR_3->index * 16 + VAR_4);
  FUNC_4(&VAR_3->ports[VAR_4].port);
 }

 FUNC_0(VAR_3->irq, VAR_3);
 FUNC_3(VAR_2, 3);
 VAR_3->base = 0;
 VAR_0--;
 FUNC_1(VAR_2);
}
