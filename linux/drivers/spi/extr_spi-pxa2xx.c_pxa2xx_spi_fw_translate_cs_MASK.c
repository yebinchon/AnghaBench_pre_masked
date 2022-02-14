
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_controller {int dummy; } ;
struct driver_data {int ssp_type; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;




 scalar_t__ FUNC_0 (int *) ;
 struct driver_data* FUNC_1 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_2(struct spi_controller *VAR_0,
          unsigned int VAR_1)
{
 struct driver_data *VAR_2 = FUNC_1(VAR_0);

 if (FUNC_0(&VAR_2->pdev->dev)) {
  switch (VAR_2->ssp_type) {





  case 128:
  case 129:
   return VAR_1 - 1;

  default:
   break;
  }
 }

 return VAR_1;
}
