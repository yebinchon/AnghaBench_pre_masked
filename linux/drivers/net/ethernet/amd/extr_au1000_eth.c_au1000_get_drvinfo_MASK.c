
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;
struct au1000_private {int mac_id; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 struct au1000_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int,char*,char*,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_2, struct ethtool_drvinfo *VAR_3)
{
 struct au1000_private *VAR_4 = FUNC_0(VAR_2);

 FUNC_2(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_2(VAR_3->version, VAR_1, sizeof(VAR_3->version));
 FUNC_1(VAR_3->bus_info, sizeof(VAR_3->bus_info), "%s %d", VAR_0,
   VAR_4->mac_id);
}
