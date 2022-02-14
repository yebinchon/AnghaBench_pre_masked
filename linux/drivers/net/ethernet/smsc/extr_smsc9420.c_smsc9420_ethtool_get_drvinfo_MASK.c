
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc9420_pdata {int pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int version; int bus_info; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct smsc9420_pdata* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
      struct ethtool_drvinfo *VAR_3)
{
 struct smsc9420_pdata *VAR_4 = FUNC_0(VAR_2);

 FUNC_2(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_2(VAR_3->bus_info, FUNC_1(VAR_4->pdev),
  sizeof(VAR_3->bus_info));
 FUNC_2(VAR_3->version, VAR_1, sizeof(VAR_3->version));
}
