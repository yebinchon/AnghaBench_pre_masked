
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int net_dev; int rx_reset; } ;
struct efx_channel {int channel; struct efx_nic* efx; } ;
typedef int efx_qword_t ;


 unsigned int FUNC_0 (int ,int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct efx_nic*,int *) ;
 int FUNC_3 (struct efx_nic*,int *) ;
 int FUNC_4 (struct efx_nic*,int ) ;
 int FUNC_5 (struct efx_nic*,unsigned int) ;
 int FUNC_6 (struct efx_nic*,int *) ;
 int FUNC_7 (struct efx_nic*,int *) ;
 int VAR_5 ;
 int FUNC_8 (struct efx_nic*,int ,int ,char*,int ,unsigned int) ;
 int FUNC_9 (struct efx_nic*,int ,int ,char*,unsigned int,...) ;
 int FUNC_10 (struct efx_nic*,int ,int ,char*,int ,...) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_11(struct efx_channel *VAR_8, efx_qword_t *VAR_9)
{
 struct efx_nic *VAR_10 = VAR_8->efx;
 unsigned int VAR_11;
 unsigned int VAR_12;

 VAR_11 = FUNC_0(*VAR_9, VAR_1);
 VAR_12 = FUNC_0(*VAR_9, VAR_2);

 switch (VAR_11) {
 case 131:
  FUNC_10(VAR_10, VAR_5, VAR_10->net_dev, "channel %d TXQ %d flushed\n",
      VAR_8->channel, VAR_12);
  FUNC_3(VAR_10, VAR_9);



  break;
 case 134:
  FUNC_10(VAR_10, VAR_5, VAR_10->net_dev, "channel %d RXQ %d flushed\n",
      VAR_8->channel, VAR_12);
  FUNC_2(VAR_10, VAR_9);



  break;
 case 135:
  FUNC_8(VAR_10, VAR_5, VAR_10->net_dev,
     "channel %d EVQ %d initialised\n",
     VAR_8->channel, VAR_12);
  break;
 case 133:
  FUNC_10(VAR_10, VAR_5, VAR_10->net_dev,
      "channel %d SRAM update done\n", VAR_8->channel);
  break;
 case 130:
  FUNC_10(VAR_10, VAR_5, VAR_10->net_dev,
      "channel %d RXQ %d wakeup event\n",
      VAR_8->channel, VAR_12);
  break;
 case 132:
  FUNC_10(VAR_10, VAR_5, VAR_10->net_dev,
      "channel %d RX queue %d timer expired\n",
      VAR_8->channel, VAR_12);
  break;
 case 136:
  FUNC_9(VAR_10, VAR_6, VAR_10->net_dev,
     "channel %d seen DRIVER RX_RESET event. "
   "Resetting.\n", VAR_8->channel);
  FUNC_1(&VAR_10->rx_reset);
  FUNC_4(VAR_10, VAR_3);
  break;
 case 129:
  if (VAR_12 < VAR_0) {
   FUNC_9(VAR_10, VAR_6, VAR_10->net_dev,
      "RX DMA Q %d reports descriptor fetch error."
      " RX Q %d is disabled.\n", VAR_12,
      VAR_12);
   FUNC_4(VAR_10, VAR_4);
  }




  break;
 case 128:
  if (VAR_12 < VAR_0) {
   FUNC_9(VAR_10, VAR_7, VAR_10->net_dev,
      "TX DMA Q %d reports descriptor fetch error."
      " TX Q %d is disabled.\n", VAR_12,
      VAR_12);
   FUNC_4(VAR_10, VAR_4);
  }




  break;
 default:
  FUNC_10(VAR_10, VAR_5, VAR_10->net_dev,
      "channel %d unknown driver event code %d "
      "data %04x\n", VAR_8->channel, VAR_11,
      VAR_12);
  break;
 }
}
