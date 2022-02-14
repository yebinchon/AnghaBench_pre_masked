
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct niu_parent {int num_ports; int* rxchan_per_port; int* txchan_per_port; } ;
struct niu {int port; int num_ldg; TYPE_1__* ldg; int flags; struct pci_dev* pdev; struct niu_parent* parent; } ;
struct msix_entry {int entry; scalar_t__ vector; } ;
struct TYPE_2__ {scalar_t__ irq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pci_dev*,struct msix_entry*,int,int) ;

__attribute__((used)) static void FUNC_2(struct niu *VAR_2, u8 *VAR_3)
{
 struct msix_entry VAR_4[VAR_1];
 struct niu_parent *VAR_5 = VAR_2->parent;
 struct pci_dev *VAR_6 = VAR_2->pdev;
 int VAR_7, VAR_8;
 u8 VAR_9;

 VAR_9 = (VAR_1 / VAR_5->num_ports) * VAR_2->port;
 for (VAR_7 = 0; VAR_7 < (VAR_1 / VAR_5->num_ports); VAR_7++)
  VAR_3[VAR_7] = VAR_9 + VAR_7;

 VAR_8 = (VAR_5->rxchan_per_port[VAR_2->port] +
      VAR_5->txchan_per_port[VAR_2->port] +
      (VAR_2->port == 0 ? 3 : 1));
 FUNC_0(VAR_8 > (VAR_1 / VAR_5->num_ports));

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_4[VAR_7].vector = 0;
  VAR_4[VAR_7].entry = VAR_7;
 }

 VAR_8 = FUNC_1(VAR_6, VAR_4, 1, VAR_8);
 if (VAR_8 < 0) {
  VAR_2->flags &= ~VAR_0;
  return;
 }

 VAR_2->flags |= VAR_0;
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  VAR_2->ldg[VAR_7].irq = VAR_4[VAR_7].vector;
 VAR_2->num_ldg = VAR_8;
}
