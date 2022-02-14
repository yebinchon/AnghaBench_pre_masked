
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct iommu_domain* iommu_domain; TYPE_2__* dev; } ;
struct venus_core {int use_tz; TYPE_1__ fw; TYPE_2__* dev; } ;
struct platform_device_info {int dma_mask; int name; TYPE_2__* parent; int * fwnode; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct iommu_domain {int dummy; } ;
struct device_node {int name; int fwnode; } ;
typedef int info ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (struct iommu_domain*,TYPE_2__*) ;
 struct iommu_domain* FUNC_5 (int *) ;
 int FUNC_6 (struct iommu_domain*) ;
 int FUNC_7 (struct platform_device_info*,int ,int) ;
 int FUNC_8 (TYPE_2__*,struct device_node*,int) ;
 struct device_node* FUNC_9 (struct device_node*,char*) ;
 int FUNC_10 (struct device_node*) ;
 int VAR_1 ;
 struct platform_device* FUNC_11 (struct platform_device_info*) ;
 int FUNC_12 (struct platform_device*) ;

int FUNC_13(struct venus_core *VAR_2)
{
 struct platform_device_info VAR_3;
 struct iommu_domain *VAR_4;
 struct platform_device *VAR_5;
 struct device_node *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_9(VAR_2->dev->of_node, "video-firmware");
 if (!VAR_6) {
  VAR_2->use_tz = 1;
  return 0;
 }

 FUNC_7(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.fwnode = &VAR_6->fwnode;
 VAR_3.parent = VAR_2->dev;
 VAR_3.name = VAR_6->name;
 VAR_3.dma_mask = FUNC_0(32);

 VAR_5 = FUNC_11(&VAR_3);
 if (FUNC_1(VAR_5)) {
  FUNC_10(VAR_6);
  return FUNC_2(VAR_5);
 }

 VAR_5->dev.of_node = VAR_6;

 VAR_7 = FUNC_8(&VAR_5->dev, VAR_6, 1);
 if (VAR_7) {
  FUNC_3(VAR_2->dev, "dma configure fail\n");
  goto err_unregister;
 }

 VAR_2->fw.dev = &VAR_5->dev;

 VAR_4 = FUNC_5(&VAR_1);
 if (!VAR_4) {
  FUNC_3(VAR_2->fw.dev, "Failed to allocate iommu domain\n");
  VAR_7 = -VAR_0;
  goto err_unregister;
 }

 VAR_7 = FUNC_4(VAR_4, VAR_2->fw.dev);
 if (VAR_7) {
  FUNC_3(VAR_2->fw.dev, "could not attach device\n");
  goto err_iommu_free;
 }

 VAR_2->fw.iommu_domain = VAR_4;

 FUNC_10(VAR_6);

 return 0;

err_iommu_free:
 FUNC_6(VAR_4);
err_unregister:
 FUNC_12(VAR_5);
 FUNC_10(VAR_6);
 return VAR_7;
}
