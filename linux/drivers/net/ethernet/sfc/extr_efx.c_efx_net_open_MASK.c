
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct efx_nic {int phy_mode; scalar_t__ state; int net_dev; scalar_t__ reset_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*) ;
 scalar_t__ FUNC_2 (struct efx_nic*) ;
 scalar_t__ FUNC_3 (struct efx_nic*,int ) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*) ;
 int VAR_5 ;
 struct efx_nic* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct efx_nic*,int ,int ,char*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;

int FUNC_10(struct net_device *VAR_6)
{
 struct efx_nic *VAR_7 = FUNC_6(VAR_6);
 int VAR_8;

 FUNC_7(VAR_7, VAR_5, VAR_7->net_dev, "opening device on CPU %d\n",
    FUNC_9());

 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8)
  return VAR_8;
 if (VAR_7->phy_mode & VAR_2)
  return -VAR_0;
 if (FUNC_2(VAR_7) && FUNC_3(VAR_7, VAR_3))
  return -VAR_1;



 FUNC_1(VAR_7);

 FUNC_5(VAR_7);
 if (VAR_7->state == VAR_4 || VAR_7->reset_pending)
  FUNC_8(VAR_7->net_dev);
 FUNC_4(VAR_7);
 return 0;
}
