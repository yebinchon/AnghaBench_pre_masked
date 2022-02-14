
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_dev {int lmmio; int * ts_port; struct smi_cfg_info* info; int ir; struct pci_dev* pci_dev; int nr; } ;
struct smi_cfg_info {scalar_t__ ts_0; scalar_t__ ts_1; int type; int name; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int irq; int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct smi_dev*) ;
 struct smi_dev* FUNC_5 (int,int ) ;
 int FUNC_6 (struct pci_dev*) ;
 scalar_t__ FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*,struct smi_dev*) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (int ,int ,int ,char*,struct smi_dev*) ;
 int FUNC_16 (struct smi_dev*) ;
 int FUNC_17 (struct smi_dev*) ;
 int FUNC_18 (struct smi_dev*) ;
 int FUNC_19 (struct smi_dev*) ;
 int FUNC_20 (struct smi_dev*) ;
 int FUNC_21 (int *) ;
 int VAR_4 ;
 int FUNC_22 (struct smi_dev*,int *,int) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static int FUNC_24(struct pci_dev *VAR_5, const struct pci_device_id *VAR_6)
{
 struct smi_dev *VAR_7;
 int VAR_8 = -VAR_1;

 if (FUNC_7(VAR_5) < 0)
  return -VAR_0;

 VAR_7 = FUNC_5(sizeof(struct smi_dev), VAR_2);
 if (!VAR_7) {
  VAR_8 = -VAR_1;
  goto err_pci_disable_device;
 }

 VAR_7->pci_dev = VAR_5;
 FUNC_13(VAR_5, VAR_7);
 VAR_7->info = (struct smi_cfg_info *) VAR_6->driver_data;
 FUNC_1(&VAR_7->pci_dev->dev,
  "card detected: %s\n", VAR_7->info->name);

 VAR_7->nr = VAR_7->info->type;
 VAR_7->lmmio = FUNC_2(FUNC_11(VAR_7->pci_dev, 0),
       FUNC_10(VAR_7->pci_dev, 0));
 if (!VAR_7->lmmio) {
  VAR_8 = -VAR_1;
  goto err_kfree;
 }


 VAR_8 = FUNC_12(VAR_5, FUNC_0(32));
 if (VAR_8 < 0)
  goto err_pci_iounmap;

 FUNC_14(VAR_5);

 VAR_8 = FUNC_16(VAR_7);
 if (VAR_8 < 0)
  goto err_pci_iounmap;

 VAR_8 = FUNC_18(VAR_7);
 if (VAR_8 < 0)
  goto err_pci_iounmap;

 if (VAR_7->info->ts_0) {
  VAR_8 = FUNC_22(VAR_7, &VAR_7->ts_port[0], 0);
  if (VAR_8 < 0)
   goto err_del_i2c_adaptor;
 }

 if (VAR_7->info->ts_1) {
  VAR_8 = FUNC_22(VAR_7, &VAR_7->ts_port[1], 1);
  if (VAR_8 < 0)
   goto err_del_port0_attach;
 }

 VAR_8 = FUNC_20(VAR_7);
 if (VAR_8 < 0)
  goto err_del_port1_attach;
 VAR_8 = FUNC_15(VAR_7->pci_dev->irq, VAR_4,
      VAR_3, "SMI_PCIE", VAR_7);
 if (VAR_8 < 0)
  goto err_del_ir;

 FUNC_21(&VAR_7->ir);
 return 0;

err_del_ir:
 FUNC_19(VAR_7);
err_del_port1_attach:
 if (VAR_7->info->ts_1)
  FUNC_23(&VAR_7->ts_port[1]);
err_del_port0_attach:
 if (VAR_7->info->ts_0)
  FUNC_23(&VAR_7->ts_port[0]);
err_del_i2c_adaptor:
 FUNC_17(VAR_7);
err_pci_iounmap:
 FUNC_3(VAR_7->lmmio);
err_kfree:
 FUNC_13(VAR_5, ((void*)0));
 FUNC_4(VAR_7);
err_pci_disable_device:
 FUNC_6(VAR_5);
 return VAR_8;
}
