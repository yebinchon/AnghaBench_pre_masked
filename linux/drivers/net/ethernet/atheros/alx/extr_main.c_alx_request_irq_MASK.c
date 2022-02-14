
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {scalar_t__ msi_enabled; scalar_t__ msix_enabled; } ;
struct alx_hw {int imt; struct pci_dev* pdev; } ;
struct alx_priv {TYPE_1__* dev; struct alx_hw hw; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct alx_priv*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct alx_priv*) ;
 int FUNC_2 (struct alx_priv*) ;
 int FUNC_3 (struct alx_hw*,int ,int) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (int ,int ,int ,int ,struct alx_priv*) ;

__attribute__((used)) static int FUNC_8(struct alx_priv *VAR_6)
{
 struct pci_dev *VAR_7 = VAR_6->hw.pdev;
 struct alx_hw *VAR_8 = &VAR_6->hw;
 int VAR_9;
 u32 VAR_10;

 VAR_10 = (VAR_8->imt >> 1) << VAR_2;

 if (VAR_6->hw.pdev->msix_enabled) {
  FUNC_3(VAR_8, VAR_1, VAR_10);
  VAR_9 = FUNC_2(VAR_6);
  if (!VAR_9)
   goto out;


  VAR_9 = FUNC_1(VAR_6);
  if (VAR_9)
   goto out;
 }

 if (VAR_6->hw.pdev->msi_enabled) {
  FUNC_3(VAR_8, VAR_1,
    VAR_10 | VAR_0);
  VAR_9 = FUNC_7(FUNC_6(VAR_7, 0), VAR_5, 0,
      VAR_6->dev->name, VAR_6);
  if (!VAR_9)
   goto out;


  FUNC_5(VAR_6->hw.pdev);
 }

 FUNC_3(VAR_8, VAR_1, 0);
 VAR_9 = FUNC_7(FUNC_6(VAR_7, 0), VAR_4, VAR_3,
     VAR_6->dev->name, VAR_6);
out:
 if (!VAR_9)
  FUNC_0(VAR_6);
 else
  FUNC_4(VAR_6->dev, "IRQ registration failed!\n");
 return VAR_9;
}
