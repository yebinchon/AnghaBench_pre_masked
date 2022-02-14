
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor {int (* write_reg ) (struct spi_nor*,int ,int *,int ) ;scalar_t__ spimem; } ;
struct spi_mem_op {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct spi_mem_op FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,struct spi_mem_op*) ;
 int FUNC_3 (struct spi_nor*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct spi_nor *VAR_5, bool VAR_6)
{
 if (VAR_5->spimem) {
  struct spi_mem_op VAR_7 =
   FUNC_0(FUNC_1(VAR_6 ?
        VAR_0 :
        VAR_1,
        1),
      VAR_2,
      VAR_4,
      VAR_3);

  return FUNC_2(VAR_5->spimem, &VAR_7);
 }

 return VAR_5->write_reg(VAR_5, VAR_6 ? VAR_0 : VAR_1,
         ((void*)0), 0);
}
