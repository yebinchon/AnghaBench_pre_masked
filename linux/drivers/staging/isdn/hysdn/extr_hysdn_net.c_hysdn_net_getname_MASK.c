
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {char* name; } ;
struct TYPE_3__ {struct net_device* netif; } ;
typedef TYPE_1__ hysdn_card ;



char *
FUNC_0(hysdn_card *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netif;

 if (!VAR_1)
  return ("-");

 return (VAR_1->name);
}
