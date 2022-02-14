
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int flags; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;


 char* VAR_0 ;
 char* VAR_1 ;


 int VAR_2 ;
 struct tun_struct* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3, struct ethtool_drvinfo *VAR_4)
{
 struct tun_struct *VAR_5 = FUNC_0(VAR_3);

 FUNC_1(VAR_4->driver, VAR_0, sizeof(VAR_4->driver));
 FUNC_1(VAR_4->version, VAR_1, sizeof(VAR_4->version));

 switch (VAR_5->flags & VAR_2) {
 case 128:
  FUNC_1(VAR_4->bus_info, "tun", sizeof(VAR_4->bus_info));
  break;
 case 129:
  FUNC_1(VAR_4->bus_info, "tap", sizeof(VAR_4->bus_info));
  break;
 }
}
