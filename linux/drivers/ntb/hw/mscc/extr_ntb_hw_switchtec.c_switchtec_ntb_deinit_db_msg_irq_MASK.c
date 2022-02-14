
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchtec_ntb {int message_irq; int doorbell_irq; } ;


 int FUNC_0 (int ,struct switchtec_ntb*) ;

__attribute__((used)) static void FUNC_1(struct switchtec_ntb *VAR_0)
{
 FUNC_0(VAR_0->doorbell_irq, VAR_0);
 FUNC_0(VAR_0->message_irq, VAR_0);
}
