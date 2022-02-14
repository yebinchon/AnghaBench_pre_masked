
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fw_major; int fw_minor; int fw_rev; int fw_eng; int mfw_rev; int mbi_version; } ;
struct TYPE_4__ {TYPE_1__ common; } ;
struct qede_dev {int pdev; TYPE_2__ dev_info; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct qede_dev* FUNC_0 (struct net_device*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*,...) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_8,
        struct ethtool_drvinfo *VAR_9)
{
 char VAR_10[VAR_1], VAR_11[VAR_1];
 struct qede_dev *VAR_12 = FUNC_0(VAR_8);
 char VAR_13[VAR_1];

 FUNC_3(VAR_9->driver, "qede", sizeof(VAR_9->driver));

 FUNC_2(VAR_11, VAR_1, "%d.%d.%d.%d",
   VAR_12->dev_info.common.fw_major,
   VAR_12->dev_info.common.fw_minor,
   VAR_12->dev_info.common.fw_rev,
   VAR_12->dev_info.common.fw_eng);

 FUNC_2(VAR_10, VAR_1, "%d.%d.%d.%d",
   (VAR_12->dev_info.common.mfw_rev >> 24) & 0xFF,
   (VAR_12->dev_info.common.mfw_rev >> 16) & 0xFF,
   (VAR_12->dev_info.common.mfw_rev >> 8) & 0xFF,
   VAR_12->dev_info.common.mfw_rev & 0xFF);

 if ((FUNC_4(VAR_11) + FUNC_4(VAR_0) + FUNC_4("[storm]  ")) <
     sizeof(VAR_9->version))
  FUNC_2(VAR_9->version, sizeof(VAR_9->version),
    "%s [storm %s]", VAR_0, VAR_11);
 else
  FUNC_2(VAR_9->version, sizeof(VAR_9->version),
    "%s %s", VAR_0, VAR_11);

 if (VAR_12->dev_info.common.mbi_version) {
  FUNC_2(VAR_13, VAR_1, "%d.%d.%d",
    (VAR_12->dev_info.common.mbi_version &
     VAR_6) >> VAR_7,
    (VAR_12->dev_info.common.mbi_version &
     VAR_4) >> VAR_5,
    (VAR_12->dev_info.common.mbi_version &
     VAR_2) >> VAR_3);
  FUNC_2(VAR_9->fw_version, sizeof(VAR_9->fw_version),
    "mbi %s [mfw %s]", VAR_13, VAR_10);
 } else {
  FUNC_2(VAR_9->fw_version, sizeof(VAR_9->fw_version),
    "mfw %s", VAR_10);
 }

 FUNC_3(VAR_9->bus_info, FUNC_1(VAR_12->pdev), sizeof(VAR_9->bus_info));
}
