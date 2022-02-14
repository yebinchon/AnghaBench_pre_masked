
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int quirks; } ;
struct nvme_dev {unsigned int* io_queues; TYPE_1__ ctrl; int dev; } ;
struct irq_affinity {int pre_vectors; struct nvme_dev* priv; int calc_sets; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 () ;
 int VAR_6 ;
 int FUNC_1 (struct pci_dev*,int,unsigned int,int,struct irq_affinity*) ;
 unsigned int VAR_7 ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct nvme_dev *VAR_8, unsigned int VAR_9)
{
 struct pci_dev *VAR_10 = FUNC_2(VAR_8->dev);
 struct irq_affinity VAR_11 = {
  .pre_vectors = 1,
  .calc_sets = VAR_6,
  .priv = VAR_8,
 };
 unsigned int VAR_12, VAR_13;
 unsigned int VAR_14 = FUNC_0();





 VAR_13 = VAR_7;
 if (VAR_13 >= VAR_9) {
  VAR_13 = VAR_9 - 1;
  VAR_12 = 1;
 } else {
  if (VAR_14 < VAR_9 - VAR_13)
   VAR_12 = VAR_14 + 1;
  else
   VAR_12 = VAR_9 - VAR_13 + 1;
 }
 VAR_8->io_queues[VAR_1] = VAR_13;


 VAR_8->io_queues[VAR_0] = 1;
 VAR_8->io_queues[VAR_2] = 0;





 if (VAR_8->ctrl.quirks & VAR_3)
  VAR_12 = 1;

 return FUNC_1(VAR_10, 1, VAR_12,
         VAR_5 | VAR_4, &VAR_11);
}
