
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {unsigned char pin; unsigned char irq; scalar_t__ is_virtfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ,unsigned char*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_2)
{
 unsigned char VAR_3;


 if (VAR_2->is_virtfn) {
  VAR_2->pin = 0;
  VAR_2->irq = 0;
  return;
 }

 FUNC_0(VAR_2, VAR_1, &VAR_3);
 VAR_2->pin = VAR_3;
 if (VAR_3)
  FUNC_0(VAR_2, VAR_0, &VAR_3);
 VAR_2->irq = VAR_3;
}
