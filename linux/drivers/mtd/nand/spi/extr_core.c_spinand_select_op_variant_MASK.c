
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spinand_op_variants {unsigned int nops; struct spi_mem_op const* ops; } ;
struct spinand_device {int spimem; } ;
struct TYPE_2__ {unsigned int nbytes; } ;
typedef struct spi_mem_op {TYPE_1__ data; } const spi_mem_op ;
struct nand_device {int dummy; } ;


 unsigned int FUNC_0 (struct nand_device*) ;
 unsigned int FUNC_1 (struct nand_device*) ;
 int FUNC_2 (int ,struct spi_mem_op const*) ;
 int FUNC_3 (int ,struct spi_mem_op const*) ;
 struct nand_device* FUNC_4 (struct spinand_device*) ;

__attribute__((used)) static const struct spi_mem_op *
FUNC_5(struct spinand_device *VAR_0,
     const struct spinand_op_variants *VAR_1)
{
 struct nand_device *VAR_2 = FUNC_4(VAR_0);
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->nops; VAR_3++) {
  struct spi_mem_op VAR_4 = VAR_1->ops[VAR_3];
  unsigned int VAR_5;
  int VAR_6;

  VAR_5 = FUNC_1(VAR_2) +
    FUNC_0(VAR_2);

  while (VAR_5) {
   VAR_4.data.nbytes = VAR_5;
   VAR_6 = FUNC_2(VAR_0->spimem, &VAR_4);
   if (VAR_6)
    break;

   if (!FUNC_3(VAR_0->spimem, &VAR_4))
    break;

   VAR_5 -= VAR_4.data.nbytes;
  }

  if (!VAR_5)
   return &VAR_1->ops[VAR_3];
 }

 return ((void*)0);
}
