
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct velocity_info_tbl {int dummy; } ;
struct pci_device_id {size_t driver_data; } ;
struct pci_dev {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct velocity_info_tbl* VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (int *,int ,struct velocity_info_tbl const*,int ) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_3,
          const struct pci_device_id *VAR_4)
{
 const struct velocity_info_tbl *VAR_5 =
     &VAR_2[VAR_4->driver_data];
 int VAR_6;

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_3, VAR_1);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_3->dev, "No PCI resources.\n");
  goto fail1;
 }

 VAR_6 = FUNC_5(&VAR_3->dev, VAR_3->irq, VAR_5, VAR_0);
 if (VAR_6 == 0)
  return 0;

 FUNC_3(VAR_3);
fail1:
 FUNC_1(VAR_3);
 return VAR_6;
}
