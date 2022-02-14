
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_priv {int n_msi; int mutex; struct pci_dev* pdev; } ;
struct pci_dev {int msi_enabled; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct pci_dev*,int,int,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct wil6210_priv*,int ) ;
 int FUNC_8 (struct wil6210_priv*,int ) ;
 int FUNC_9 (struct wil6210_priv*,char*,...) ;
 int FUNC_10 (struct wil6210_priv*,char*,...) ;
 int FUNC_11 (struct wil6210_priv*,int) ;

__attribute__((used)) static int FUNC_12(struct wil6210_priv *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->pdev;
 int VAR_5;




 int VAR_6 = VAR_4->msi_enabled;

 FUNC_9(VAR_3, "if_pcie_enable\n");

 FUNC_6(VAR_4);


 switch (VAR_2) {
 case 3:
 case 1:
  FUNC_9(VAR_3, "Setup %d MSI interrupts\n", VAR_2);
  break;
 case 0:
  FUNC_9(VAR_3, "MSI interrupts disabled, use INTx\n");
  break;
 default:
  FUNC_10(VAR_3, "Invalid n_msi=%d, default to 1\n", VAR_2);
  VAR_2 = 1;
 }

 if (VAR_2 == 3 &&
     FUNC_2(VAR_4, VAR_2, VAR_2, VAR_1) < VAR_2) {
  FUNC_10(VAR_3, "3 MSI mode failed, try 1 MSI\n");
  VAR_2 = 1;
 }

 if (VAR_2 == 1 && FUNC_4(VAR_4)) {
  FUNC_10(VAR_3, "pci_enable_msi failed, use INTx\n");
  VAR_2 = 0;
 }

 VAR_3->n_msi = VAR_2;

 if (VAR_3->n_msi == 0 && VAR_6) {
  FUNC_10(VAR_3, "Interrupt pin not routed, unable to use INTx\n");
  VAR_5 = -VAR_0;
  goto stop_master;
 }

 VAR_5 = FUNC_8(VAR_3, VAR_4->irq);
 if (VAR_5)
  goto release_vectors;


 FUNC_0(&VAR_3->mutex);
 VAR_5 = FUNC_11(VAR_3, 0);
 FUNC_1(&VAR_3->mutex);
 if (VAR_5)
  goto release_irq;

 return 0;

 release_irq:
 FUNC_7(VAR_3, VAR_4->irq);
 release_vectors:

 FUNC_5(VAR_4);
 stop_master:
 FUNC_3(VAR_4);
 return VAR_5;
}
