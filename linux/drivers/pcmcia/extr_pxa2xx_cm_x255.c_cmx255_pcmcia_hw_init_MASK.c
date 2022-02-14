
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
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct soc_pcmcia_socket *VAR_7)
{
 int VAR_8 = FUNC_1(VAR_0, "PCCard reset");
 if (VAR_8)
  return VAR_8;
 FUNC_0(VAR_0, 0);

 if (VAR_7->nr == 0) {
  VAR_7->stat[VAR_5].gpio = VAR_1;
  VAR_7->stat[VAR_5].name = "PCMCIA0 CD";
  VAR_7->stat[VAR_6].gpio = VAR_2;
  VAR_7->stat[VAR_6].name = "PCMCIA0 RDY";
 } else {
  VAR_7->stat[VAR_5].gpio = VAR_3;
  VAR_7->stat[VAR_5].name = "PCMCIA1 CD";
  VAR_7->stat[VAR_6].gpio = VAR_4;
  VAR_7->stat[VAR_6].name = "PCMCIA1 RDY";
 }

 return 0;
}
