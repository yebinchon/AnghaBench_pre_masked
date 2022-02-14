
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dev; } ;
struct ntb_dev_data {int dummy; } ;
struct amd_ntb_dev {int ntb; struct ntb_dev_data* dev_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amd_ntb_dev*) ;
 int FUNC_1 (struct amd_ntb_dev*) ;
 int FUNC_2 (struct amd_ntb_dev*) ;
 int FUNC_3 (struct amd_ntb_dev*) ;
 int FUNC_4 (struct amd_ntb_dev*,struct pci_dev*) ;
 int FUNC_5 (struct amd_ntb_dev*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct amd_ntb_dev*) ;
 struct amd_ntb_dev* FUNC_9 (int,int ,int) ;
 int FUNC_10 (struct amd_ntb_dev*) ;
 int FUNC_11 (struct amd_ntb_dev*) ;
 int FUNC_12 (struct amd_ntb_dev*,struct pci_dev*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct pci_dev *VAR_2,
        const struct pci_device_id *VAR_3)
{
 struct amd_ntb_dev *VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_7(&VAR_2->dev);

 VAR_4 = FUNC_9(sizeof(*VAR_4), VAR_1, VAR_6);
 if (!VAR_4) {
  VAR_5 = -VAR_0;
  goto err_ndev;
 }

 VAR_4->dev_data = (struct ntb_dev_data *)VAR_3->driver_data;

 FUNC_12(VAR_4, VAR_2);

 VAR_5 = FUNC_4(VAR_4, VAR_2);
 if (VAR_5)
  goto err_init_pci;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  goto err_init_dev;


 FUNC_2(VAR_4);

 FUNC_5(VAR_4);

 FUNC_11(VAR_4);

 VAR_5 = FUNC_13(&VAR_4->ntb);
 if (VAR_5)
  goto err_register;

 FUNC_6(&VAR_2->dev, "NTB device registered.\n");

 return 0;

err_register:
 FUNC_10(VAR_4);
 FUNC_0(VAR_4);
err_init_dev:
 FUNC_3(VAR_4);
err_init_pci:
 FUNC_8(VAR_4);
err_ndev:
 return VAR_5;
}
