
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum gdma_dma_transfer_size { ____Placeholder_gdma_dma_transfer_size } gdma_dma_transfer_size ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static enum gdma_dma_transfer_size FUNC_0(u32 VAR_5)
{
 if (VAR_5 < 2)
  return VAR_2;
 else if (VAR_5 < 4)
  return VAR_4;
 else if (VAR_5 < 8)
  return VAR_0;
 else if (VAR_5 < 16)
  return VAR_1;
 else
  return VAR_3;
}
