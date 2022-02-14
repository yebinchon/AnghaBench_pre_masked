
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_nhi {struct pci_dev* pdev; int interrupt_work; int msix_ida; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int,int ,int ,char*,struct tb_nhi*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tb_nhi*) ;
 int FUNC_5 (struct tb_nhi*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct pci_dev*,int,int,int ) ;
 int FUNC_7 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_8(struct tb_nhi *VAR_7)
{
 struct pci_dev *VAR_8 = VAR_7->pdev;
 int VAR_9, VAR_10, VAR_11;


 FUNC_4(VAR_7);

 FUNC_5(VAR_7);

 FUNC_3(&VAR_7->msix_ida);







 VAR_11 = FUNC_6(VAR_8, VAR_2, VAR_1,
         VAR_4);
 if (VAR_11 < 0) {
  VAR_11 = FUNC_6(VAR_8, 1, 1, VAR_3);
  if (VAR_11 < 0)
   return VAR_11;

  FUNC_0(&VAR_7->interrupt_work, VAR_5);

  VAR_10 = FUNC_7(VAR_7->pdev, 0);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_9 = FUNC_2(&VAR_8->dev, VAR_10, VAR_6,
           VAR_0, "thunderbolt", VAR_7);
  if (VAR_9) {
   FUNC_1(&VAR_8->dev, "request_irq failed, aborting\n");
   return VAR_9;
  }
 }

 return 0;
}
