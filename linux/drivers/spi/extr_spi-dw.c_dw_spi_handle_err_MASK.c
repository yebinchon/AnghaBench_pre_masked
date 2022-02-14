
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_message {int dummy; } ;
struct spi_controller {int dummy; } ;
struct dw_spi {TYPE_1__* dma_ops; scalar_t__ dma_mapped; } ;
struct TYPE_2__ {int (* dma_stop ) (struct dw_spi*) ;} ;


 struct dw_spi* FUNC_0 (struct spi_controller*) ;
 int FUNC_1 (struct dw_spi*) ;
 int FUNC_2 (struct dw_spi*) ;

__attribute__((used)) static void FUNC_3(struct spi_controller *VAR_0,
  struct spi_message *VAR_1)
{
 struct dw_spi *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->dma_mapped)
  VAR_2->dma_ops->dma_stop(VAR_2);

 FUNC_1(VAR_2);
}
