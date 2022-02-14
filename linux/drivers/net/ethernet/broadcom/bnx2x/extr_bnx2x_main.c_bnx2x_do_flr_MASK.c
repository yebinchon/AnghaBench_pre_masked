
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_2__ {scalar_t__ bc_ver; } ;
struct bnx2x {TYPE_1__ common; struct pci_dev* pdev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct bnx2x*,int ,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_6(struct bnx2x *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->pdev;

 if (FUNC_2(VAR_3)) {
  FUNC_0("FLR not supported in E1/E1H\n");
  return -VAR_1;
 }


 if (VAR_3->common.bc_ver < VAR_2) {
  FUNC_1("FLR not supported by BC_VER: 0x%x\n",
     VAR_3->common.bc_ver);
  return -VAR_1;
 }

 if (!FUNC_5(VAR_4))
  FUNC_4(&VAR_4->dev, "transaction is not cleared; proceeding with reset anyway\n");

 FUNC_0("Initiating FLR\n");
 FUNC_3(VAR_3, VAR_0, 0);

 return 0;
}
