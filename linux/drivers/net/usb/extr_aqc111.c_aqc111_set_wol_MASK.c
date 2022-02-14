
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {struct aqc111_data* driver_priv; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct aqc111_data {int wol_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct usbnet* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3,
     struct ethtool_wolinfo *VAR_4)
{
 struct usbnet *VAR_5 = FUNC_0(VAR_3);
 struct aqc111_data *VAR_6 = VAR_5->driver_priv;

 if (VAR_4->wolopts & ~VAR_2)
  return -VAR_1;

 VAR_6->wol_flags = 0;
 if (VAR_4->wolopts & VAR_2)
  VAR_6->wol_flags |= VAR_0;

 return 0;
}
