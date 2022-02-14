
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct spi_device {int controller; struct pxa2xx_spi_chip* controller_data; } ;
struct pxa2xx_spi_chip {int dma_burst_size; } ;
struct driver_data {TYPE_1__* controller_info; } ;
struct chip_data {int dummy; } ;
struct TYPE_2__ {int dma_burst_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 struct driver_data* FUNC_2 (int ) ;

int FUNC_3(struct chip_data *VAR_2,
        struct spi_device *VAR_3,
        u8 VAR_4, u32 *VAR_5,
        u32 *VAR_6)
{
 struct pxa2xx_spi_chip *VAR_7 = VAR_3->controller_data;
 struct driver_data *VAR_8 = FUNC_2(VAR_3->controller);
 u32 VAR_9 = VAR_8->controller_info->dma_burst_size;






 *VAR_5 = VAR_7 ? VAR_7->dma_burst_size : VAR_9;
 *VAR_6 = FUNC_0(VAR_0)
     | FUNC_1(VAR_1);

 return 0;
}
