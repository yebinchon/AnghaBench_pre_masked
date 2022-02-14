
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dwc2_hw_params {scalar_t__ total_fifo_size; scalar_t__ host_channels; } ;
struct dwc2_core_params {scalar_t__ host_rx_fifo_size; scalar_t__ host_nperio_tx_fifo_size; scalar_t__ host_perio_tx_fifo_size; } ;
struct dwc2_hsotg {int dev; struct dwc2_hw_params hw_params; struct dwc2_core_params params; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct dwc2_hsotg *VAR_0)
{
 struct dwc2_core_params *VAR_1 = &VAR_0->params;
 struct dwc2_hw_params *VAR_2 = &VAR_0->hw_params;
 u32 VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_6 = VAR_2->total_fifo_size;
 VAR_3 = VAR_1->host_rx_fifo_size;
 VAR_4 = VAR_1->host_nperio_tx_fifo_size;
 VAR_5 = VAR_1->host_perio_tx_fifo_size;







 if (VAR_6 < (VAR_3 + VAR_4 + VAR_5)) {






  VAR_3 = 516 + VAR_2->host_channels;






  VAR_4 = 256;






  VAR_5 = 768;

  VAR_1->host_rx_fifo_size = VAR_3;
  VAR_1->host_nperio_tx_fifo_size = VAR_4;
  VAR_1->host_perio_tx_fifo_size = VAR_5;
 }
 if (FUNC_1(VAR_6 < (VAR_3 + VAR_4 + VAR_5)))
  FUNC_0(VAR_0->dev, "invalid fifo sizes\n");
}
