
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dev; } ;
struct ngene_info {int name; } ;
struct ngene {int i2c_current_bus; struct ngene_info* card_info; struct pci_dev* pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ngene*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct ngene*) ;
 int FUNC_3 (struct ngene*) ;
 int FUNC_4 (struct ngene*) ;
 int FUNC_5 (struct ngene*) ;
 int FUNC_6 (struct ngene*) ;
 int FUNC_7 (struct ngene*) ;
 int FUNC_8 (struct pci_dev*) ;
 scalar_t__ FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,struct ngene*) ;
 struct ngene* FUNC_11 (int) ;

int FUNC_12(struct pci_dev *VAR_2, const struct pci_device_id *VAR_3)
{
 struct ngene *VAR_4;
 int VAR_5 = 0;

 if (FUNC_9(VAR_2) < 0)
  return -VAR_0;

 VAR_4 = FUNC_11(sizeof(struct ngene));
 if (VAR_4 == ((void*)0)) {
  VAR_5 = -VAR_1;
  goto fail0;
 }

 VAR_4->pci_dev = VAR_2;
 VAR_4->card_info = (struct ngene_info *)VAR_3->driver_data;
 FUNC_1(&VAR_2->dev, "Found %s\n", VAR_4->card_info->name);

 FUNC_10(VAR_2, VAR_4);


 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5 < 0)
  goto fail1;
 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5 < 0)
  goto fail1;

 FUNC_0(VAR_4);

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5 < 0)
  goto fail1;


 VAR_4->i2c_current_bus = -1;


 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 < 0)
  goto fail2;

 return 0;

fail2:
 FUNC_7(VAR_4);
fail1:
 FUNC_5(VAR_4);
fail0:
 FUNC_8(VAR_2);
 return VAR_5;
}
