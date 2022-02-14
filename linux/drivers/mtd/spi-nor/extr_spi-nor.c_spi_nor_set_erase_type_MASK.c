
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spi_nor_erase_type {int size_shift; int size_mask; int size; int opcode; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct spi_nor_erase_type *VAR_0,
       u32 VAR_1, u8 VAR_2)
{
 VAR_0->size = VAR_1;
 VAR_0->opcode = VAR_2;

 VAR_0->size_shift = FUNC_0(VAR_0->size) - 1;
 VAR_0->size_mask = (1 << VAR_0->size_shift) - 1;
}
