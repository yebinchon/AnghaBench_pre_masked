
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_nor {int (* write_reg ) (struct spi_nor*,int ,int *,int) ;int dev; scalar_t__ spimem; } ;
struct spi_mem_op {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct spi_mem_op FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__,struct spi_mem_op*) ;
 int FUNC_5 (struct spi_nor*) ;
 int FUNC_6 (struct spi_nor*,int ,int *,int) ;
 int FUNC_7 (struct spi_nor*) ;

__attribute__((used)) static int FUNC_8(struct spi_nor *VAR_4, u8 *VAR_5)
{
 int VAR_6;

 FUNC_7(VAR_4);

 if (VAR_4->spimem) {
  struct spi_mem_op VAR_7 =
   FUNC_0(FUNC_1(VAR_1, 1),
       VAR_2,
       VAR_3,
       FUNC_2(2, VAR_5, 1));

  VAR_6 = FUNC_4(VAR_4->spimem, &VAR_7);
 } else {
  VAR_6 = VAR_4->write_reg(VAR_4, VAR_1, VAR_5, 2);
 }

 if (VAR_6 < 0) {
  FUNC_3(VAR_4->dev,
   "error while writing configuration register\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6) {
  FUNC_3(VAR_4->dev,
   "timeout while writing configuration register\n");
  return VAR_6;
 }

 return 0;
}
