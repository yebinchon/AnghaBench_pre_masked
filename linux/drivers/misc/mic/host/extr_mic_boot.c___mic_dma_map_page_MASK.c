
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_hw_dev {int dummy; } ;
struct page {int dummy; } ;
struct mic_device {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 struct scif_hw_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct mic_device*,void*,size_t) ;
 int FUNC_2 (struct page*) ;
 void* FUNC_3 (int ) ;
 struct mic_device* FUNC_4 (struct scif_hw_dev*) ;

__attribute__((used)) static dma_addr_t
FUNC_5(struct device *VAR_0, struct page *VAR_1, unsigned long VAR_2,
     size_t VAR_3, enum dma_data_direction VAR_4,
     unsigned long VAR_5)
{
 void *VAR_6 = FUNC_3(FUNC_2(VAR_1)) + VAR_2;
 struct scif_hw_dev *VAR_7 = FUNC_0(VAR_0);
 struct mic_device *VAR_8 = FUNC_4(VAR_7);

 return FUNC_1(VAR_8, VAR_6, VAR_3);
}
