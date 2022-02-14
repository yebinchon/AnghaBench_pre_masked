
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct amd_ntb_dev {int ntb; } ;


 int FUNC_0 (struct amd_ntb_dev*) ;
 int FUNC_1 (struct amd_ntb_dev*) ;
 int FUNC_2 (struct amd_ntb_dev*) ;
 int FUNC_3 (struct amd_ntb_dev*) ;
 int FUNC_4 (struct amd_ntb_dev*) ;
 int FUNC_5 (int *) ;
 struct amd_ntb_dev* FUNC_6 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_0)
{
 struct amd_ntb_dev *VAR_1 = FUNC_6(VAR_0);

 FUNC_5(&VAR_1->ntb);
 FUNC_4(VAR_1);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
}
