
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int msix_enabled; } ;
struct msix_entry {int dummy; } ;
struct irq_affinity {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,struct msix_entry*,int,struct irq_affinity*,int) ;
 int FUNC_2 (int,int,struct irq_affinity*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_3,
       struct msix_entry *VAR_4, int VAR_5,
       int VAR_6, struct irq_affinity *VAR_7,
       int VAR_8)
{
 int VAR_9, VAR_10 = VAR_6;

 if (VAR_6 < VAR_5)
  return -VAR_2;

 if (FUNC_0(VAR_3->msix_enabled))
  return -VAR_0;

 for (;;) {
  if (VAR_7) {
   VAR_10 = FUNC_2(VAR_5, VAR_10, VAR_7);
   if (VAR_10 < VAR_5)
    return -VAR_1;
  }

  VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_10, VAR_7, VAR_8);
  if (VAR_9 == 0)
   return VAR_10;

  if (VAR_9 < 0)
   return VAR_9;
  if (VAR_9 < VAR_5)
   return -VAR_1;

  VAR_10 = VAR_9;
 }
}
