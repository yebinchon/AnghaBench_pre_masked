
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netfront_queue {int id; TYPE_1__* info; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct net_device* netdev; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct netdev_queue* FUNC_1 (struct net_device*,int ) ;
 scalar_t__ FUNC_2 (struct netfront_queue*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct netdev_queue*) ;
 int FUNC_5 (struct netdev_queue*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct netfront_queue *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->info->netdev;
 struct netdev_queue *VAR_2 = FUNC_1(VAR_1, VAR_0->id);

 if (FUNC_6(FUNC_4(VAR_2)) &&
     FUNC_2(VAR_0) &&
     FUNC_0(FUNC_3(VAR_1)))
  FUNC_5(FUNC_1(VAR_1, VAR_0->id));
}
