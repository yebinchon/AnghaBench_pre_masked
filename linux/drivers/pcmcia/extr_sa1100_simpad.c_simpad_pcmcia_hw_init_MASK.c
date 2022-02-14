
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_pcmcia_socket {TYPE_1__* stat; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct soc_pcmcia_socket*) ;

__attribute__((used)) static int FUNC_2(struct soc_pcmcia_socket *VAR_6)
{

 FUNC_0(VAR_4|VAR_5|VAR_0|VAR_1);

 VAR_6->stat[VAR_2].name = "cf-detect";
 VAR_6->stat[VAR_3].name = "cf-ready";

 return FUNC_1(VAR_6);
}
