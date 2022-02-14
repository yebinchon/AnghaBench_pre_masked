
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtl8xxxu_priv {int ep_tx_count; int * out_ep; int udev; void** pipe_out; int ep_tx_normal_queue; int ep_tx_high_queue; int ep_tx_low_queue; } ;


 int VAR_0 ;
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
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int FUNC_0 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_1 (struct rtl8xxxu_priv*,int ,int) ;
 void* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct rtl8xxxu_priv *VAR_19)
{
 u16 VAR_20, VAR_21, VAR_22;
 u16 VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 int VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;
 int VAR_35 = 0;

 switch (VAR_19->ep_tx_count) {
 case 1:
  if (VAR_19->ep_tx_high_queue) {
   VAR_21 = VAR_8;
  } else if (VAR_19->ep_tx_low_queue) {
   VAR_21 = VAR_9;
  } else if (VAR_19->ep_tx_normal_queue) {
   VAR_21 = VAR_10;
  } else {
   VAR_21 = 0;
   VAR_35 = -VAR_0;
  }

  VAR_23 = VAR_21;
  VAR_24 = VAR_21;
  VAR_25 = VAR_21;
  VAR_26 = VAR_21;
  VAR_27 = VAR_21;
  VAR_28 = VAR_21;

  VAR_29 = 0;
  VAR_30 = 0;
  VAR_31 = 0;
  VAR_32 = 0;
  VAR_33 = 0;
  VAR_34 = 0;
  break;
 case 2:
  if (VAR_19->ep_tx_high_queue && VAR_19->ep_tx_low_queue) {
   VAR_21 = VAR_8;
   VAR_22 = VAR_9;
  } else if (VAR_19->ep_tx_normal_queue && VAR_19->ep_tx_low_queue) {
   VAR_21 = VAR_10;
   VAR_22 = VAR_9;
  } else if (VAR_19->ep_tx_high_queue && VAR_19->ep_tx_normal_queue) {
   VAR_21 = VAR_8;
   VAR_22 = VAR_10;
  } else {
   VAR_35 = -VAR_0;
   VAR_21 = 0;
   VAR_22 = 0;
  }

  VAR_23 = VAR_21;
  VAR_24 = VAR_21;
  VAR_25 = VAR_22;
  VAR_26 = VAR_22;
  VAR_27 = VAR_21;
  VAR_28 = VAR_21;

  VAR_29 = 0;
  VAR_30 = 0;
  VAR_31 = 1;
  VAR_32 = 1;
  VAR_33 = 0;
  VAR_34 = 0;
  break;
 case 3:
  VAR_26 = VAR_9;
  VAR_25 = VAR_9;
  VAR_27 = VAR_10;
  VAR_28 = VAR_8;
  VAR_24 = VAR_8;
  VAR_23 = VAR_8;

  VAR_29 = VAR_23 ^ 3;
  VAR_30 = VAR_24 ^ 3;
  VAR_31 = VAR_25 ^ 3;
  VAR_32 = VAR_26 ^ 3;
  VAR_33 = VAR_27 ^ 3;
  VAR_34 = VAR_27 ^ 3;
  break;
 default:
  VAR_35 = -VAR_0;
 }





 if (!VAR_35) {
  VAR_20 = FUNC_0(VAR_19, VAR_1);
  VAR_20 &= 0x7;
  VAR_20 |= (VAR_28 << VAR_7) |
   (VAR_27 << VAR_6) |
   (VAR_26 << VAR_2) |
   (VAR_25 << VAR_3) |
   (VAR_24 << VAR_5) |
   (VAR_23 << VAR_4);
  FUNC_1(VAR_19, VAR_1, VAR_20);

  VAR_19->pipe_out[VAR_18] =
   FUNC_2(VAR_19->udev, VAR_19->out_ep[VAR_34]);
  VAR_19->pipe_out[VAR_17] =
   FUNC_2(VAR_19->udev, VAR_19->out_ep[VAR_33]);
  VAR_19->pipe_out[VAR_11] =
   FUNC_2(VAR_19->udev, VAR_19->out_ep[VAR_32]);
  VAR_19->pipe_out[VAR_13] =
   FUNC_2(VAR_19->udev, VAR_19->out_ep[VAR_31]);
  VAR_19->pipe_out[VAR_12] =
   FUNC_2(VAR_19->udev, VAR_19->out_ep[0]);
  VAR_19->pipe_out[VAR_16] =
   FUNC_2(VAR_19->udev, VAR_19->out_ep[VAR_30]);
  VAR_19->pipe_out[VAR_15] =
   FUNC_2(VAR_19->udev, VAR_19->out_ep[VAR_29]);
  VAR_19->pipe_out[VAR_14] =
   FUNC_2(VAR_19->udev, VAR_19->out_ep[0]);
 }

 return VAR_35;
}
