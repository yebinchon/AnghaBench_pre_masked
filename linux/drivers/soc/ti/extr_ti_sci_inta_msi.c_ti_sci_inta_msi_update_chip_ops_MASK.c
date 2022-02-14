
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_domain_info {struct irq_chip* chip; } ;
struct irq_chip {int irq_ack; int irq_mask; int irq_unmask; int irq_set_type; int irq_write_msi_msg; int irq_compose_msi_msg; int irq_release_resources; int irq_request_resources; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_1(struct msi_domain_info *VAR_8)
{
 struct irq_chip *VAR_9 = VAR_8->chip;

 if (FUNC_0(!VAR_9))
  return;

 VAR_9->irq_request_resources = VAR_3;
 VAR_9->irq_release_resources = VAR_2;
 VAR_9->irq_compose_msi_msg = VAR_6;
 VAR_9->irq_write_msi_msg = VAR_7;
 VAR_9->irq_set_type = VAR_4;
 VAR_9->irq_unmask = VAR_5;
 VAR_9->irq_mask = VAR_1;
 VAR_9->irq_ack = VAR_0;
}
