
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor {int (* write_reg ) (struct spi_nor*,int ,int *,int ) ;scalar_t__ spimem; } ;
struct spi_mem_op {int dummy; } ;


 int VAR_0 ;
 struct spi_mem_op FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,struct spi_mem_op*) ;
 int FUNC_3 (struct spi_nor*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct spi_nor *VAR_4)
{
 if (VAR_4->spimem) {
  struct spi_mem_op VAR_5 =
   FUNC_0(FUNC_1(VAR_0, 1),
       VAR_1,
       VAR_3,
       VAR_2);

  return FUNC_2(VAR_4->spimem, &VAR_5);
 }

 return VAR_4->write_reg(VAR_4, VAR_0, ((void*)0), 0);
}
