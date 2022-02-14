
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_pcmcia_socket {TYPE_1__* stat; } ;
struct TYPE_2__ {char* name; int gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static int FUNC_0(struct soc_pcmcia_socket *VAR_4)
{
 VAR_4->stat[VAR_2].gpio = VAR_0;
 VAR_4->stat[VAR_2].name = "PCMCIA0 CD";
 VAR_4->stat[VAR_3].gpio = VAR_1;
 VAR_4->stat[VAR_3].name = "PCMCIA0 RDY";
 return 0;
}
