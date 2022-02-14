
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;
struct fec_enet_private {scalar_t__ ptp_clock; int time_keep; } ;


 int FUNC_0 (int *) ;
 struct fec_enet_private* FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_2(VAR_0);
 struct fec_enet_private *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(&VAR_2->time_keep);
 if (VAR_2->ptp_clock)
  FUNC_3(VAR_2->ptp_clock);
}
