
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct dpaa2_eth_priv {int iommu_domain; TYPE_2__* net_dev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_3(struct dpaa2_eth_priv *VAR_2, u64 *VAR_3, int VAR_4)
{
 struct device *VAR_5 = VAR_2->net_dev->dev.parent;
 void *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6 = FUNC_1(VAR_2->iommu_domain, VAR_3[VAR_7]);
  FUNC_0(VAR_5, VAR_3[VAR_7], VAR_1,
          VAR_0);
  FUNC_2((unsigned long)VAR_6, 0);
 }
}
