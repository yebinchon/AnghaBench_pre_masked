
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_status_le {int dummy; } ;
struct sky2_hw {int ports; int flags; int st_size; int regs; int * dev; int st_dma; int st_le; int napi; int restart_work; int watchdog_timer; } ;
struct pci_dev {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct sky2_hw*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sky2_hw*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int,int ,int ) ;
 struct sky2_hw* FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct sky2_hw*) ;
 int FUNC_13 (struct sky2_hw*,int ) ;
 int FUNC_14 (struct sky2_hw*,int ) ;
 int FUNC_15 (struct sky2_hw*,int ,int ) ;
 int FUNC_16 (struct sky2_hw*,int ,int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(struct pci_dev *VAR_4)
{
 struct sky2_hw *VAR_5 = FUNC_10(VAR_4);
 int VAR_6;

 if (!VAR_5)
  return;

 FUNC_1(&VAR_5->watchdog_timer);
 FUNC_0(&VAR_5->restart_work);

 for (VAR_6 = VAR_5->ports-1; VAR_6 >= 0; --VAR_6)
  FUNC_17(VAR_5->dev[VAR_6]);

 FUNC_15(VAR_5, VAR_1, 0);
 FUNC_13(VAR_5, VAR_1);

 FUNC_12(VAR_5);

 FUNC_16(VAR_5, VAR_0, VAR_2);
 FUNC_14(VAR_5, VAR_0);

 if (VAR_5->ports > 1) {
  FUNC_6(&VAR_5->napi);
  FUNC_2(VAR_4->irq, VAR_5);
 }

 if (VAR_5->flags & VAR_3)
  FUNC_8(VAR_4);
 FUNC_9(VAR_4, VAR_5->st_size * sizeof(struct sky2_status_le),
       VAR_5->st_le, VAR_5->st_dma);
 FUNC_11(VAR_4);
 FUNC_7(VAR_4);

 for (VAR_6 = VAR_5->ports-1; VAR_6 >= 0; --VAR_6)
  FUNC_3(VAR_5->dev[VAR_6]);

 FUNC_4(VAR_5->regs);
 FUNC_5(VAR_5);
}
