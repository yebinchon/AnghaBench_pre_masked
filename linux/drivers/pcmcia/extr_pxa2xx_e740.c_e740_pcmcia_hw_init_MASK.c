
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_pcmcia_socket {scalar_t__ nr; TYPE_1__* stat; } ;
struct TYPE_2__ {char* name; int gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static int FUNC_0(struct soc_pcmcia_socket *VAR_6)
{
 if (VAR_6->nr == 0) {
  VAR_6->stat[VAR_4].gpio = VAR_0;
  VAR_6->stat[VAR_4].name = "CF card detect";
  VAR_6->stat[VAR_5].gpio = VAR_2;
  VAR_6->stat[VAR_5].name = "CF ready";
 } else {
  VAR_6->stat[VAR_4].gpio = VAR_1;
  VAR_6->stat[VAR_4].name = "Wifi switch";
  VAR_6->stat[VAR_5].gpio = VAR_3;
  VAR_6->stat[VAR_5].name = "Wifi ready";
 }

 return 0;
}
