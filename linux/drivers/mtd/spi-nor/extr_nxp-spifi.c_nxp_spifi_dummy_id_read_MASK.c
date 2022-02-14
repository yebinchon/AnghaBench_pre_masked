
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_nor {int (* read_reg ) (struct spi_nor*,int ,int *,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spi_nor*,int ,int *,int) ;

__attribute__((used)) static void FUNC_1(struct spi_nor *VAR_2)
{
 u8 VAR_3[VAR_1];
 VAR_2->read_reg(VAR_2, VAR_0, VAR_3, VAR_1);
}
