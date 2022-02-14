
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int * prod_id; struct net_device* priv; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct pcmcia_device*,struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_0)
{
    struct net_device *VAR_1 = VAR_0->priv;


    if (!FUNC_1(VAR_0, VAR_1))
     return 0;


    if (VAR_0->prod_id[2]) {
     if (FUNC_0(VAR_1, VAR_0->prod_id[2]) == 0)
      return 0;
    }
    return -1;
}
