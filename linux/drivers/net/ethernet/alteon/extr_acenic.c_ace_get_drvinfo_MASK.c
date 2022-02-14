
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;
struct ace_private {int firmware_major; int firmware_minor; int firmware_fix; scalar_t__ pdev; } ;


 struct ace_private* FUNC_0 (struct net_device*) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int,char*,int,int,int) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0,
       struct ethtool_drvinfo *VAR_1)
{
 struct ace_private *VAR_2 = FUNC_0(VAR_0);

 FUNC_3(VAR_1->driver, "acenic", sizeof(VAR_1->driver));
 FUNC_2(VAR_1->version, sizeof(VAR_1->version), "%i.%i.%i",
   VAR_2->firmware_major, VAR_2->firmware_minor,
   VAR_2->firmware_fix);

 if (VAR_2->pdev)
  FUNC_3(VAR_1->bus_info, FUNC_1(VAR_2->pdev),
   sizeof(VAR_1->bus_info));

}
