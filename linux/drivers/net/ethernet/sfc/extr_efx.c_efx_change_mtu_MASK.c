
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct efx_nic {int mac_lock; int net_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct efx_nic* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct efx_nic*,int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_1, int VAR_2)
{
 struct efx_nic *VAR_3 = FUNC_8(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_9(VAR_3, VAR_0, VAR_3->net_dev, "changing MTU to %d\n", VAR_2);

 FUNC_2(VAR_3);
 FUNC_5(VAR_3);

 FUNC_6(&VAR_3->mac_lock);
 VAR_1->mtu = VAR_2;
 FUNC_3(VAR_3);
 FUNC_7(&VAR_3->mac_lock);

 FUNC_4(VAR_3);
 FUNC_1(VAR_3);
 return 0;
}
