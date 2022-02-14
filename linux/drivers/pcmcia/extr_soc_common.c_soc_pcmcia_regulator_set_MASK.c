
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_pcmcia_regulator {int on; int reg; } ;
struct TYPE_2__ {int dev; } ;
struct soc_pcmcia_socket {struct soc_pcmcia_regulator vcc; TYPE_1__ socket; } ;


 int FUNC_0 (int *,char*,char*,int,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int) ;

int FUNC_5(struct soc_pcmcia_socket *VAR_0,
 struct soc_pcmcia_regulator *VAR_1, int VAR_2)
{
 bool VAR_3;
 int VAR_4;

 if (!VAR_1->reg)
  return 0;

 VAR_3 = VAR_2 != 0;
 if (VAR_1->on == VAR_3)
  return 0;

 if (VAR_3) {
  VAR_4 = FUNC_4(VAR_1->reg, VAR_2 * 100000, VAR_2 * 100000);
  if (VAR_4) {
   int VAR_5 = FUNC_3(VAR_1->reg) / 100000;

   FUNC_0(&VAR_0->socket.dev,
     "CS requested %s=%u.%uV, applying %u.%uV\n",
     VAR_1 == &VAR_0->vcc ? "Vcc" : "Vpp",
     VAR_2 / 10, VAR_2 % 10, VAR_5 / 10, VAR_5 % 10);
  }

  VAR_4 = FUNC_2(VAR_1->reg);
 } else {
  VAR_4 = FUNC_1(VAR_1->reg);
 }
 if (VAR_4 == 0)
  VAR_1->on = VAR_3;

 return VAR_4;
}
