
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct genwqe_dev {int dummy; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 struct genwqe_dev* FUNC_1 (int *) ;
 int FUNC_2 (struct genwqe_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_3(struct pci_dev *VAR_2)
{
 int VAR_3;
 struct genwqe_dev *VAR_4 = FUNC_1(&VAR_2->dev);

 VAR_3 = FUNC_2(VAR_4);
 if (!VAR_3) {
  return VAR_1;
 } else {
  FUNC_0(&VAR_2->dev,
   "err: problems with PCI setup (err=%d)\n", VAR_3);
  return VAR_0;
 }
}
