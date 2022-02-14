
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {struct aqc111_data* driver_priv; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int eedump_len; int regdump_len; int fw_version; int driver; } ;
struct TYPE_2__ {int major; int minor; int rev; } ;
struct aqc111_data {TYPE_1__ fw_ver; } ;


 int VAR_0 ;
 struct usbnet* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int,char*,int,int,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct net_device*,struct ethtool_drvinfo*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1,
          struct ethtool_drvinfo *VAR_2)
{
 struct usbnet *VAR_3 = FUNC_0(VAR_1);
 struct aqc111_data *VAR_4 = VAR_3->driver_priv;


 FUNC_3(VAR_1, VAR_2);
 FUNC_2(VAR_2->driver, VAR_0, sizeof(VAR_2->driver));
 FUNC_1(VAR_2->fw_version, sizeof(VAR_2->fw_version), "%u.%u.%u",
   VAR_4->fw_ver.major,
   VAR_4->fw_ver.minor,
   VAR_4->fw_ver.rev);
 VAR_2->eedump_len = 0x00;
 VAR_2->regdump_len = 0x00;
}
