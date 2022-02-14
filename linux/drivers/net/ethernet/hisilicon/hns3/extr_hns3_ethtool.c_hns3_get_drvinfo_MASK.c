
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct hns3_nic_priv {struct hnae3_handle* ae_handle; } ;
struct hnae3_handle {TYPE_3__* ae_algo; TYPE_4__* pdev; } ;
struct ethtool_drvinfo {char* version; char* driver; char* bus_info; int fw_version; } ;
struct TYPE_8__ {TYPE_1__* driver; } ;
struct TYPE_7__ {TYPE_2__* ops; } ;
struct TYPE_6__ {int (* get_fw_version ) (struct hnae3_handle*) ;} ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_9 ;
 int FUNC_1 (struct net_device*,char*) ;
 struct hns3_nic_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,int,char*,int ,int ,int ,int ) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (struct hnae3_handle*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_10,
        struct ethtool_drvinfo *VAR_11)
{
 struct hns3_nic_priv *VAR_12 = FUNC_2(VAR_10);
 struct hnae3_handle *VAR_13 = VAR_12->ae_handle;
 u32 VAR_14;

 if (!VAR_13->ae_algo->ops->get_fw_version) {
  FUNC_1(VAR_10, "could not get fw version!\n");
  return;
 }

 FUNC_5(VAR_11->version, VAR_9,
  sizeof(VAR_11->version));
 VAR_11->version[sizeof(VAR_11->version) - 1] = '\0';

 FUNC_5(VAR_11->driver, VAR_13->pdev->driver->name,
  sizeof(VAR_11->driver));
 VAR_11->driver[sizeof(VAR_11->driver) - 1] = '\0';

 FUNC_5(VAR_11->bus_info, FUNC_3(VAR_13->pdev),
  sizeof(VAR_11->bus_info));
 VAR_11->bus_info[VAR_0 - 1] = '\0';

 VAR_14 = VAR_12->ae_handle->ae_algo->ops->get_fw_version(VAR_13);

 FUNC_4(VAR_11->fw_version, sizeof(VAR_11->fw_version),
   "%lu.%lu.%lu.%lu",
   FUNC_0(VAR_14, VAR_7,
     VAR_8),
   FUNC_0(VAR_14, VAR_5,
     VAR_6),
   FUNC_0(VAR_14, VAR_3,
     VAR_4),
   FUNC_0(VAR_14, VAR_1,
     VAR_2));
}
