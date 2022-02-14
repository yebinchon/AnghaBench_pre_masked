
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_pcmcia_socket {scalar_t__ nr; TYPE_1__* stat; } ;
struct TYPE_2__ {char* name; int gpio; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(struct soc_pcmcia_socket *VAR_8)
{
 int VAR_9;

 if (VAR_8->nr == 0) {
  VAR_9 = FUNC_1(VAR_7,
    FUNC_0(VAR_7));

  VAR_8->stat[VAR_4].gpio = VAR_3;
  VAR_8->stat[VAR_4].name = "PCMCIA CD";
  VAR_8->stat[VAR_5].gpio = VAR_2;
  VAR_8->stat[VAR_5].name = "PCMCIA Ready";
 } else {
  VAR_9 = FUNC_1(VAR_6,
    FUNC_0(VAR_6));

  VAR_8->stat[VAR_4].gpio = VAR_1;
  VAR_8->stat[VAR_4].name = "CF CD";
  VAR_8->stat[VAR_5].gpio = VAR_0;
  VAR_8->stat[VAR_5].name = "CF Ready";
 }

 return VAR_9;
}
