
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {int dummy; } ;
struct arcom_pcmcia_pdata {int pwr_gpio; } ;


 int FUNC_0 (int ) ;
 struct arcom_pcmcia_pdata* FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct soc_pcmcia_socket *VAR_0)
{
 struct arcom_pcmcia_pdata *VAR_1 = FUNC_1();

 FUNC_0(VAR_1->pwr_gpio);
}
