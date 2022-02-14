
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_nor {int page_size; } ;



__attribute__((used)) static u32 FUNC_0(struct spi_nor *VAR_0, u32 VAR_1)
{
 u32 VAR_2, VAR_3;

 VAR_2 = VAR_1 % VAR_0->page_size;
 VAR_3 = VAR_1 / VAR_0->page_size;
 VAR_3 <<= (VAR_0->page_size > 512) ? 10 : 9;

 return VAR_3 | VAR_2;
}
