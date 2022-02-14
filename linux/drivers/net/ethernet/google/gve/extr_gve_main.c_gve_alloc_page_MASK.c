
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,struct page*,int ,int ,int) ;
 scalar_t__ FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct page*) ;

int FUNC_4(struct device *VAR_3, struct page **VAR_4, dma_addr_t *VAR_5,
     enum dma_data_direction VAR_6)
{
 *VAR_4 = FUNC_0(VAR_1);
 if (!*VAR_4)
  return -VAR_0;
 *VAR_5 = FUNC_1(VAR_3, *VAR_4, 0, VAR_2, VAR_6);
 if (FUNC_2(VAR_3, *VAR_5)) {
  FUNC_3(*VAR_4);
  return -VAR_0;
 }
 return 0;
}
