
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spinand_device {int spimem; } ;
struct spi_mem_op {int dummy; } ;


 struct spi_mem_op FUNC_0 (int) ;
 int FUNC_1 (int ,struct spi_mem_op*) ;

__attribute__((used)) static int FUNC_2(struct spinand_device *VAR_0)
{
 struct spi_mem_op VAR_1 = FUNC_0(1);

 return FUNC_1(VAR_0->spimem, &VAR_1);
}
