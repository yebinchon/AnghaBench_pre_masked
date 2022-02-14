
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; int devfn; } ;
struct ocxl_fn_config {int dvsec_tl_pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_2, struct ocxl_fn_config *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_4 && FUNC_0(VAR_2->devfn) == 0) {
  FUNC_1(&VAR_2->dev, "Can't find TL DVSEC\n");
  return -VAR_0;
 }
 if (VAR_4 && FUNC_0(VAR_2->devfn) != 0) {
  FUNC_1(&VAR_2->dev, "TL DVSEC is only allowed on function 0\n");
  return -VAR_0;
 }
 VAR_3->dvsec_tl_pos = VAR_4;
 return 0;
}
