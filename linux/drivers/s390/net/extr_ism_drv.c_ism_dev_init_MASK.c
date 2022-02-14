
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ism_dev {int smcd; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ism_dev*) ;
 int VAR_1 ;
 int FUNC_1 (struct ism_dev*) ;
 int FUNC_2 (struct pci_dev*,int,int,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct ism_dev*) ;
 int FUNC_7 (struct ism_dev*) ;
 int FUNC_8 (struct ism_dev*) ;
 int FUNC_9 (int ,int ,int ,int ,struct ism_dev*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct ism_dev*) ;
 int FUNC_12 (struct ism_dev*) ;

__attribute__((used)) static int FUNC_13(struct ism_dev *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pdev;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3, 1, 1, VAR_0);
 if (VAR_4 <= 0)
  goto out;

 VAR_4 = FUNC_9(FUNC_4(VAR_3, 0), VAR_1, 0,
     FUNC_5(VAR_3), VAR_2);
 if (VAR_4)
  goto free_vectors;

 VAR_4 = FUNC_8(VAR_2);
 if (VAR_4)
  goto free_irq;

 VAR_4 = FUNC_7(VAR_2);
 if (VAR_4)
  goto unreg_sba;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4)
  goto unreg_ieq;

 VAR_4 = FUNC_10(VAR_2->smcd);
 if (VAR_4)
  goto unreg_ieq;

 FUNC_6(VAR_2);
 return 0;

unreg_ieq:
 FUNC_11(VAR_2);
unreg_sba:
 FUNC_12(VAR_2);
free_irq:
 FUNC_0(FUNC_4(VAR_3, 0), VAR_2);
free_vectors:
 FUNC_3(VAR_3);
out:
 return VAR_4;
}
