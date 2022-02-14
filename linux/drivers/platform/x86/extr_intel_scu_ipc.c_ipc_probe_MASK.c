
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dev; int irq; } ;
struct intel_scu_ipc_pdata_t {int i2c_len; int i2c_base; int irq_mode; } ;
struct intel_scu_ipc_dev {int * dev; int i2c_base; int ipc_base; int cmd_complete; int irq_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ,char*,struct intel_scu_ipc_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 struct intel_scu_ipc_dev VAR_4 ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,struct intel_scu_ipc_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int,int ) ;
 int * FUNC_8 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_9(struct pci_dev *VAR_5, const struct pci_device_id *VAR_6)
{
 int VAR_7;
 struct intel_scu_ipc_dev *VAR_8 = &VAR_4;
 struct intel_scu_ipc_pdata_t *VAR_9;

 if (VAR_8->dev)
  return -VAR_0;

 VAR_9 = (struct intel_scu_ipc_pdata_t *)VAR_6->driver_data;
 if (!VAR_9)
  return -VAR_1;

 VAR_8->irq_mode = VAR_9->irq_mode;

 VAR_7 = FUNC_6(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_7(VAR_5, 1 << 0, FUNC_4(VAR_5));
 if (VAR_7)
  return VAR_7;

 FUNC_1(&VAR_8->cmd_complete);

 VAR_8->ipc_base = FUNC_8(VAR_5)[0];

 VAR_8->i2c_base = FUNC_3(VAR_9->i2c_base, VAR_9->i2c_len);
 if (!VAR_8->i2c_base)
  return -VAR_2;

 VAR_7 = FUNC_0(&VAR_5->dev, VAR_5->irq, VAR_3, 0, "intel_scu_ipc",
          VAR_8);
 if (VAR_7)
  return VAR_7;


 VAR_8->dev = &VAR_5->dev;

 FUNC_2();

 FUNC_5(VAR_5, VAR_8);
 return 0;
}
