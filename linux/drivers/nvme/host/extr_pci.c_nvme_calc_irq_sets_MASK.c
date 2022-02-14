
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_dev {unsigned int* io_queues; } ;
struct irq_affinity {unsigned int* set_size; int nr_sets; struct nvme_dev* priv; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct irq_affinity *VAR_3, unsigned int VAR_4)
{
 struct nvme_dev *VAR_5 = VAR_3->priv;
 unsigned int VAR_6;
 if (!VAR_4) {
  VAR_4 = 1;
  VAR_6 = 0;
 } else if (VAR_4 == 1 || !VAR_2) {
  VAR_6 = 0;
 } else if (VAR_2 >= VAR_4) {
  VAR_6 = 1;
 } else {
  VAR_6 = VAR_4 - VAR_2;
 }

 VAR_5->io_queues[VAR_0] = VAR_4 - VAR_6;
 VAR_3->set_size[VAR_0] = VAR_4 - VAR_6;
 VAR_5->io_queues[VAR_1] = VAR_6;
 VAR_3->set_size[VAR_1] = VAR_6;
 VAR_3->nr_sets = VAR_6 ? 2 : 1;
}
