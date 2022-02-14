
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; int irq; } ;
struct mic_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int VAR_1 ;
 int FUNC_2 (struct mic_device*) ;
 int FUNC_3 (struct mic_device*) ;
 int VAR_2 ;
 int FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (int ,int ,int ,int ,char*,struct mic_device*) ;

__attribute__((used)) static int FUNC_6(struct mic_device *VAR_3, struct pci_dev *VAR_4)
{
 int VAR_5;


 FUNC_4(VAR_4, 1);
 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5) {
  FUNC_1(&VAR_4->dev, "Error setting up callbacks\n");
  goto err_nomem;
 }

 VAR_5 = FUNC_5(VAR_4->irq, VAR_1, VAR_2,
      VAR_0, "mic-intx", VAR_3);
 if (VAR_5)
  goto err;

 FUNC_0(&VAR_4->dev, "intx irq setup\n");
 return 0;
err:
 FUNC_2(VAR_3);
err_nomem:
 return VAR_5;
}
