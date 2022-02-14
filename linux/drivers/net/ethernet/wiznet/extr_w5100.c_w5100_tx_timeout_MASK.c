
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w5100_priv {int restart_work; TYPE_1__* ops; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ may_sleep; } ;


 struct w5100_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct w5100_priv *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->ops->may_sleep)
  FUNC_1(&VAR_1->restart_work);
 else
  FUNC_2(VAR_0);
}
