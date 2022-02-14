
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct genwqe_dev {int dummy; } ;


 int FUNC_0 (int *,char*,int) ;
 struct genwqe_dev* FUNC_1 (int *) ;
 int FUNC_2 (struct genwqe_dev*) ;
 int FUNC_3 (struct genwqe_dev*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 int VAR_1;
 struct genwqe_dev *VAR_2 = FUNC_1(&VAR_0->dev);

 VAR_1 = FUNC_3(VAR_2);
 if (!VAR_1) {
  VAR_1 = FUNC_2(VAR_2);
  if (VAR_1)
   FUNC_0(&VAR_0->dev,
    "err: cannot start health checking! (err=%d)\n",
    VAR_1);
 } else {
  FUNC_0(&VAR_0->dev,
   "err: cannot start card services! (err=%d)\n", VAR_1);
 }
}
