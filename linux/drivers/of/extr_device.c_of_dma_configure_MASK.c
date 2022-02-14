
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu_ops {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int* dma_mask; int coherent_dma_mask; unsigned long dma_pfn_offset; int bus_dma_mask; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct iommu_ops const*) ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (struct iommu_ops const*) ;
 int FUNC_4 (struct device*,int,int,struct iommu_ops const*,int) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*,char*,int) ;
 int FUNC_7 (struct device*,char*,...) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (struct device_node*,int*,int*,int*) ;
 int FUNC_11 (struct device_node*) ;
 struct iommu_ops* FUNC_12 (struct device*,struct device_node*) ;

int FUNC_13(struct device *VAR_3, struct device_node *VAR_4, bool VAR_5)
{
 u64 VAR_6, VAR_7, VAR_8 = 0;
 int VAR_9;
 bool VAR_10;
 unsigned long VAR_11;
 const struct iommu_ops *VAR_12;
 u64 VAR_13;

 VAR_9 = FUNC_10(VAR_4, &VAR_6, &VAR_7, &VAR_8);
 if (VAR_9 < 0) {





  if (!VAR_5)
   return VAR_9 == -VAR_1 ? 0 : VAR_9;

  VAR_6 = VAR_11 = 0;
 } else {
  VAR_11 = FUNC_2(VAR_7 - VAR_6);





  if (VAR_8 & 1) {
   FUNC_7(VAR_3, "Invalid size 0x%llx for dma-range\n",
     VAR_8);
   VAR_8 = VAR_8 + 1;
  }

  if (!VAR_8) {
   FUNC_6(VAR_3, "Adjusted size 0x%llx invalid\n", VAR_8);
   return -VAR_0;
  }
  FUNC_5(VAR_3, "dma_pfn_offset(%#08lx)\n", VAR_11);
 }







 if (!VAR_3->dma_mask) {
  FUNC_7(VAR_3, "DMA mask not set\n");
  VAR_3->dma_mask = &VAR_3->coherent_dma_mask;
 }

 if (!VAR_8 && VAR_3->coherent_dma_mask)
  VAR_8 = FUNC_9(VAR_3->coherent_dma_mask, VAR_3->coherent_dma_mask + 1);
 else if (!VAR_8)
  VAR_8 = 1ULL << 32;

 VAR_3->dma_pfn_offset = VAR_11;





 VAR_13 = FUNC_0(FUNC_8(VAR_6 + VAR_8 - 1) + 1);
 VAR_3->coherent_dma_mask &= VAR_13;
 *VAR_3->dma_mask &= VAR_13;

 if (!VAR_9)
  VAR_3->bus_dma_mask = VAR_13;

 VAR_10 = FUNC_11(VAR_4);
 FUNC_5(VAR_3, "device is%sdma coherent\n",
  VAR_10 ? " " : " not ");

 VAR_12 = FUNC_12(VAR_3, VAR_4);
 if (FUNC_1(VAR_12) && FUNC_3(VAR_12) == -VAR_2)
  return -VAR_2;

 FUNC_5(VAR_3, "device is%sbehind an iommu\n",
  VAR_12 ? " " : " not ");

 FUNC_4(VAR_3, VAR_6, VAR_8, VAR_12, VAR_10);

 return 0;
}
