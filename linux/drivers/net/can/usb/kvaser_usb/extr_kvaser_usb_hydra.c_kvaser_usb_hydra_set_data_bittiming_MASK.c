
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u8 ;
struct net_device {int dummy; } ;
struct can_bittiming {int prop_seg; int phase_seg1; int phase_seg2; int sjw; int bitrate; } ;
struct TYPE_7__ {int ctrlmode; struct can_bittiming data_bittiming; } ;
struct kvaser_usb_net_priv {size_t channel; TYPE_2__ can; struct kvaser_usb* dev; } ;
struct TYPE_9__ {int * channel_to_he; } ;
struct TYPE_10__ {TYPE_4__ hydra; } ;
struct kvaser_usb {TYPE_5__ card_data; } ;
struct TYPE_8__ {int nsamples_d; int canfd_mode; void* tseg2_d; void* tseg1_d; void* sjw_d; int bitrate_d; } ;
struct TYPE_6__ {int cmd_no; } ;
struct kvaser_cmd {TYPE_3__ set_busparams_req; TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 struct kvaser_cmd* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct kvaser_cmd*) ;
 int FUNC_3 (struct kvaser_cmd*) ;
 int FUNC_4 (struct kvaser_usb*) ;
 int FUNC_5 (struct kvaser_cmd*,int ) ;
 int FUNC_6 (struct kvaser_cmd*,int ) ;
 int FUNC_7 (struct kvaser_usb*,struct kvaser_cmd*,int ) ;
 struct kvaser_usb_net_priv* FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_7)
{
 struct kvaser_cmd *VAR_8;
 struct kvaser_usb_net_priv *VAR_9 = FUNC_8(VAR_7);
 struct can_bittiming *VAR_10 = &VAR_9->can.data_bittiming;
 struct kvaser_usb *VAR_11 = VAR_9->dev;
 int VAR_12 = VAR_10->prop_seg + VAR_10->phase_seg1;
 int VAR_13 = VAR_10->phase_seg2;
 int VAR_14 = VAR_10->sjw;
 int VAR_15;

 VAR_8 = FUNC_1(1, sizeof(struct kvaser_cmd), VAR_4);
 if (!VAR_8)
  return -VAR_3;

 VAR_8->header.cmd_no = VAR_2;
 VAR_8->set_busparams_req.bitrate_d = FUNC_0(VAR_10->bitrate);
 VAR_8->set_busparams_req.sjw_d = (u8)VAR_14;
 VAR_8->set_busparams_req.tseg1_d = (u8)VAR_12;
 VAR_8->set_busparams_req.tseg2_d = (u8)VAR_13;
 VAR_8->set_busparams_req.nsamples_d = 1;

 if (VAR_9->can.ctrlmode & VAR_0) {
  if (VAR_9->can.ctrlmode & VAR_1)
   VAR_8->set_busparams_req.canfd_mode =
     VAR_6;
  else
   VAR_8->set_busparams_req.canfd_mode =
     VAR_5;
 }

 FUNC_5
  (VAR_8, VAR_11->card_data.hydra.channel_to_he[VAR_9->channel]);
 FUNC_6
    (VAR_8, FUNC_4(VAR_11));

 VAR_15 = FUNC_7(VAR_11, VAR_8, FUNC_3(VAR_8));

 FUNC_2(VAR_8);

 return VAR_15;
}
