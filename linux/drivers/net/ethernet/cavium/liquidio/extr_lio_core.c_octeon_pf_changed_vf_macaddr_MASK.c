
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct octeon_device {TYPE_2__* pci_dev; TYPE_3__* props; } ;
struct net_device {int * dev_addr; } ;
struct TYPE_4__ {int macaddr_is_admin_asgnd; int hw_addr; } ;
struct lio {TYPE_1__ linfo; } ;
struct TYPE_6__ {struct net_device* netdev; } ;
struct TYPE_5__ {int dev; } ;


 struct lio* FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

void FUNC_7(struct octeon_device *VAR_1, u8 *VAR_2)
{
 bool VAR_3 = 0;
 struct net_device *VAR_4;
 struct lio *VAR_5;

 FUNC_5();

 VAR_4 = VAR_1->props[0].netdev;
 VAR_5 = FUNC_0(VAR_4);

 VAR_5->linfo.macaddr_is_admin_asgnd = 1;

 if (!FUNC_4(VAR_4->dev_addr, VAR_2)) {
  VAR_3 = 1;
  FUNC_3(VAR_4->dev_addr, VAR_2);
  FUNC_3(((u8 *)&VAR_5->linfo.hw_addr) + 2, VAR_2);
  FUNC_1(VAR_0, VAR_4);
 }

 FUNC_6();

 if (VAR_3)
  FUNC_2(&VAR_1->pci_dev->dev,
    "PF changed VF's MAC address to %pM\n", VAR_2);




}
