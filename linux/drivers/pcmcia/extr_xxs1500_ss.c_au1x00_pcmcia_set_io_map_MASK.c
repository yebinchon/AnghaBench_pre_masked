
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xxs1500_pcmcia_sock {scalar_t__ virt_io; } ;
struct pcmcia_socket {int dummy; } ;
struct pccard_io_map {scalar_t__ start; scalar_t__ stop; } ;


 scalar_t__ VAR_0 ;
 struct xxs1500_pcmcia_sock* FUNC_0 (struct pcmcia_socket*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_socket *VAR_1,
        struct pccard_io_map *VAR_2)
{
 struct xxs1500_pcmcia_sock *VAR_3 = FUNC_0(VAR_1);

 VAR_2->start = (u32)VAR_3->virt_io;
 VAR_2->stop = VAR_2->start + VAR_0;

 return 0;
}
