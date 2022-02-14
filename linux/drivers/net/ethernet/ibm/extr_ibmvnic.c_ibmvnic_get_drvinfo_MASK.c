
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ibmvnic_adapter {int fw_version; } ;
struct ethtool_drvinfo {int fw_version; int version; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ibmvnic_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2,
    struct ethtool_drvinfo *VAR_3)
{
 struct ibmvnic_adapter *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(VAR_3->driver, VAR_1, sizeof(VAR_3->driver));
 FUNC_1(VAR_3->version, VAR_0, sizeof(VAR_3->version));
 FUNC_1(VAR_3->fw_version, VAR_4->fw_version,
  sizeof(VAR_3->fw_version));
}
