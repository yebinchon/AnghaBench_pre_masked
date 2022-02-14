
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int port_enabled; int mac_work; int monitor_work; int net_dev; int mac_lock; } ;


 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct efx_nic*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct efx_nic*,int ,int ,char*) ;

__attribute__((used)) static void FUNC_9(struct efx_nic *VAR_1)
{
 FUNC_8(VAR_1, VAR_0, VAR_1->net_dev, "stop port\n");

 FUNC_0(VAR_1);

 FUNC_4(&VAR_1->mac_lock);
 VAR_1->port_enabled = 0;
 FUNC_5(&VAR_1->mac_lock);


 FUNC_6(VAR_1->net_dev);
 FUNC_7(VAR_1->net_dev);

 FUNC_1(&VAR_1->monitor_work);
 FUNC_3(VAR_1);
 FUNC_2(&VAR_1->mac_work);
}
