
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int expires; } ;
struct frad_local {TYPE_1__ timer; struct net_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct frad_local* VAR_1 ;
 struct frad_local* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_3)
{
 struct frad_local *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);
 struct net_device *VAR_5 = VAR_4->dev;

 if (FUNC_2(VAR_5, VAR_0))
  FUNC_3(VAR_5);

 VAR_4->timer.expires = 1;
 FUNC_0(&VAR_4->timer);
}
