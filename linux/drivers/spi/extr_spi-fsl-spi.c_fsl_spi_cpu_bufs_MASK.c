
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_transfer {int dummy; } ;
struct mpc8xxx_spi {unsigned int count; int (* get_tx ) (struct mpc8xxx_spi*) ;struct fsl_spi_reg* reg_base; } ;
struct fsl_spi_reg {int transmit; int mask; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct mpc8xxx_spi*) ;

__attribute__((used)) static int FUNC_2(struct mpc8xxx_spi *VAR_1,
    struct spi_transfer *VAR_2, unsigned int VAR_3)
{
 u32 VAR_4;
 struct fsl_spi_reg *VAR_5 = VAR_1->reg_base;

 VAR_1->count = VAR_3;


 FUNC_0(&VAR_5->mask, VAR_0);


 VAR_4 = VAR_1->get_tx(VAR_1);
 FUNC_0(&VAR_5->transmit, VAR_4);

 return 0;
}
