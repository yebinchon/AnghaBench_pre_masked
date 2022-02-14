
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int release; int notify; } ;
struct TYPE_3__ {int vector_irq; } ;
struct hclge_dev {TYPE_2__ affinity_notify; TYPE_1__ misc_vector; int affinity_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct hclge_dev *VAR_2)
{
 FUNC_0(VAR_2->misc_vector.vector_irq,
         &VAR_2->affinity_mask);

 VAR_2->affinity_notify.notify = VAR_0;
 VAR_2->affinity_notify.release = VAR_1;
 FUNC_1(VAR_2->misc_vector.vector_irq,
      &VAR_2->affinity_notify);
}
