
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_pcmcia_socket {TYPE_1__* stat; } ;
struct TYPE_2__ {char* name; int gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct soc_pcmcia_socket *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_0, "PCCard reset");
 if (VAR_6)
  return VAR_6;
 FUNC_0(VAR_0, 0);

 VAR_5->stat[VAR_3].gpio = VAR_1;
 VAR_5->stat[VAR_3].name = "PCMCIA0 CD";
 VAR_5->stat[VAR_4].gpio = VAR_2;
 VAR_5->stat[VAR_4].name = "PCMCIA0 RDY";

 return VAR_6;
}
