
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor {int (* write_reg ) (struct spi_nor*,int ,int *,int ) ;int erase_opcode; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct spi_nor*,int ,int ) ;
 int FUNC_1 (struct spi_nor*,int ) ;
 int FUNC_2 (struct spi_nor*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct spi_nor *VAR_1, loff_t VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, 0);
 if (VAR_3)
  return VAR_3;


 VAR_3 = VAR_1->write_reg(VAR_1, VAR_0, ((void*)0), 0);
 if (VAR_3)
  return VAR_3;


 VAR_3 = FUNC_0(VAR_1, VAR_1->erase_opcode, VAR_2);
 if (VAR_3)
  return VAR_3;

 return 0;
}
