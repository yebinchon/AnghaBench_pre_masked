
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_nor {int (* erase ) (struct spi_nor*,int) ;int addr_width; int* bouncebuf; int (* write_reg ) (struct spi_nor*,int ,int*,int) ;int erase_opcode; scalar_t__ spimem; } ;
struct spi_mem_op {int dummy; } ;


 struct spi_mem_op FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,struct spi_mem_op*) ;
 int FUNC_4 (struct spi_nor*,int) ;
 int FUNC_5 (struct spi_nor*,int) ;
 int FUNC_6 (struct spi_nor*,int ,int*,int) ;

__attribute__((used)) static int FUNC_7(struct spi_nor *VAR_2, u32 VAR_3)
{
 int VAR_4;

 VAR_3 = FUNC_4(VAR_2, VAR_3);

 if (VAR_2->erase)
  return VAR_2->erase(VAR_2, VAR_3);

 if (VAR_2->spimem) {
  struct spi_mem_op VAR_5 =
   FUNC_0(FUNC_2(VAR_2->erase_opcode, 1),
       FUNC_1(VAR_2->addr_width, VAR_3, 1),
       VAR_1,
       VAR_0);

  return FUNC_3(VAR_2->spimem, &VAR_5);
 }





 for (VAR_4 = VAR_2->addr_width - 1; VAR_4 >= 0; VAR_4--) {
  VAR_2->bouncebuf[VAR_4] = VAR_3 & 0xff;
  VAR_3 >>= 8;
 }

 return VAR_2->write_reg(VAR_2, VAR_2->erase_opcode, VAR_2->bouncebuf,
         VAR_2->addr_width);
}
