
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spinand_device {int spimem; } ;
struct spi_mem_op {int dummy; } ;


 struct spi_mem_op VAR_0 ;
 int FUNC_0 (int ,struct spi_mem_op*) ;
 int FUNC_1 (struct spinand_device*,int *) ;

__attribute__((used)) static int FUNC_2(struct spinand_device *VAR_1)
{
 struct spi_mem_op VAR_2 = VAR_0;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1->spimem, &VAR_2);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_1, ((void*)0));
}
