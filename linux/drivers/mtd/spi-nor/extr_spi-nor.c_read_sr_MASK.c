
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor {int* bouncebuf; int (* read_reg ) (struct spi_nor*,int ,int*,int) ;scalar_t__ spimem; } ;
struct spi_mem_op {int dummy; } ;


 int VAR_0 ;
 struct spi_mem_op FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (scalar_t__,struct spi_mem_op*) ;
 int FUNC_5 (struct spi_nor*,int ,int*,int) ;

__attribute__((used)) static int FUNC_6(struct spi_nor *VAR_3)
{
 int VAR_4;

 if (VAR_3->spimem) {
  struct spi_mem_op VAR_5 =
   FUNC_0(FUNC_1(VAR_0, 1),
       VAR_1,
       VAR_2,
       FUNC_2(1, VAR_3->bouncebuf, 1));

  VAR_4 = FUNC_4(VAR_3->spimem, &VAR_5);
 } else {
  VAR_4 = VAR_3->read_reg(VAR_3, VAR_0, VAR_3->bouncebuf, 1);
 }

 if (VAR_4 < 0) {
  FUNC_3("error %d reading SR\n", (int) VAR_4);
  return VAR_4;
 }

 return VAR_3->bouncebuf[0];
}
