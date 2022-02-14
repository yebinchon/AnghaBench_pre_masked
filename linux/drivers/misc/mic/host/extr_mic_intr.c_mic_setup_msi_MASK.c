
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dev; int irq; } ;
struct TYPE_2__ {int num_vectors; int mic_msi_map; } ;
struct mic_device {TYPE_1__ irq_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct mic_device*) ;
 int FUNC_5 (struct mic_device*) ;
 int VAR_3 ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (int ,int ,int ,int ,char*,struct mic_device*) ;

__attribute__((used)) static int FUNC_9(struct mic_device *VAR_4, struct pci_dev *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_7(VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_5->dev, "Error enabling MSI. rc = %d\n", VAR_6);
  return VAR_6;
 }

 VAR_4->irq_info.num_vectors = 1;
 VAR_4->irq_info.mic_msi_map = FUNC_3((sizeof(u32) *
  VAR_4->irq_info.num_vectors), VAR_1);

 if (!VAR_4->irq_info.mic_msi_map) {
  VAR_6 = -VAR_0;
  goto err_nomem1;
 }

 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6) {
  FUNC_1(&VAR_5->dev, "Error setting up callbacks\n");
  goto err_nomem2;
 }

 VAR_6 = FUNC_8(VAR_5->irq, VAR_2, VAR_3,
      0, "mic-msi", VAR_4);
 if (VAR_6) {
  FUNC_1(&VAR_5->dev, "Error allocating MSI interrupt\n");
  goto err_irq_req_fail;
 }

 FUNC_0(&VAR_5->dev, "%d MSI irqs setup\n", VAR_4->irq_info.num_vectors);
 return 0;
err_irq_req_fail:
 FUNC_4(VAR_4);
err_nomem2:
 FUNC_2(VAR_4->irq_info.mic_msi_map);
err_nomem1:
 FUNC_6(VAR_5);
 VAR_4->irq_info.num_vectors = 0;
 return VAR_6;
}
