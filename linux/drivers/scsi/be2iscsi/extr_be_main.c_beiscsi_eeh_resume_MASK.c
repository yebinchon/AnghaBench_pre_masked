
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct beiscsi_hba {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct beiscsi_hba*,int ,char*) ;
 int FUNC_1 (struct beiscsi_hba*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_1)
{
 struct beiscsi_hba *VAR_2;
 int VAR_3;

 VAR_2 = (struct beiscsi_hba *)FUNC_2(VAR_1);
 FUNC_3(VAR_1);

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  FUNC_0(VAR_2, VAR_0,
         "BM_%d : AER EEH resume failed\n");
}
