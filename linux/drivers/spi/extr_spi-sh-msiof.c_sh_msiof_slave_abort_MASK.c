
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int dummy; } ;
struct sh_msiof_spi_priv {int slave_aborted; int done_txdma; int done; } ;


 int FUNC_0 (int *) ;
 struct sh_msiof_spi_priv* FUNC_1 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_2(struct spi_controller *VAR_0)
{
 struct sh_msiof_spi_priv *VAR_1 = FUNC_1(VAR_0);

 VAR_1->slave_aborted = 1;
 FUNC_0(&VAR_1->done);
 FUNC_0(&VAR_1->done_txdma);
 return 0;
}
