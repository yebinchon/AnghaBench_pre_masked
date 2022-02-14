
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netfront_queue {int napi; int rx; TYPE_1__* info; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct net_device* netdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct netfront_queue *VAR_3 = VAR_2;
 struct net_device *VAR_4 = VAR_3->info->netdev;

 if (FUNC_1(FUNC_3(VAR_4) &&
     FUNC_0(&VAR_3->rx)))
  FUNC_2(&VAR_3->napi);

 return VAR_0;
}
