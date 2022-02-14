
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct bnx2x_sriov {int pos; int link; int cap; int pgsz; int stride; int offset; int initial; int total; int ctrl; } ;
struct bnx2x {struct pci_dev* pdev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_5 (struct pci_dev*,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_6(struct bnx2x *VAR_11, struct bnx2x_sriov *VAR_12)
{
 int VAR_13;
 struct pci_dev *VAR_14 = VAR_11->pdev;

 VAR_13 = FUNC_2(VAR_14, VAR_2);
 if (!VAR_13) {
  FUNC_0("failed to find SRIOV capability in device\n");
  return -VAR_1;
 }

 VAR_12->pos = VAR_13;
 FUNC_1(VAR_0, "sriov ext pos %d\n", VAR_13);
 FUNC_5(VAR_14, VAR_13 + VAR_4, &VAR_12->ctrl);
 FUNC_5(VAR_14, VAR_13 + VAR_8, &VAR_12->total);
 FUNC_5(VAR_14, VAR_13 + VAR_6, &VAR_12->initial);
 FUNC_5(VAR_14, VAR_13 + VAR_9, &VAR_12->offset);
 FUNC_5(VAR_14, VAR_13 + VAR_10, &VAR_12->stride);
 FUNC_4(VAR_14, VAR_13 + VAR_7, &VAR_12->pgsz);
 FUNC_4(VAR_14, VAR_13 + VAR_3, &VAR_12->cap);
 FUNC_3(VAR_14, VAR_13 + VAR_5, &VAR_12->link);

 return 0;
}
