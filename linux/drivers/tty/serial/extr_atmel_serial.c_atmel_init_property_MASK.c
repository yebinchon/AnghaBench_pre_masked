
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct atmel_uart_port {int use_dma_rx; int use_pdc_rx; int use_dma_tx; int use_pdc_tx; } ;


 scalar_t__ FUNC_0 (struct device_node*,char*) ;

__attribute__((used)) static void FUNC_1(struct atmel_uart_port *VAR_0,
    struct platform_device *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->dev.of_node;


 if (FUNC_0(VAR_2, "atmel,use-dma-rx")) {
  if (FUNC_0(VAR_2, "dmas")) {
   VAR_0->use_dma_rx = 1;
   VAR_0->use_pdc_rx = 0;
  } else {
   VAR_0->use_dma_rx = 0;
   VAR_0->use_pdc_rx = 1;
  }
 } else {
  VAR_0->use_dma_rx = 0;
  VAR_0->use_pdc_rx = 0;
 }

 if (FUNC_0(VAR_2, "atmel,use-dma-tx")) {
  if (FUNC_0(VAR_2, "dmas")) {
   VAR_0->use_dma_tx = 1;
   VAR_0->use_pdc_tx = 0;
  } else {
   VAR_0->use_dma_tx = 0;
   VAR_0->use_pdc_tx = 1;
  }
 } else {
  VAR_0->use_dma_tx = 0;
  VAR_0->use_pdc_tx = 0;
 }
}
