
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tulip_private {int timer; int * phys; struct net_device* dev; } ;
struct timer_list {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct tulip_private* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct net_device*,char*,int ,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_1 ;
 struct tulip_private* VAR_2 ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_7 (struct net_device*,int ,int) ;

void FUNC_8(struct timer_list *VAR_4)
{
 struct tulip_private *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_1);
 struct net_device *VAR_6 = VAR_5->dev;
 int VAR_7 = 2*VAR_0;

 if (VAR_3 > 1)
  FUNC_3(VAR_6, "Comet link status %04x partner capability %04x\n",
      FUNC_7(VAR_6, VAR_5->phys[0], 1),
      FUNC_7(VAR_6, VAR_5->phys[0], 5));



 if (FUNC_6(VAR_6) < 0)
  { FUNC_4(VAR_6); }
 else
  { FUNC_5(VAR_6); }
 FUNC_2(&VAR_5->timer, FUNC_0(VAR_7));
}
