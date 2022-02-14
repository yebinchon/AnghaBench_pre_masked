
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spi_nor {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct spi_nor*,int,size_t,int *) ;

__attribute__((used)) static int FUNC_1(struct spi_nor *VAR_1, u32 VAR_2, size_t VAR_3, u8 *VAR_4)
{
 int VAR_5;

 while (VAR_3) {
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
  if (!VAR_5 || VAR_5 > VAR_3)
   return -VAR_0;

  VAR_4 += VAR_5;
  VAR_2 += VAR_5;
  VAR_3 -= VAR_5;
 }
 return 0;
}
