
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct genwqe_dev {struct pci_dev* pci_dev; } ;


 scalar_t__ FUNC_0 (struct genwqe_dev*) ;
 int FUNC_1 (struct genwqe_dev*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,struct genwqe_dev*) ;
 struct genwqe_dev* FUNC_4 () ;
 int FUNC_5 (struct genwqe_dev*) ;
 int FUNC_6 (struct genwqe_dev*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct genwqe_dev*) ;
 int FUNC_9 (struct genwqe_dev*) ;
 int FUNC_10 (struct genwqe_dev*) ;
 int FUNC_11 (struct genwqe_dev*) ;
 int FUNC_12 (struct genwqe_dev*) ;

__attribute__((used)) static int FUNC_13(struct pci_dev *VAR_0,
   const struct pci_device_id *VAR_1)
{
 int VAR_2;
 struct genwqe_dev *VAR_3;

 FUNC_7();

 VAR_3 = FUNC_4();
 if (FUNC_0(VAR_3)) {
  FUNC_2(&VAR_0->dev, "err: could not alloc mem (err=%d)!\n",
   (int)FUNC_1(VAR_3));
  return FUNC_1(VAR_3);
 }

 FUNC_3(&VAR_0->dev, VAR_3);
 VAR_3->pci_dev = VAR_0;

 VAR_2 = FUNC_10(VAR_3);
 if (VAR_2 < 0) {
  FUNC_2(&VAR_0->dev,
   "err: problems with PCI setup (err=%d)\n", VAR_2);
  goto out_free_dev;
 }

 VAR_2 = FUNC_11(VAR_3);
 if (VAR_2 < 0) {
  FUNC_2(&VAR_0->dev,
   "err: cannot start card services! (err=%d)\n", VAR_2);
  goto out_pci_remove;
 }

 if (FUNC_8(VAR_3)) {
  VAR_2 = FUNC_6(VAR_3);
  if (VAR_2 < 0) {
   FUNC_2(&VAR_0->dev,
    "err: cannot start health checking! (err=%d)\n",
    VAR_2);
   goto out_stop_services;
  }
 }
 return 0;

 out_stop_services:
 FUNC_12(VAR_3);
 out_pci_remove:
 FUNC_9(VAR_3);
 out_free_dev:
 FUNC_5(VAR_3);
 return VAR_2;
}
