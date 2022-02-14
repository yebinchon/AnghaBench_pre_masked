
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8xxxu_priv {int chip_cut; int mac_addr; int chip_name; int hi_pa; int has_gps; int has_bluetooth; int has_wifi; int ep_tx_count; int rx_paths; int tx_paths; int chip_vendor; TYPE_1__* udev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*,int ,char*,...) ;

__attribute__((used)) static void FUNC_1(struct rtl8xxxu_priv *VAR_0)
{
 struct device *VAR_1 = &VAR_0->udev->dev;
 char *VAR_2;

 switch (VAR_0->chip_cut) {
 case 0:
  VAR_2 = "A";
  break;
 case 1:
  VAR_2 = "B";
  break;
 case 2:
  VAR_2 = "C";
  break;
 case 3:
  VAR_2 = "D";
  break;
 case 4:
  VAR_2 = "E";
  break;
 default:
  VAR_2 = "unknown";
 }

 FUNC_0(VAR_1,
   "RTL%s rev %s (%s) %iT%iR, TX queues %i, WiFi=%i, BT=%i, GPS=%i, HI PA=%i\n",
   VAR_0->chip_name, VAR_2, VAR_0->chip_vendor, VAR_0->tx_paths,
   VAR_0->rx_paths, VAR_0->ep_tx_count, VAR_0->has_wifi,
   VAR_0->has_bluetooth, VAR_0->has_gps, VAR_0->hi_pa);

 FUNC_0(VAR_1, "RTL%s MAC: %pM\n", VAR_0->chip_name, VAR_0->mac_addr);
}
