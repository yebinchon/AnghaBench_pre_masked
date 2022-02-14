
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct csio_hw {int regstart; int drv_version; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct csio_hw*,char*,struct csio_hw*) ;
 int FUNC_1 (struct csio_hw*) ;
 int FUNC_2 (struct csio_hw*,char*,int ) ;
 int FUNC_3 (struct csio_hw*) ;
 scalar_t__ FUNC_4 (struct csio_hw*) ;
 int FUNC_5 (struct csio_hw*) ;
 scalar_t__ FUNC_6 (struct csio_hw*) ;
 int FUNC_7 (struct csio_hw*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct csio_hw*) ;
 struct csio_hw* FUNC_11 (int,int ) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*,int ) ;
 int FUNC_14 (int ,int ,int) ;

__attribute__((used)) static struct csio_hw *FUNC_15(struct pci_dev *VAR_2)
{
 struct csio_hw *VAR_3;

 VAR_3 = FUNC_11(sizeof(struct csio_hw), VAR_1);
 if (!VAR_3)
  goto err;

 VAR_3->pdev = VAR_2;
 FUNC_14(VAR_3->drv_version, VAR_0, 32);


 if (FUNC_6(VAR_3))
  goto err_free_hw;


 VAR_3->regstart = FUNC_8(FUNC_13(VAR_2, 0),
           FUNC_12(VAR_2, 0));
 if (!VAR_3->regstart) {
  FUNC_2(VAR_3, "Could not map BAR 0, regstart = %p\n",
    VAR_3->regstart);
  goto err_resource_free;
 }

 FUNC_5(VAR_3);

 if (FUNC_4(VAR_3))
  goto err_unmap_bar;

 FUNC_1(VAR_3);

 FUNC_0(VAR_3, "hw:%p\n", VAR_3);

 return VAR_3;

err_unmap_bar:
 FUNC_3(VAR_3);
 FUNC_9(VAR_3->regstart);
err_resource_free:
 FUNC_7(VAR_3);
err_free_hw:
 FUNC_10(VAR_3);
err:
 return ((void*)0);
}
