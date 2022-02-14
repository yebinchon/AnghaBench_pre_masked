
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct pci_endpoint_test {scalar_t__ last_irq; int irq_raised; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_endpoint_test*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct pci_dev*,scalar_t__) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static bool FUNC_4(struct pci_endpoint_test *VAR_7,
           u16 VAR_8, bool VAR_9)
{
 u32 VAR_10;
 struct pci_dev *VAR_11 = VAR_7->pdev;

 FUNC_1(VAR_7, VAR_6,
     VAR_9 == 0 ? VAR_2 :
     VAR_3);
 FUNC_1(VAR_7, VAR_5, VAR_8);
 FUNC_1(VAR_7, VAR_4,
     VAR_9 == 0 ? VAR_1 :
     VAR_0);
 VAR_10 = FUNC_3(&VAR_7->irq_raised,
       FUNC_0(1000));
 if (!VAR_10)
  return 0;

 if (FUNC_2(VAR_11, VAR_8 - 1) == VAR_7->last_irq)
  return 1;

 return 0;
}
