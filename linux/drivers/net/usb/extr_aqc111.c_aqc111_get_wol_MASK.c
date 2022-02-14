
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {struct aqc111_data* driver_priv; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; int supported; } ;
struct aqc111_data {int wol_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usbnet* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2,
      struct ethtool_wolinfo *VAR_3)
{
 struct usbnet *VAR_4 = FUNC_0(VAR_2);
 struct aqc111_data *VAR_5 = VAR_4->driver_priv;

 VAR_3->supported = VAR_1;
 VAR_3->wolopts = 0;

 if (VAR_5->wol_flags & VAR_0)
  VAR_3->wolopts |= VAR_1;
}
