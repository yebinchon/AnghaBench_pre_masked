
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {struct spi_device* spi; } ;
struct spi_device {size_t chip_select; int mode; } ;
struct spi_controller {int dummy; } ;
struct fsl_lpspi_data {int* chipselect; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 struct fsl_lpspi_data* FUNC_2 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_3(struct spi_controller *VAR_1,
         struct spi_message *VAR_2)
{
 struct fsl_lpspi_data *VAR_3 =
     FUNC_2(VAR_1);
 struct spi_device *VAR_4 = VAR_2->spi;
 int VAR_5 = VAR_3->chipselect[VAR_4->chip_select];

 if (FUNC_1(VAR_5))
  FUNC_0(VAR_5, VAR_4->mode & VAR_0 ? 0 : 1);

 return 0;
}
