
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_pcmcia_socket {TYPE_1__* stat; } ;
struct TYPE_2__ {scalar_t__ irq; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct soc_pcmcia_socket *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->stat); VAR_2++)
  if (VAR_1->stat[VAR_2].irq)
   FUNC_1(VAR_1->stat[VAR_2].irq, VAR_0);
}
