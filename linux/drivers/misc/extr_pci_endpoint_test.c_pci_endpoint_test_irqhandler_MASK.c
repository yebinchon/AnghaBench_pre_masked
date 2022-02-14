
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_endpoint_test {int last_irq; int irq_raised; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pci_endpoint_test*,int ) ;
 int FUNC_2 (struct pci_endpoint_test*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct pci_endpoint_test *VAR_5 = VAR_4;
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_1);
 if (VAR_6 & VAR_2) {
  VAR_5->last_irq = VAR_3;
  FUNC_0(&VAR_5->irq_raised);
  VAR_6 &= ~VAR_2;
 }
 FUNC_2(VAR_5, VAR_1,
     VAR_6);

 return VAR_0;
}
