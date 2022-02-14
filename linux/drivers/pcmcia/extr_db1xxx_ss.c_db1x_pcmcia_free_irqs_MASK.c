
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db1x_pcmcia_sock {int stschg_irq; int insert_irq; int eject_irq; } ;


 int FUNC_0 (int,struct db1x_pcmcia_sock*) ;

__attribute__((used)) static void FUNC_1(struct db1x_pcmcia_sock *VAR_0)
{
 if (VAR_0->stschg_irq != -1)
  FUNC_0(VAR_0->stschg_irq, VAR_0);

 FUNC_0(VAR_0->insert_irq, VAR_0);
 if (VAR_0->eject_irq != -1)
  FUNC_0(VAR_0->eject_irq, VAR_0);
}
