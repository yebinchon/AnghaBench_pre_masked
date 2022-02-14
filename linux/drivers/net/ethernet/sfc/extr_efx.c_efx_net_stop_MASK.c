
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct efx_nic {int net_dev; } ;


 int FUNC_0 (struct efx_nic*) ;
 int VAR_0 ;
 struct efx_nic* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*,int ) ;
 int FUNC_3 () ;

int FUNC_4(struct net_device *VAR_1)
{
 struct efx_nic *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(VAR_2, VAR_0, VAR_2->net_dev, "closing on CPU %d\n",
    FUNC_3());


 FUNC_0(VAR_2);

 return 0;
}
