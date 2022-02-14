
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct igc_adapter {struct pci_dev* pdev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct igc_adapter*) ;
 int FUNC_2 (struct igc_adapter*) ;
 int FUNC_3 (struct igc_adapter*) ;
 int FUNC_4 (struct igc_adapter*,int) ;

__attribute__((used)) static int FUNC_5(struct igc_adapter *VAR_0, bool VAR_1)
{
 struct pci_dev *VAR_2 = VAR_0->pdev;
 int VAR_3 = 0;

 FUNC_4(VAR_0, VAR_1);

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3) {
  FUNC_0(&VAR_2->dev, "Unable to allocate memory for vectors\n");
  goto err_alloc_q_vectors;
 }

 FUNC_2(VAR_0);

 return 0;

err_alloc_q_vectors:
 FUNC_3(VAR_0);
 return VAR_3;
}
