
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_pcmcia_socket {TYPE_1__* stat; } ;
struct TYPE_2__ {scalar_t__ irq; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct soc_pcmcia_socket *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->stat); VAR_3++)
  if (VAR_2->stat[VAR_3].irq) {
   FUNC_1(VAR_2->stat[VAR_3].irq, VAR_1);
   FUNC_1(VAR_2->stat[VAR_3].irq, VAR_0);
  }
}
