
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_esp_priv {struct esp* esp; } ;
struct pci_dev {int dev; int irq; } ;
struct esp {int host; int regs; int command_block_dma; int command_block; } ;


 int FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (int ,struct esp*) ;
 int FUNC_2 (struct pci_esp_priv*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct pci_esp_priv* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int *) ;
 int FUNC_8 (struct esp*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct pci_dev *VAR_0)
{
 struct pci_esp_priv *VAR_1 = FUNC_4(VAR_0);
 struct esp *VAR_2 = VAR_1->esp;

 FUNC_8(VAR_2);
 FUNC_1(VAR_0->irq, VAR_2);
 FUNC_7(VAR_0, ((void*)0));
 FUNC_0(&VAR_0->dev, 16, VAR_2->command_block,
     VAR_2->command_block_dma);
 FUNC_5(VAR_0, VAR_2->regs);
 FUNC_6(VAR_0);
 FUNC_3(VAR_0);
 FUNC_2(VAR_1);

 FUNC_9(VAR_2->host);
}
