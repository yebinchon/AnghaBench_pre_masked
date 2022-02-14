
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spinand_device {int spimem; } ;
struct spi_mem_op {int dummy; } ;
struct nand_pos {int dummy; } ;
struct nand_device {int dummy; } ;


 struct spi_mem_op FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct nand_device*,struct nand_pos const*) ;
 int FUNC_2 (int ,struct spi_mem_op*) ;
 struct nand_device* FUNC_3 (struct spinand_device*) ;

__attribute__((used)) static int FUNC_4(struct spinand_device *VAR_0,
       const struct nand_pos *VAR_1)
{
 struct nand_device *VAR_2 = FUNC_3(VAR_0);
 unsigned int VAR_3 = FUNC_1(VAR_2, VAR_1);
 struct spi_mem_op VAR_4 = FUNC_0(VAR_3);

 return FUNC_2(VAR_0->spimem, &VAR_4);
}
