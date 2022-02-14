
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct device {int dummy; } ;
struct be_dma_mem {int size; int dma; int va; } ;
struct be_cmd_req_acpi_wol_magic_config {int dummy; } ;
struct be_adapter {int wol_cap; int wol_en; TYPE_2__* pdev; TYPE_1__* netdev; } ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct be_adapter*,int *,struct be_dma_mem*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,int,int *,int ) ;
 int FUNC_5 (struct device*,int,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 struct be_adapter* FUNC_8 (struct net_device*) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_8, struct ethtool_wolinfo *VAR_9)
{
 struct be_adapter *VAR_10 = FUNC_8(VAR_8);
 struct device *VAR_11 = &VAR_10->pdev->dev;
 struct be_dma_mem VAR_12;
 u8 VAR_13[VAR_3];
 bool VAR_14;
 int VAR_15;

 if (VAR_9->wolopts & ~VAR_7)
  return -VAR_2;

 if (!(VAR_10->wol_cap & VAR_0)) {
  FUNC_3(&VAR_10->pdev->dev, "WOL not supported\n");
  return -VAR_2;
 }

 VAR_12.size = sizeof(struct be_cmd_req_acpi_wol_magic_config);
 VAR_12.va = FUNC_4(VAR_11, VAR_12.size, &VAR_12.dma, VAR_4);
 if (!VAR_12.va)
  return -VAR_1;

 FUNC_6(VAR_13);

 VAR_14 = VAR_9->wolopts & VAR_7;
 if (VAR_14)
  FUNC_7(VAR_13, VAR_10->netdev->dev_addr);

 VAR_15 = FUNC_0(VAR_10, VAR_13, &VAR_12);
 if (VAR_15) {
  FUNC_2(VAR_11, "Could not set Wake-on-lan mac address\n");
  VAR_15 = FUNC_1(VAR_15);
  goto err;
 }

 FUNC_9(VAR_10->pdev, VAR_6, VAR_14);
 FUNC_9(VAR_10->pdev, VAR_5, VAR_14);

 VAR_10->wol_en = VAR_14 ? 1 : 0;

err:
 FUNC_5(VAR_11, VAR_12.size, VAR_12.va, VAR_12.dma);
 return VAR_15;
}
