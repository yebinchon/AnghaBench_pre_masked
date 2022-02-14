
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ irq; } ;
struct irq_affinity {int member_0; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (struct irq_affinity*) ;
 int FUNC_1 (struct pci_dev*,unsigned int,unsigned int,struct irq_affinity*) ;
 int FUNC_2 (struct pci_dev*,int *,unsigned int,unsigned int,struct irq_affinity*,unsigned int) ;
 int FUNC_3 (int,struct irq_affinity*) ;
 int FUNC_4 (struct pci_dev*,int) ;

int FUNC_5(struct pci_dev *VAR_5, unsigned int VAR_6,
       unsigned int VAR_7, unsigned int VAR_8,
       struct irq_affinity *VAR_9)
{
 struct irq_affinity VAR_10 = {0};
 int VAR_11 = -VAR_0;
 int VAR_12 = -VAR_0;

 if (VAR_8 & VAR_1) {
  if (!VAR_9)
   VAR_9 = &VAR_10;
 } else {
  if (FUNC_0(VAR_9))
   VAR_9 = ((void*)0);
 }

 if (VAR_8 & VAR_4) {
  VAR_11 = FUNC_2(VAR_5, ((void*)0), VAR_6,
          VAR_7, VAR_9, VAR_8);
  if (VAR_11 > 0)
   return VAR_11;
 }

 if (VAR_8 & VAR_3) {
  VAR_12 = FUNC_1(VAR_5, VAR_6, VAR_7,
        VAR_9);
  if (VAR_12 > 0)
   return VAR_12;
 }


 if (VAR_8 & VAR_2) {
  if (VAR_6 == 1 && VAR_5->irq) {





   if (VAR_9)
    FUNC_3(1, VAR_9);
   FUNC_4(VAR_5, 1);
   return 1;
  }
 }

 if (VAR_11 == -VAR_0)
  return -VAR_0;
 return VAR_12;
}
