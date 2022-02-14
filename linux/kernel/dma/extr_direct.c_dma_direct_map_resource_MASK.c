
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int phys_addr_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,size_t) ;
 int FUNC_1 (struct device*,int ,size_t) ;
 scalar_t__ FUNC_2 (int) ;

dma_addr_t FUNC_3(struct device *VAR_1, phys_addr_t VAR_2,
  size_t VAR_3, enum dma_data_direction VAR_4, unsigned long VAR_5)
{
 dma_addr_t VAR_6 = VAR_2;

 if (FUNC_2(!FUNC_0(VAR_1, VAR_6, VAR_3))) {
  FUNC_1(VAR_1, VAR_6, VAR_3);
  return VAR_0;
 }

 return VAR_6;
}
