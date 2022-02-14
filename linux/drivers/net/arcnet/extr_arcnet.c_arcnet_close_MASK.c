
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int owner; int (* close ) (struct net_device*) ;int (* command ) (struct net_device*,int ) ;int (* intmask ) (struct net_device*,int ) ;} ;
struct arcnet_local {TYPE_1__ hw; int reply_tasklet; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 struct arcnet_local* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,int ) ;
 int FUNC_8 (struct net_device*,int ) ;
 int FUNC_9 (struct net_device*,int ) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct net_device *VAR_3)
{
 struct arcnet_local *VAR_4 = FUNC_4(VAR_3);

 FUNC_0(VAR_3, VAR_0);
 FUNC_1(&VAR_4->timer);

 FUNC_6(VAR_3);
 FUNC_5(VAR_3);

 FUNC_11(&VAR_4->reply_tasklet);


 VAR_4->hw.intmask(VAR_3, 0);
 VAR_4->hw.command(VAR_3, VAR_2);
 VAR_4->hw.command(VAR_3, VAR_1);
 FUNC_2(1);


 VAR_4->hw.close(VAR_3);
 FUNC_3(VAR_4->hw.owner);
 return 0;
}
