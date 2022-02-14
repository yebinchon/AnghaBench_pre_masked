
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spinand_device {int * scratchbuf; int spimem; } ;
struct spi_mem_op {int dummy; } ;


 struct spi_mem_op FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,struct spi_mem_op*) ;

__attribute__((used)) static int FUNC_2(struct spinand_device *VAR_0, u8 VAR_1, u8 *VAR_2)
{
 struct spi_mem_op VAR_3 = FUNC_0(VAR_1,
            VAR_0->scratchbuf);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0->spimem, &VAR_3);
 if (VAR_4)
  return VAR_4;

 *VAR_2 = *VAR_0->scratchbuf;
 return 0;
}
