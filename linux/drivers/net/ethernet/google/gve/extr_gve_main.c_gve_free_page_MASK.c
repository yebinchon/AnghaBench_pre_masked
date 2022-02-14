
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ) ;
 int FUNC_1 (struct device*,int ,int ,int) ;
 int FUNC_2 (struct page*) ;

void FUNC_3(struct device *VAR_1, struct page *VAR_2, dma_addr_t VAR_3,
     enum dma_data_direction VAR_4)
{
 if (!FUNC_0(VAR_1, VAR_3))
  FUNC_1(VAR_1, VAR_3, VAR_0, VAR_4);
 if (VAR_2)
  FUNC_2(VAR_2);
}
