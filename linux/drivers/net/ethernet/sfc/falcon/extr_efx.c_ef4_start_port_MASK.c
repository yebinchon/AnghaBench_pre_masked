
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int port_enabled; int mac_lock; int net_dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ef4_nic*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ef4_nic*,int ,int ,char*) ;

__attribute__((used)) static void FUNC_5(struct ef4_nic *VAR_1)
{
 FUNC_4(VAR_1, VAR_0, VAR_1->net_dev, "start port\n");
 FUNC_0(VAR_1->port_enabled);

 FUNC_2(&VAR_1->mac_lock);
 VAR_1->port_enabled = 1;


 FUNC_1(VAR_1);

 FUNC_3(&VAR_1->mac_lock);
}
