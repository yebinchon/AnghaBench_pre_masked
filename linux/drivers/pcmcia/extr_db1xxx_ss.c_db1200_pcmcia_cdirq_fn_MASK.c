
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db1x_pcmcia_sock {int insert_irq; int eject_irq; int socket; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct db1x_pcmcia_sock *VAR_4 = VAR_3;


 FUNC_1(100);
 if (VAR_2 == VAR_4->insert_irq)
  FUNC_0(VAR_4->eject_irq);
 else
  FUNC_0(VAR_4->insert_irq);

 FUNC_2(&VAR_4->socket, VAR_1);

 return VAR_0;
}
