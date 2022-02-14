
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ql_adapter {int wol; int ndev; TYPE_1__* pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct TYPE_2__ {unsigned short subsystem_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ql_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*,...) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_6, struct ethtool_wolinfo *VAR_7)
{
 struct ql_adapter *VAR_8 = FUNC_0(VAR_6);
 unsigned short VAR_9 = VAR_8->pdev->subsystem_device;


 if (VAR_9 != VAR_2 &&
   VAR_9 != VAR_3) {
  FUNC_1(VAR_8, VAR_5, VAR_8->ndev,
    "WOL is only supported for mezz card\n");
  return -VAR_1;
 }
 if (VAR_7->wolopts & ~VAR_4)
  return -VAR_0;
 VAR_8->wol = VAR_7->wolopts;

 FUNC_1(VAR_8, VAR_5, VAR_8->ndev, "Set wol option 0x%x\n", VAR_8->wol);
 return 0;
}
