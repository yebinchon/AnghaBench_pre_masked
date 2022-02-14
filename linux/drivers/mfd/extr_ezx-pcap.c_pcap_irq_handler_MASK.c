
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_chip {int isr_work; int workqueue; } ;
struct TYPE_4__ {TYPE_1__* chip; } ;
struct irq_desc {TYPE_2__ irq_data; } ;
struct TYPE_3__ {int (* irq_ack ) (TYPE_2__*) ;} ;


 struct pcap_chip* FUNC_0 (struct irq_desc*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct irq_desc *VAR_0)
{
 struct pcap_chip *VAR_1 = FUNC_0(VAR_0);

 VAR_0->irq_data.chip->irq_ack(&VAR_0->irq_data);
 FUNC_1(VAR_1->workqueue, &VAR_1->isr_work);
}
