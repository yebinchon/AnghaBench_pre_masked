
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int dummy; } ;
struct fsl_lpspi_data {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct fsl_lpspi_data* FUNC_2 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_3(struct spi_controller *VAR_0)
{
 struct fsl_lpspi_data *VAR_1 =
    FUNC_2(VAR_0);

 FUNC_0(VAR_1->dev);
 FUNC_1(VAR_1->dev);

 return 0;
}
