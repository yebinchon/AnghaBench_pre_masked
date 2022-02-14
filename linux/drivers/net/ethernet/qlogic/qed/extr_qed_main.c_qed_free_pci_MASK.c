
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_dev {scalar_t__ regview; scalar_t__ doorbells; scalar_t__ db_size; struct pci_dev* pdev; } ;
struct pci_dev {int enable_cnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_4(struct qed_dev *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;

 if (VAR_0->doorbells && VAR_0->db_size)
  FUNC_1(VAR_0->doorbells);
 if (VAR_0->regview)
  FUNC_1(VAR_0->regview);
 if (FUNC_0(&VAR_1->enable_cnt) == 1)
  FUNC_3(VAR_1);

 FUNC_2(VAR_1);
}
