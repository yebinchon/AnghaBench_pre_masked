
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int dummy; } ;
struct mtk_spi_slave {int slave_aborted; int xfer_done; } ;


 int FUNC_0 (int *) ;
 struct mtk_spi_slave* FUNC_1 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_2(struct spi_controller *VAR_0)
{
 struct mtk_spi_slave *VAR_1 = FUNC_1(VAR_0);

 VAR_1->slave_aborted = 1;
 FUNC_0(&VAR_1->xfer_done);

 return 0;
}
