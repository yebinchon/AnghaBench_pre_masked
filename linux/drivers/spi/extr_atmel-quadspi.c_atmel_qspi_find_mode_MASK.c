
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct spi_mem_op {int dummy; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct spi_mem_op const*,int *) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_2(const struct spi_mem_op *VAR_2)
{
 u32 VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
  if (FUNC_1(VAR_2, &VAR_1[VAR_3]))
   return VAR_3;

 return -VAR_0;
}
