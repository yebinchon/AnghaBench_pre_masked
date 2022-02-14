
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct nwl_msi {scalar_t__ irq_msi1; scalar_t__ irq_msi0; int * bitmap; int lock; } ;
struct nwl_pcie {unsigned long phys_pcie_reg_base; struct nwl_msi msi; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (scalar_t__,int ,struct nwl_pcie*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nwl_pcie*,int ) ;
 int FUNC_8 (struct nwl_pcie*,int,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 void* FUNC_9 (struct platform_device*,char*) ;
 struct platform_device* FUNC_10 (struct device*) ;
 int FUNC_11 (unsigned long) ;

__attribute__((used)) static int FUNC_12(struct nwl_pcie *VAR_20)
{
 struct device *VAR_21 = VAR_20->dev;
 struct platform_device *VAR_22 = FUNC_10(VAR_21);
 struct nwl_msi *VAR_23 = &VAR_20->msi;
 unsigned long VAR_24;
 int VAR_25;
 int VAR_26 = FUNC_0(VAR_4) * sizeof(long);

 FUNC_6(&VAR_23->lock);

 VAR_23->bitmap = FUNC_4(VAR_26, VAR_3);
 if (!VAR_23->bitmap)
  return -VAR_2;


 VAR_23->irq_msi1 = FUNC_9(VAR_22, "msi1");
 if (VAR_23->irq_msi1 < 0) {
  FUNC_1(VAR_21, "failed to get IRQ#%d\n", VAR_23->irq_msi1);
  VAR_25 = -VAR_0;
  goto err;
 }

 FUNC_2(VAR_23->irq_msi1,
      VAR_18, VAR_20);


 VAR_23->irq_msi0 = FUNC_9(VAR_22, "msi0");
 if (VAR_23->irq_msi0 < 0) {
  FUNC_1(VAR_21, "failed to get IRQ#%d\n", VAR_23->irq_msi0);
  VAR_25 = -VAR_0;
  goto err;
 }

 FUNC_2(VAR_23->irq_msi0,
      VAR_19, VAR_20);


 VAR_25 = FUNC_7(VAR_20, VAR_7) & VAR_16;
 if (!VAR_25) {
  FUNC_1(VAR_21, "MSI not present\n");
  VAR_25 = -VAR_1;
  goto err;
 }


 FUNC_8(VAR_20, FUNC_7(VAR_20, VAR_8) |
     VAR_15, VAR_8);


 FUNC_8(VAR_20, FUNC_7(VAR_20, VAR_8) |
     VAR_17, VAR_8);


 VAR_24 = VAR_20->phys_pcie_reg_base;
 FUNC_8(VAR_20, FUNC_5(VAR_24), VAR_6);
 FUNC_8(VAR_20, FUNC_11(VAR_24), VAR_5);





 FUNC_8(VAR_20, 0, VAR_9);

 FUNC_8(VAR_20, FUNC_7(VAR_20, VAR_13) &
     VAR_11, VAR_13);

 FUNC_8(VAR_20, VAR_11, VAR_9);





 FUNC_8(VAR_20, 0, VAR_10);

 FUNC_8(VAR_20, FUNC_7(VAR_20, VAR_14) &
     VAR_12, VAR_14);

 FUNC_8(VAR_20, VAR_12, VAR_10);

 return 0;
err:
 FUNC_3(VAR_23->bitmap);
 VAR_23->bitmap = ((void*)0);
 return VAR_25;
}
