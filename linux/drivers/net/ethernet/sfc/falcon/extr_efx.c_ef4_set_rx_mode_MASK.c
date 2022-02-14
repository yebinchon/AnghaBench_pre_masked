
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ef4_nic {int mac_work; int workqueue; scalar_t__ port_enabled; } ;


 struct ef4_nic* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct ef4_nic *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->port_enabled)
  FUNC_1(VAR_1->workqueue, &VAR_1->mac_work);

}
