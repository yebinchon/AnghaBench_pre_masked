
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {int clk; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct soc_pcmcia_socket*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct soc_pcmcia_socket *VAR_0)
{
 unsigned long VAR_1 = FUNC_0(VAR_0->clk);
 return FUNC_1(VAR_0, VAR_1 / 10000);
}
