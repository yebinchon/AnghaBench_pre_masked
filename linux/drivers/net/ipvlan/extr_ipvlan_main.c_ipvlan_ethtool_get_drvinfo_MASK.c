
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {int version; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2,
           struct ethtool_drvinfo *VAR_3)
{
 FUNC_0(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_0(VAR_3->version, VAR_1, sizeof(VAR_3->version));
}
