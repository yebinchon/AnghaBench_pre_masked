
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_nor {int (* write_reg ) (struct spi_nor*,int ,int *,int) ;int * bouncebuf; scalar_t__ spimem; } ;
struct spi_mem_op {int dummy; } ;


 int VAR_0 ;
 struct spi_mem_op FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__,struct spi_mem_op*) ;
 int FUNC_4 (struct spi_nor*,int ,int *,int) ;

__attribute__((used)) static int FUNC_5(struct spi_nor *VAR_3, u8 VAR_4)
{
 VAR_3->bouncebuf[0] = VAR_4;

 if (VAR_3->spimem) {
  struct spi_mem_op VAR_5 =
   FUNC_0(FUNC_1(VAR_0, 1),
       VAR_1,
       VAR_2,
       FUNC_2(1, VAR_3->bouncebuf, 1));

  return FUNC_3(VAR_3->spimem, &VAR_5);
 }

 return VAR_3->write_reg(VAR_3, VAR_0, VAR_3->bouncebuf, 1);
}
