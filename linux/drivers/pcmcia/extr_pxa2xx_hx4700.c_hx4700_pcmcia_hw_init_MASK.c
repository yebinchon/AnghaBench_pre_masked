
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_pcmcia_socket {TYPE_1__* stat; } ;
struct TYPE_2__ {char* name; int gpio; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct soc_pcmcia_socket *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5, FUNC_0(VAR_5));
 if (VAR_7)
  goto out;
 FUNC_3(FUNC_2(VAR_1), VAR_2);

 VAR_6->stat[VAR_3].gpio = VAR_1;
 VAR_6->stat[VAR_3].name = "PCMCIA CD";
 VAR_6->stat[VAR_4].gpio = VAR_0;
 VAR_6->stat[VAR_4].name = "PCMCIA Ready";

out:
 return VAR_7;
}
