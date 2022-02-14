
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iommu_domain*,struct device*) ;
 int FUNC_1 (struct iommu_domain*,struct device*) ;
 scalar_t__ FUNC_2 (struct device*,int ) ;
 struct device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, void *VAR_2)
{
 struct iommu_domain *VAR_3 = VAR_2;
 struct device *VAR_4;

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4) {
  if (FUNC_2(VAR_4, VAR_0))
   FUNC_0(VAR_3, VAR_4);
  else
   FUNC_1(VAR_3, VAR_4);
 }

 return 0;
}
