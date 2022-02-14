
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_pcmcia_socket {int clk; TYPE_2__* ops; TYPE_1__* stat; } ;
struct TYPE_4__ {int (* hw_shutdown ) (struct soc_pcmcia_socket*) ;} ;
struct TYPE_3__ {scalar_t__ irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,struct soc_pcmcia_socket*) ;
 int FUNC_2 (struct soc_pcmcia_socket*) ;

__attribute__((used)) static void FUNC_3(struct soc_pcmcia_socket *VAR_0,
 unsigned int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  if (VAR_0->stat[VAR_2].irq)
   FUNC_1(VAR_0->stat[VAR_2].irq, VAR_0);

 if (VAR_0->ops->hw_shutdown)
  VAR_0->ops->hw_shutdown(VAR_0);

 FUNC_0(VAR_0->clk);
}
