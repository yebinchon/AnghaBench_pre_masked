
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct macb {TYPE_1__* pdev; scalar_t__ ptp_clock; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct macb*) ;
 struct macb* FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct net_device *VAR_1)
{
 struct macb *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->ptp_clock)
  FUNC_3(VAR_2->ptp_clock);

 FUNC_1(VAR_2);

 FUNC_0(&VAR_2->pdev->dev, "%s ptp clock unregistered.\n",
   VAR_0);
}
