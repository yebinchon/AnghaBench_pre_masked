
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct spi_nor_erase_type {int size_mask; int size_shift; } ;



__attribute__((used)) static u64 FUNC_0(const struct spi_nor_erase_type *VAR_0,
         u64 VAR_1, u32 *VAR_2)
{

 *VAR_2 = (u32)VAR_1 & VAR_0->size_mask;
 return VAR_1 >> VAR_0->size_shift;
}
