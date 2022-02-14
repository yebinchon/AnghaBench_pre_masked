
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct knav_range_info {unsigned int queue_base; int flags; TYPE_2__* kdev; TYPE_1__* irqs; } ;
struct knav_queue_inst {unsigned int id; int irq_name; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int irq; int cpu_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int VAR_1 ;
 int FUNC_3 (int,int ,int ,int ,struct knav_queue_inst*) ;

__attribute__((used)) static int FUNC_4(struct knav_range_info *VAR_2,
     struct knav_queue_inst *VAR_3)
{
 unsigned VAR_4 = VAR_3->id - VAR_2->queue_base;
 int VAR_5 = 0, VAR_6;

 if (VAR_2->flags & VAR_0) {
  VAR_6 = VAR_2->irqs[VAR_4].irq;
  VAR_5 = FUNC_3(VAR_6, VAR_1, 0,
     VAR_3->irq_name, VAR_3);
  if (VAR_5)
   return VAR_5;
  FUNC_1(VAR_6);
  if (VAR_2->irqs[VAR_4].cpu_mask) {
   VAR_5 = FUNC_2(VAR_6, VAR_2->irqs[VAR_4].cpu_mask);
   if (VAR_5) {
    FUNC_0(VAR_2->kdev->dev,
      "Failed to set IRQ affinity\n");
    return VAR_5;
   }
  }
 }
 return VAR_5;
}
