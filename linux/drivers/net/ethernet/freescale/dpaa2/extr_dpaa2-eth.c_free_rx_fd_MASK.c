
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct dpaa2_sg_entry {int dummy; } ;
struct dpaa2_fd {int dummy; } ;
struct dpaa2_eth_priv {int iommu_domain; TYPE_2__* net_dev; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {struct device* parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;
 int FUNC_1 (struct dpaa2_fd const*) ;
 scalar_t__ FUNC_2 (struct dpaa2_fd const*) ;
 int FUNC_3 (struct dpaa2_fd const*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct dpaa2_sg_entry*) ;
 scalar_t__ FUNC_6 (struct dpaa2_sg_entry*) ;
 int FUNC_7 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_8(struct dpaa2_eth_priv *VAR_5,
         const struct dpaa2_fd *VAR_6,
         void *VAR_7)
{
 struct device *VAR_8 = VAR_5->net_dev->dev.parent;
 dma_addr_t VAR_9 = FUNC_1(VAR_6);
 u8 VAR_10 = FUNC_2(VAR_6);
 struct dpaa2_sg_entry *VAR_11;
 void *VAR_12;
 int VAR_13;


 if (VAR_10 == VAR_4)
  goto free_buf;
 else if (VAR_10 != VAR_3)

  return;




 VAR_11 = VAR_7 + FUNC_3(VAR_6);
 for (VAR_13 = 1; VAR_13 < VAR_1; VAR_13++) {
  VAR_9 = FUNC_5(&VAR_11[VAR_13]);
  VAR_12 = FUNC_4(VAR_5->iommu_domain, VAR_9);
  FUNC_0(VAR_8, VAR_9, VAR_2,
          VAR_0);

  FUNC_7((unsigned long)VAR_12, 0);
  if (FUNC_6(&VAR_11[VAR_13]))
   break;
 }

free_buf:
 FUNC_7((unsigned long)VAR_7, 0);
}
