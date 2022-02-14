
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rmnet_priv {TYPE_1__* real_dev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int ifindex; } ;


 struct rmnet_priv* FUNC_0 (struct net_device const*) ;

__attribute__((used)) static int FUNC_1(const struct net_device *VAR_0)
{
 struct rmnet_priv *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->real_dev->ifindex;
}
