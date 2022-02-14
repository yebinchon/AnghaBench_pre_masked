
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct niu_vpd {int fcode_major; int fcode_minor; } ;
struct niu {int pdev; TYPE_1__* parent; struct niu_vpd vpd; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;
struct TYPE_2__ {scalar_t__ plat_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct niu* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,char*,int,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3,
       struct ethtool_drvinfo *VAR_4)
{
 struct niu *VAR_5 = FUNC_0(VAR_3);
 struct niu_vpd *VAR_6 = &VAR_5->vpd;

 FUNC_3(VAR_4->driver, VAR_0, sizeof(VAR_4->driver));
 FUNC_3(VAR_4->version, VAR_1, sizeof(VAR_4->version));
 FUNC_2(VAR_4->fw_version, sizeof(VAR_4->fw_version), "%d.%d",
  VAR_6->fcode_major, VAR_6->fcode_minor);
 if (VAR_5->parent->plat_type != VAR_2)
  FUNC_3(VAR_4->bus_info, FUNC_1(VAR_5->pdev),
   sizeof(VAR_4->bus_info));
}
