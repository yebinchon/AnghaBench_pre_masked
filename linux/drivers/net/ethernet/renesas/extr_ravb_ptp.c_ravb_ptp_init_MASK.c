
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int info; int clock; int default_addend; int current_addend; } ;
struct ravb_private {TYPE_1__ ptp; int lock; } ;
struct platform_device {int dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ravb_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct net_device*,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int ,int ,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct net_device *VAR_7, struct platform_device *VAR_8)
{
 struct ravb_private *VAR_9 = FUNC_0(VAR_7);
 unsigned long VAR_10;

 VAR_9->ptp.info = VAR_6;

 VAR_9->ptp.default_addend = FUNC_3(VAR_7, VAR_5);
 VAR_9->ptp.current_addend = VAR_9->ptp.default_addend;

 FUNC_5(&VAR_9->lock, VAR_10);
 FUNC_4(VAR_7, VAR_0, VAR_1, VAR_2);
 FUNC_2(VAR_7, VAR_0, VAR_3, VAR_4);
 FUNC_6(&VAR_9->lock, VAR_10);

 VAR_9->ptp.clock = FUNC_1(&VAR_9->ptp.info, &VAR_8->dev);
}
