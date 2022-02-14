
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct device* parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;
struct soc_pcmcia_socket {TYPE_3__* stat; TYPE_2__ socket; } ;
struct gpio_desc {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct gpio_desc* desc; int name; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct gpio_desc*) ;
 int FUNC_3 (struct device*,char*,int ,int) ;
 struct gpio_desc* FUNC_4 (struct device*,int ,int ) ;

int FUNC_5(struct soc_pcmcia_socket *VAR_1)
{
 struct device *VAR_2 = VAR_1->socket.dev.parent;
 struct gpio_desc *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1->stat); VAR_4++) {
  if (!VAR_1->stat[VAR_4].name)
   continue;

  VAR_3 = FUNC_4(VAR_2, VAR_1->stat[VAR_4].name, VAR_0);
  if (FUNC_1(VAR_3)) {
   FUNC_3(VAR_2, "Failed to get GPIO for %s: %ld\n",
    VAR_1->stat[VAR_4].name, FUNC_2(VAR_3));
   return FUNC_2(VAR_3);
  }

  VAR_1->stat[VAR_4].desc = VAR_3;
 }

 return 0;
}
