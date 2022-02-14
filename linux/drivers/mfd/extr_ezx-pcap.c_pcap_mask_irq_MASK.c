
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcap_chip {int msr; int msr_work; int workqueue; } ;
struct irq_data {int irq; } ;


 struct pcap_chip* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct pcap_chip*,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct pcap_chip *VAR_1 = FUNC_0(VAR_0);

 VAR_1->msr |= 1 << FUNC_1(VAR_1, VAR_0->irq);
 FUNC_2(VAR_1->workqueue, &VAR_1->msr_work);
}
