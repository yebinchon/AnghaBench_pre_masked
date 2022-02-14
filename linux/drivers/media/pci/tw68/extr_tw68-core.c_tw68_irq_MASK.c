
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tw68_dev {int pci_irqmask; int board_virqmask; int name; TYPE_1__* pci; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,int,int) ;
 int FUNC_1 (struct tw68_dev*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct tw68_dev *VAR_6 = VAR_5;
 u32 VAR_7, VAR_8;
 int VAR_9;

 VAR_7 = VAR_8 = FUNC_3(VAR_3) & VAR_6->pci_irqmask;

 if (0 == VAR_7)
  return VAR_1;
 for (VAR_9 = 0; VAR_9 < 10; VAR_9++) {
  if (VAR_7 & VAR_6->board_virqmask)
   FUNC_1(VAR_6, VAR_7);
  VAR_7 = FUNC_3(VAR_3) & VAR_6->pci_irqmask;
  if (0 == VAR_7)
   return VAR_0;
 }
 FUNC_0(&VAR_6->pci->dev, "%s: **** INTERRUPT NOT HANDLED - clearing mask (orig 0x%08x, cur 0x%08x)",
   VAR_6->name, VAR_8, FUNC_3(VAR_3));
 FUNC_0(&VAR_6->pci->dev, "%s: pci_irqmask 0x%08x; board_virqmask 0x%08x ****\n",
   VAR_6->name, VAR_6->pci_irqmask, VAR_6->board_virqmask);
 FUNC_2(VAR_2, VAR_6->pci_irqmask);
 return VAR_0;
}
