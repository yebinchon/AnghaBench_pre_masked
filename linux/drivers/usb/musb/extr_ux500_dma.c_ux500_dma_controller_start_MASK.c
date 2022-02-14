
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct ux500_musb_board_data {void** dma_rx_param_array; void** dma_tx_param_array; int * dma_filter; } ;
struct ux500_dma_controller {struct ux500_dma_channel* tx_channel; struct ux500_dma_channel* rx_channel; struct musb* private_data; } ;
struct dma_channel {int max_len; int status; struct ux500_dma_channel* private_data; } ;
struct ux500_dma_channel {size_t ch_num; int is_tx; scalar_t__ dma_chan; struct dma_channel channel; struct ux500_dma_controller* controller; } ;
struct musb_hdrc_platform_data {struct ux500_musb_board_data* board_data; } ;
struct musb {struct device* controller; } ;
struct device {int dummy; } ;
typedef int dma_cap_mask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct device*,char*) ;
 struct musb_hdrc_platform_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *,void*) ;
 scalar_t__ FUNC_6 (struct device*,char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (struct ux500_dma_controller*) ;

__attribute__((used)) static int FUNC_8(struct ux500_dma_controller *VAR_8)
{
 struct ux500_dma_channel *VAR_9 = ((void*)0);
 struct musb *VAR_10 = VAR_8->private_data;
 struct device *VAR_11 = VAR_10->controller;
 struct musb_hdrc_platform_data *VAR_12 = FUNC_2(VAR_11);
 struct ux500_musb_board_data *VAR_13;
 struct dma_channel *VAR_14 = ((void*)0);
 char **VAR_15;
 u32 VAR_16;
 u8 VAR_17;
 u8 VAR_18 = 0;

 void **VAR_19;
 struct ux500_dma_channel *VAR_20;
 dma_cap_mask_t VAR_21;

 if (!VAR_12) {
  FUNC_1(VAR_10->controller, "No platform data\n");
  return -VAR_2;
 }

 VAR_13 = VAR_12->board_data;

 FUNC_4(VAR_21);
 FUNC_3(VAR_0, VAR_21);


 VAR_20 = VAR_8->rx_channel;
 VAR_19 = VAR_13 ? VAR_13->dma_rx_param_array : ((void*)0);
 VAR_15 = (char **)VAR_6;

 for (VAR_17 = 0; VAR_17 < 2; VAR_17++) {
  for (VAR_16 = 0;
       VAR_16 < VAR_5;
       VAR_16++) {
   VAR_9 = &VAR_20[VAR_16];
   VAR_9->controller = VAR_8;
   VAR_9->ch_num = VAR_16;
   VAR_9->is_tx = VAR_18;

   VAR_14 = &(VAR_9->channel);
   VAR_14->private_data = VAR_9;
   VAR_14->status = VAR_3;
   VAR_14->max_len = VAR_4;

   VAR_9->dma_chan =
    FUNC_6(VAR_11, VAR_15[VAR_16]);

   if (!VAR_9->dma_chan)
    VAR_9->dma_chan =
     FUNC_5(VAR_21,
           VAR_13 ?
           VAR_13->dma_filter :
           ((void*)0),
           VAR_19 ?
           VAR_19[VAR_16] :
           ((void*)0));

   if (!VAR_9->dma_chan) {
    FUNC_0("Dma pipe allocation error dir=%d ch=%d\n",
     VAR_17, VAR_16);


    FUNC_7(VAR_8);

    return -VAR_1;
   }

  }


  VAR_20 = VAR_8->tx_channel;
  VAR_19 = VAR_13 ? VAR_13->dma_tx_param_array : ((void*)0);
  VAR_15 = (char **)VAR_7;
  VAR_18 = 1;
 }

 return 0;
}
