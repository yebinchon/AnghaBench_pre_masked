
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct beiscsi_hba {int dummy; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (struct beiscsi_hba*,int ,int ,char*) ;
 int FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ) ;

__attribute__((used)) static pci_ers_result_t FUNC_7(struct pci_dev *VAR_6)
{
 struct beiscsi_hba *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 VAR_7 = (struct beiscsi_hba *)FUNC_3(VAR_6);

 FUNC_1(VAR_7, VAR_1, VAR_0,
      "BM_%d : EEH Reset\n");

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8)
  return VAR_4;

 FUNC_5(VAR_6);
 FUNC_6(VAR_6, VAR_3);
 FUNC_4(VAR_6);

 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_7, VAR_2, VAR_0,
       "BM_%d : EEH Reset Completed\n");
 } else {
  FUNC_1(VAR_7, VAR_2, VAR_0,
       "BM_%d : EEH Reset Completion Failure\n");
  return VAR_4;
 }

 return VAR_5;
}
