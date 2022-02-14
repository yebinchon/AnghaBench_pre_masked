
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct genwqe_dev {int dummy; } ;


 struct genwqe_dev* FUNC_0 (int *) ;
 int FUNC_1 (struct genwqe_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_0, int VAR_1)
{
 int VAR_2;
 struct genwqe_dev *VAR_3 = FUNC_0(&VAR_0->dev);

 if (VAR_1 > 0) {
  FUNC_1(VAR_3);
  VAR_2 = FUNC_3(VAR_0, VAR_1);
  if (VAR_2 < 0)
   return VAR_2;
  return VAR_1;
 }
 if (VAR_1 == 0) {
  FUNC_2(VAR_0);
  return 0;
 }
 return 0;
}
