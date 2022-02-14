
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db1x_pcmcia_sock {int stschg_irq; scalar_t__ board_type; int insert_irq; int eject_irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct db1x_pcmcia_sock*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct db1x_pcmcia_sock*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ,int ,char*,struct db1x_pcmcia_sock*) ;
 int FUNC_5 (int,int ,int ,int ,char*,struct db1x_pcmcia_sock*) ;

__attribute__((used)) static int FUNC_6(struct db1x_pcmcia_sock *VAR_7)
{
 int VAR_8;

 if (VAR_7->stschg_irq != -1) {
  VAR_8 = FUNC_4(VAR_7->stschg_irq, VAR_4,
      0, "pcmcia_stschg", VAR_7);
  if (VAR_8)
   return VAR_8;
 }







 if ((VAR_7->board_type == VAR_0) ||
     (VAR_7->board_type == VAR_1)) {
  VAR_8 = FUNC_5(VAR_7->insert_irq, VAR_5,
   VAR_6, 0, "pcmcia_insert", VAR_7);
  if (VAR_8)
   goto out1;

  VAR_8 = FUNC_5(VAR_7->eject_irq, VAR_5,
   VAR_6, 0, "pcmcia_eject", VAR_7);
  if (VAR_8) {
   FUNC_2(VAR_7->insert_irq, VAR_7);
   goto out1;
  }


  if (FUNC_0(VAR_7))
   FUNC_1(VAR_7->eject_irq);
  else
   FUNC_1(VAR_7->insert_irq);
 } else {



  FUNC_3(VAR_7->insert_irq, VAR_2);
  VAR_8 = FUNC_4(VAR_7->insert_irq, VAR_3,
      0, "pcmcia_carddetect", VAR_7);

  if (VAR_8)
   goto out1;
 }

 return 0;

out1:
 if (VAR_7->stschg_irq != -1)
  FUNC_2(VAR_7->stschg_irq, VAR_7);

 return VAR_8;
}
