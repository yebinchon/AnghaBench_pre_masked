
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ snpsid; } ;
struct dwc2_core_params {int host_rx_fifo_size; int host_nperio_tx_fifo_size; int host_perio_tx_fifo_size; scalar_t__ en_multiple_tx_fifo; int enable_dynamic_fifo; } ;
struct dwc2_hsotg {TYPE_1__ hw_params; struct dwc2_core_params params; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct dwc2_hsotg*) ;
 int FUNC_2 (struct dwc2_hsotg*,int ) ;
 int FUNC_3 (struct dwc2_hsotg*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct dwc2_hsotg *VAR_13)
{
 struct dwc2_core_params *VAR_14 = &VAR_13->params;
 u32 VAR_15, VAR_16, VAR_17, VAR_18;

 if (!VAR_14->enable_dynamic_fifo)
  return;

 FUNC_1(VAR_13);


 VAR_18 = FUNC_2(VAR_13, VAR_9);
 FUNC_0(VAR_13->dev, "initial grxfsiz=%08x\n", VAR_18);
 VAR_18 &= ~VAR_10;
 VAR_18 |= VAR_14->host_rx_fifo_size <<
     VAR_11 & VAR_10;
 FUNC_3(VAR_13, VAR_18, VAR_9);
 FUNC_0(VAR_13->dev, "new grxfsiz=%08x\n",
  FUNC_2(VAR_13, VAR_9));


 FUNC_0(VAR_13->dev, "initial gnptxfsiz=%08x\n",
  FUNC_2(VAR_13, VAR_8));
 VAR_15 = VAR_14->host_nperio_tx_fifo_size <<
     VAR_2 & VAR_1;
 VAR_15 |= VAR_14->host_rx_fifo_size <<
      VAR_4 & VAR_3;
 FUNC_3(VAR_13, VAR_15, VAR_8);
 FUNC_0(VAR_13->dev, "new gnptxfsiz=%08x\n",
  FUNC_2(VAR_13, VAR_8));


 FUNC_0(VAR_13->dev, "initial hptxfsiz=%08x\n",
  FUNC_2(VAR_13, VAR_12));
 VAR_16 = VAR_14->host_perio_tx_fifo_size <<
     VAR_2 & VAR_1;
 VAR_16 |= (VAR_14->host_rx_fifo_size +
       VAR_14->host_nperio_tx_fifo_size) <<
      VAR_4 & VAR_3;
 FUNC_3(VAR_13, VAR_16, VAR_12);
 FUNC_0(VAR_13->dev, "new hptxfsiz=%08x\n",
  FUNC_2(VAR_13, VAR_12));

 if (VAR_13->params.en_multiple_tx_fifo &&
     VAR_13->hw_params.snpsid >= VAR_0) {





  VAR_17 = FUNC_2(VAR_13, VAR_5);
  VAR_17 &= ~VAR_6;
  VAR_17 |= (VAR_14->host_rx_fifo_size +
        VAR_14->host_nperio_tx_fifo_size +
        VAR_14->host_perio_tx_fifo_size) <<
       VAR_7 &
       VAR_6;
  FUNC_3(VAR_13, VAR_17, VAR_5);
 }
}
