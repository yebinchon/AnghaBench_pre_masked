
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor_erase_type {int size; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct spi_nor_erase_type *VAR_2 = VAR_0, *VAR_3 = VAR_1;

 return VAR_2->size - VAR_3->size;
}
