
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iommu_domain*,struct device*) ;
 int FUNC_1 (struct iommu_domain*,struct device*) ;
 scalar_t__ FUNC_2 (struct device*,int ) ;
 struct device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, void *VAR_3)
{
 struct iommu_domain *VAR_4 = VAR_3;
 struct device *VAR_5;

 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5) {
  if (FUNC_2(VAR_5, VAR_1))
   return FUNC_1(VAR_4, VAR_5);
  else
   return FUNC_0(VAR_4, VAR_5);
 }

 return -VAR_0;
}
