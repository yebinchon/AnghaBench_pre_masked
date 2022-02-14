
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; struct iommu_domain* iommu_domain; } ;
struct venus_core {TYPE_1__ fw; } ;
struct iommu_domain {int dummy; } ;


 int FUNC_0 (struct iommu_domain*,int ) ;
 int FUNC_1 (struct iommu_domain*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct venus_core *VAR_0)
{
 struct iommu_domain *VAR_1;

 if (!VAR_0->fw.dev)
  return;

 VAR_1 = VAR_0->fw.iommu_domain;

 FUNC_0(VAR_1, VAR_0->fw.dev);
 FUNC_1(VAR_1);

 FUNC_2(FUNC_3(VAR_0->fw.dev));
}
