
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int subordinate; } ;
struct aer_err_info {int id; scalar_t__ error_dev_num; } ;


 int FUNC_0 (struct pci_dev*,struct aer_err_info*) ;
 int FUNC_1 (struct pci_dev*,char*,int ) ;
 int FUNC_2 (int ,int (*) (struct pci_dev*,struct aer_err_info*),struct aer_err_info*) ;

__attribute__((used)) static bool FUNC_3(struct pci_dev *VAR_0,
  struct aer_err_info *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_0;
 int VAR_3;


 VAR_1->error_dev_num = 0;


 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3)
  return 1;

 FUNC_2(VAR_0->subordinate, FUNC_0, VAR_1);

 if (!VAR_1->error_dev_num) {
  FUNC_1(VAR_0, "can't find device of ID%04x\n", VAR_1->id);
  return 0;
 }
 return 1;
}
