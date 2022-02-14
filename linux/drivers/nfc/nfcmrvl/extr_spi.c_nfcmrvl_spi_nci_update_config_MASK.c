
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfcmrvl_spi_drv_data {TYPE_1__* nci_spi; } ;
struct nfcmrvl_private {struct nfcmrvl_spi_drv_data* drv_data; } ;
struct nfcmrvl_fw_spi_config {int clk; } ;
struct TYPE_2__ {int xfer_speed_hz; } ;



__attribute__((used)) static void FUNC_0(struct nfcmrvl_private *VAR_0,
       const void *VAR_1)
{
 struct nfcmrvl_spi_drv_data *VAR_2 = VAR_0->drv_data;
 const struct nfcmrvl_fw_spi_config *VAR_3 = VAR_1;

 VAR_2->nci_spi->xfer_speed_hz = VAR_3->clk;
}
