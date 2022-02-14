
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_sh_data {int dummy; } ;


 unsigned long FUNC_0 (struct spi_sh_data*,unsigned long) ;
 int FUNC_1 (struct spi_sh_data*,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct spi_sh_data *VAR_0, unsigned long VAR_1,
    unsigned long VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_2);
 VAR_3 |= VAR_1;
 FUNC_1(VAR_0, VAR_3, VAR_2);
}
