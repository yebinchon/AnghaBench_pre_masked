
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {struct net_device* priv; TYPE_1__** resource; int dev; } ;
struct net_device {int dummy; } ;
struct local_info {scalar_t__ dingo_ccr; scalar_t__ dingo; } ;
struct TYPE_2__ {scalar_t__ end; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__) ;
 struct local_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pcmcia_device*) ;

__attribute__((used)) static void
FUNC_4(struct pcmcia_device *VAR_0)
{
 FUNC_0(&VAR_0->dev, "release\n");

 if (VAR_0->resource[2]->end) {
  struct net_device *VAR_1 = VAR_0->priv;
  struct local_info *VAR_2 = FUNC_2(VAR_1);
  if (VAR_2->dingo)
   FUNC_1(VAR_2->dingo_ccr - 0x0800);
 }
 FUNC_3(VAR_0);
}
