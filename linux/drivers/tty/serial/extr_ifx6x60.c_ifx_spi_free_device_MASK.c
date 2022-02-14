
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifx_spi_device {int rx_bus; int rx_buffer; TYPE_1__* spi_dev; int tx_bus; int tx_buffer; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct ifx_spi_device*) ;

__attribute__((used)) static void FUNC_2(struct ifx_spi_device *VAR_1)
{
 FUNC_1(VAR_1);
 FUNC_0(&VAR_1->spi_dev->dev,
    VAR_0,
    VAR_1->tx_buffer,
    VAR_1->tx_bus);
 FUNC_0(&VAR_1->spi_dev->dev,
    VAR_0,
    VAR_1->rx_buffer,
    VAR_1->rx_bus);
}
