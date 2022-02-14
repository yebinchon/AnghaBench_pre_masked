
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcaspi {TYPE_1__* spi_dev; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;
struct TYPE_2__ {int dev; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* FUNC_0 (int *) ;
 struct qcaspi* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_2, struct ethtool_drvinfo *VAR_3)
{
 struct qcaspi *VAR_4 = FUNC_1(VAR_2);

 FUNC_2(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_2(VAR_3->version, VAR_1, sizeof(VAR_3->version));
 FUNC_2(VAR_3->fw_version, "QCA7000", sizeof(VAR_3->fw_version));
 FUNC_2(VAR_3->bus_info, FUNC_0(&VAR_4->spi_dev->dev),
  sizeof(VAR_3->bus_info));
}
