
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {scalar_t__ phydev; } ;
struct macb_queue {int napi; } ;
struct macb {unsigned int num_queues; TYPE_2__* pdev; TYPE_1__* ptp_info; int lock; struct macb_queue* queues; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* ptp_remove ) (struct net_device*) ;} ;


 int FUNC_0 (struct macb*) ;
 int FUNC_1 (struct macb*) ;
 int FUNC_2 (int *) ;
 struct macb* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_0)
{
 struct macb *VAR_1 = FUNC_3(VAR_0);
 struct macb_queue *VAR_2;
 unsigned long VAR_3;
 unsigned int VAR_4;

 FUNC_5(VAR_0);

 for (VAR_4 = 0, VAR_2 = VAR_1->queues; VAR_4 < VAR_1->num_queues; ++VAR_4, ++VAR_2)
  FUNC_2(&VAR_2->napi);

 if (VAR_0->phydev)
  FUNC_6(VAR_0->phydev);

 FUNC_8(&VAR_1->lock, VAR_3);
 FUNC_1(VAR_1);
 FUNC_4(VAR_0);
 FUNC_9(&VAR_1->lock, VAR_3);

 FUNC_0(VAR_1);

 if (VAR_1->ptp_info)
  VAR_1->ptp_info->ptp_remove(VAR_0);

 FUNC_7(&VAR_1->pdev->dev);

 return 0;
}
