
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,struct page*,unsigned long,size_t,int,unsigned long) ;
 int FUNC_1 (struct device*) ;

__attribute__((used)) static dma_addr_t FUNC_2(struct device *VAR_0, struct page *VAR_1,
          unsigned long VAR_2, size_t VAR_3,
          enum dma_data_direction VAR_4,
          unsigned long VAR_5)
{
 return FUNC_0(FUNC_1(VAR_0), VAR_1, VAR_2, VAR_3, VAR_4,
   VAR_5);
}
