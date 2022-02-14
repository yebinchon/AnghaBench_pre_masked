
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void* reg; } ;
struct TYPE_5__ {struct device* parent; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;
struct soc_pcmcia_socket {TYPE_4__* stat; TYPE_3__ vcc; void* gpio_bus_enable; void* gpio_reset; TYPE_2__ socket; } ;
struct device {int dummy; } ;
struct TYPE_8__ {char* name; void* desc; } ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,char*,int ) ;
 void* FUNC_5 (struct device*,char*,int ) ;
 void* FUNC_6 (struct device*,char*) ;
 char** VAR_2 ;

__attribute__((used)) static int FUNC_7(struct soc_pcmcia_socket *VAR_3)
{
 struct device *VAR_4 = VAR_3->socket.dev.parent;
 int VAR_5;

 VAR_3->gpio_reset = FUNC_4(VAR_4, "reset", VAR_1);
 if (FUNC_1(VAR_3->gpio_reset))
  return FUNC_2(VAR_3->gpio_reset);

 VAR_3->gpio_bus_enable = FUNC_5(VAR_4, "bus-enable",
             VAR_1);
 if (FUNC_1(VAR_3->gpio_bus_enable))
  return FUNC_2(VAR_3->gpio_bus_enable);

 VAR_3->vcc.reg = FUNC_6(VAR_4, "vcc");
 if (FUNC_1(VAR_3->vcc.reg))
  return FUNC_2(VAR_3->vcc.reg);

 if (!VAR_3->vcc.reg)
  FUNC_3(VAR_4,
    "no Vcc regulator provided, ignoring Vcc controls\n");

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  VAR_3->stat[VAR_5].name = VAR_2[VAR_5];
  VAR_3->stat[VAR_5].desc = FUNC_5(VAR_4,
     VAR_2[VAR_5], VAR_0);
  if (FUNC_1(VAR_3->stat[VAR_5].desc))
   return FUNC_2(VAR_3->stat[VAR_5].desc);
 }
 return 0;
}
