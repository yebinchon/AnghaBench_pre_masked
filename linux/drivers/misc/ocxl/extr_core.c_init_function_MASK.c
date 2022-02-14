
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ocxl_fn {int dev; } ;


 int VAR_0 ;
 struct ocxl_fn* FUNC_0 (int) ;
 struct ocxl_fn* FUNC_1 () ;
 int FUNC_2 (struct ocxl_fn*,struct pci_dev*) ;
 int FUNC_3 (struct ocxl_fn*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ocxl_fn*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct ocxl_fn *FUNC_7(struct pci_dev *VAR_1)
{
 struct ocxl_fn *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1();
 if (!VAR_2)
  return FUNC_0(-VAR_0);

 VAR_3 = FUNC_2(VAR_2, VAR_1);
 if (VAR_3) {
  FUNC_5(VAR_2);
  return FUNC_0(VAR_3);
 }

 VAR_3 = FUNC_4(&VAR_2->dev);
 if (VAR_3) {
  FUNC_3(VAR_2);
  FUNC_6(&VAR_2->dev);
  return FUNC_0(VAR_3);
 }
 return VAR_2;
}
