
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct net_device {int * netdev_ops; int flags; TYPE_1__ dev; } ;
struct c_can_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct c_can_priv*) ;
 int FUNC_1 (struct c_can_priv*) ;
 int FUNC_2 (struct net_device*) ;
 struct c_can_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*) ;

int FUNC_6(struct net_device *VAR_2)
{
 struct c_can_priv *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;






 FUNC_4(VAR_2->dev.parent);

 FUNC_1(VAR_3);

 VAR_2->flags |= VAR_0;
 VAR_2->netdev_ops = &VAR_1;

 VAR_4 = FUNC_5(VAR_2);
 if (VAR_4)
  FUNC_0(VAR_3);
 else
  FUNC_2(VAR_2);

 return VAR_4;
}
