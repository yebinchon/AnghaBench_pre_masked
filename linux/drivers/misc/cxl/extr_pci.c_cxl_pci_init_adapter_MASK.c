
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct cxl_native {int dummy; } ;
struct cxl {int perst_loads_image; int perst_same_image; int dev; int native; } ;


 int VAR_0 ;
 struct cxl* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct cxl*) ;
 struct cxl* FUNC_2 () ;
 int FUNC_3 (struct cxl*,struct pci_dev*) ;
 int FUNC_4 (struct cxl*) ;
 int FUNC_5 (struct cxl*) ;
 int FUNC_6 (struct cxl*) ;
 int FUNC_7 (struct cxl*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct cxl*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct cxl*,struct pci_dev*) ;

__attribute__((used)) static struct cxl *FUNC_14(struct pci_dev *VAR_2)
{
 struct cxl *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2();
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_3->native = FUNC_11(sizeof(struct cxl_native), VAR_1);
 if (!VAR_3->native) {
  VAR_4 = -VAR_0;
  goto err_release;
 }

 FUNC_13(VAR_3, VAR_2);




 VAR_3->perst_loads_image = 1;
 VAR_3->perst_same_image = 0;

 VAR_4 = FUNC_3(VAR_3, VAR_2);
 if (VAR_4) {
  FUNC_12(VAR_2);
  goto err_release;
 }


 FUNC_4(VAR_3);





 if ((VAR_4 = FUNC_7(VAR_3)))
  goto err_put1;

 if ((VAR_4 = FUNC_9(VAR_3)))
  goto err_put1;


 FUNC_1(VAR_3);

 return VAR_3;

err_put1:



 FUNC_5(VAR_3);
 FUNC_6(VAR_3);
 FUNC_10(&VAR_3->dev);
 return FUNC_0(VAR_4);

err_release:
 FUNC_8(&VAR_3->dev);
 return FUNC_0(VAR_4);
}
