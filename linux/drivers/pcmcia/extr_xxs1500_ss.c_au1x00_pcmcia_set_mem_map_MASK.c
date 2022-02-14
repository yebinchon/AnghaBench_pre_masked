
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xxs1500_pcmcia_sock {scalar_t__ phys_mem; scalar_t__ phys_attr; } ;
struct pcmcia_socket {int dummy; } ;
struct pccard_mem_map {int flags; scalar_t__ card_start; scalar_t__ static_start; } ;


 int VAR_0 ;
 struct xxs1500_pcmcia_sock* FUNC_0 (struct pcmcia_socket*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_socket *VAR_1,
         struct pccard_mem_map *VAR_2)
{
 struct xxs1500_pcmcia_sock *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2->flags & VAR_0)
  VAR_2->static_start = VAR_3->phys_attr + VAR_2->card_start;
 else
  VAR_2->static_start = VAR_3->phys_mem + VAR_2->card_start;

 return 0;
}
