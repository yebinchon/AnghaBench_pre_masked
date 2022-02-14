
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clock; } ;
struct ravb_private {TYPE_1__ ptp; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ravb_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,int ,int ) ;

void FUNC_3(struct net_device *VAR_2)
{
 struct ravb_private *VAR_3 = FUNC_0(VAR_2);

 FUNC_2(VAR_2, 0, VAR_0);
 FUNC_2(VAR_2, 0, VAR_1);

 FUNC_1(VAR_3->ptp.clock);
}
