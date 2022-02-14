
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ phys_addr_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,scalar_t__,size_t,int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int ,size_t) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct device*,scalar_t__) ;
 int FUNC_5 (struct device*,int ,size_t) ;
 int FUNC_6 (struct device*,scalar_t__*,int *,size_t,int,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;

dma_addr_t FUNC_8(struct device *VAR_2, struct page *VAR_3,
  unsigned long VAR_4, size_t VAR_5, enum dma_data_direction VAR_6,
  unsigned long VAR_7)
{
 phys_addr_t VAR_8 = FUNC_3(VAR_3) + VAR_4;
 dma_addr_t VAR_9 = FUNC_4(VAR_2, VAR_8);

 if (FUNC_7(!FUNC_2(VAR_2, VAR_9, VAR_5)) &&
     !FUNC_6(VAR_2, &VAR_8, &VAR_9, VAR_5, VAR_6, VAR_7)) {
  FUNC_5(VAR_2, VAR_9, VAR_5);
  return VAR_1;
 }

 if (!FUNC_1(VAR_2) && !(VAR_7 & VAR_0))
  FUNC_0(VAR_2, VAR_8, VAR_5, VAR_6);
 return VAR_9;
}
