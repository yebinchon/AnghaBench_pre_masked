
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mic_device {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int FUNC_0 (struct mic_device*,void*,size_t) ;
 int FUNC_1 (struct page*) ;
 void* FUNC_2 (int ) ;
 struct mic_device* FUNC_3 (struct device*) ;

__attribute__((used)) static dma_addr_t
FUNC_4(struct device *VAR_0, struct page *VAR_1,
    unsigned long VAR_2, size_t VAR_3,
    enum dma_data_direction VAR_4, unsigned long VAR_5)
{
 void *VAR_6 = FUNC_2(FUNC_1(VAR_1)) + VAR_2;
 struct mic_device *VAR_7 = FUNC_3(VAR_0);

 return FUNC_0(VAR_7, VAR_6, VAR_3);
}
