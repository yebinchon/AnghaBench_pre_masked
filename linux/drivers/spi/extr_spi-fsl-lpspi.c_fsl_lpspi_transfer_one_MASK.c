
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int dummy; } ;
struct spi_device {int dummy; } ;
struct spi_controller {int dummy; } ;
struct fsl_lpspi_data {int is_first_byte; scalar_t__ usedma; } ;


 int FUNC_0 (struct spi_controller*,struct fsl_lpspi_data*,struct spi_transfer*) ;
 int FUNC_1 (struct spi_controller*,struct spi_transfer*) ;
 int FUNC_2 (struct fsl_lpspi_data*) ;
 int FUNC_3 (struct spi_controller*,struct spi_device*,struct spi_transfer*) ;
 struct fsl_lpspi_data* FUNC_4 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_5(struct spi_controller *VAR_0,
      struct spi_device *VAR_1,
      struct spi_transfer *VAR_2)
{
 struct fsl_lpspi_data *VAR_3 =
     FUNC_4(VAR_0);
 int VAR_4;

 VAR_3->is_first_byte = 1;
 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_2(VAR_3);
 VAR_3->is_first_byte = 0;

 if (VAR_3->usedma)
  VAR_4 = FUNC_0(VAR_0, VAR_3, VAR_2);
 else
  VAR_4 = FUNC_1(VAR_0, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
