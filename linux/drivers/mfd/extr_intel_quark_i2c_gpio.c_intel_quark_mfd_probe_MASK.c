
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct intel_quark_mfd {int * dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct intel_quark_mfd*) ;
 struct intel_quark_mfd* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct pci_dev*,int *) ;
 int FUNC_4 (struct pci_dev*,int *) ;
 int * VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int *,int ,int *,int ,int *) ;
 int FUNC_8 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_9(struct pci_dev *VAR_3,
     const struct pci_device_id *VAR_4)
{
 struct intel_quark_mfd *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_8(VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_5 = FUNC_2(&VAR_3->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->dev = &VAR_3->dev;
 FUNC_1(&VAR_3->dev, VAR_5);

 VAR_6 = FUNC_5(&VAR_3->dev);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_3, &VAR_2[1]);
 if (VAR_6)
  goto err_unregister_i2c_clk;

 VAR_6 = FUNC_3(VAR_3, &VAR_2[0]);
 if (VAR_6)
  goto err_unregister_i2c_clk;

 VAR_6 = FUNC_7(&VAR_3->dev, 0, VAR_2,
         FUNC_0(VAR_2), ((void*)0), 0,
         ((void*)0));
 if (VAR_6)
  goto err_unregister_i2c_clk;

 return 0;

err_unregister_i2c_clk:
 FUNC_6(&VAR_3->dev);
 return VAR_6;
}
