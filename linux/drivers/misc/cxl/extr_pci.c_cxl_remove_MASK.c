
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct cxl_afu {int dummy; } ;
struct cxl {int slices; struct cxl_afu** afu; } ;


 int FUNC_0 (struct cxl*) ;
 int FUNC_1 (struct cxl_afu*) ;
 struct cxl* FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct cxl *VAR_1 = FUNC_2(VAR_0);
 struct cxl_afu *VAR_2;
 int VAR_3;





 for (VAR_3 = 0; VAR_3 < VAR_1->slices; VAR_3++) {
  VAR_2 = VAR_1->afu[VAR_3];
  FUNC_1(VAR_2);
 }
 FUNC_0(VAR_1);
}
