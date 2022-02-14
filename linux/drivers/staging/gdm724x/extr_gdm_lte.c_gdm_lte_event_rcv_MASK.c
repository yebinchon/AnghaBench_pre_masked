
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct nic {TYPE_1__* phy_dev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int priv_dev; int (* send_hci_func ) (int ,void*,int,int *,int *) ;} ;


 struct nic* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,void*,int,int *,int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0, u16 VAR_1,
         void *VAR_2, int VAR_3)
{
 struct nic *VAR_4 = FUNC_0(VAR_0);

 VAR_4->phy_dev->send_hci_func(VAR_4->phy_dev->priv_dev, VAR_2, VAR_3, ((void*)0),
        ((void*)0));
}
