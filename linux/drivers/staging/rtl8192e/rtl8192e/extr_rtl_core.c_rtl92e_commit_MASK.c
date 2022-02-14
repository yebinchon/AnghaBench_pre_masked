
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {scalar_t__ up; TYPE_1__* ops; int rtllib; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int (* stop_adapter ) (struct net_device*,int) ;} ;


 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct net_device*,int) ;

void FUNC_5(struct net_device *VAR_0)
{
 struct r8192_priv *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->up == 0)
  return;
 FUNC_3(VAR_1->rtllib, 0, 1);
 FUNC_1(VAR_0);
 VAR_1->ops->stop_adapter(VAR_0, 1);
 FUNC_0(VAR_0, 0);
}
