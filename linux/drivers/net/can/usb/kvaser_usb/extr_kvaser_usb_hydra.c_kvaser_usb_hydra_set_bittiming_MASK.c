
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
struct TYPE_6__ {struct can_bittiming bittiming; } ;
struct kvaser_usb_net_priv {size_t channel; struct kvaser_usb* dev; TYPE_1__ can; } ;
struct TYPE_9__ {int * channel_to_he; } ;
struct TYPE_10__ {TYPE_4__ hydra; } ;
struct kvaser_usb {TYPE_5__ card_data; } ;
struct TYPE_8__ {int nsamples; void* tseg2; void* tseg1; void* sjw; int bitrate; } ;
struct TYPE_7__ {int cmd_no; } ;
struct kvaser_cmd {TYPE_3__ set_busparams_req; TYPE_2__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct kvaser_cmd* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct kvaser_cmd*) ;
 int FUNC_3 (struct kvaser_cmd*) ;
 int FUNC_4 (struct kvaser_usb*) ;
 int FUNC_5 (struct kvaser_cmd*,int ) ;
 int FUNC_6 (struct kvaser_cmd*,int ) ;
 int FUNC_7 (struct kvaser_usb*,struct kvaser_cmd*,int ) ;
 struct kvaser_usb_net_priv* FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_3)
{
 struct kvaser_cmd *VAR_4;
 struct kvaser_usb_net_priv *VAR_5 = FUNC_8(VAR_3);
 struct can_bittiming *VAR_6 = &VAR_5->can.bittiming;
 struct kvaser_usb *VAR_7 = VAR_5->dev;
 int VAR_8 = VAR_6->prop_seg + VAR_6->phase_seg1;
 int VAR_9 = VAR_6->phase_seg2;
 int VAR_10 = VAR_6->sjw;
 int VAR_11;

 VAR_4 = FUNC_1(1, sizeof(struct kvaser_cmd), VAR_2);
 if (!VAR_4)
  return -VAR_1;

 VAR_4->header.cmd_no = VAR_0;
 VAR_4->set_busparams_req.bitrate = FUNC_0(VAR_6->bitrate);
 VAR_4->set_busparams_req.sjw = (u8)VAR_10;
 VAR_4->set_busparams_req.tseg1 = (u8)VAR_8;
 VAR_4->set_busparams_req.tseg2 = (u8)VAR_9;
 VAR_4->set_busparams_req.nsamples = 1;

 FUNC_5
  (VAR_4, VAR_7->card_data.hydra.channel_to_he[VAR_5->channel]);
 FUNC_6
    (VAR_4, FUNC_4(VAR_7));

 VAR_11 = FUNC_7(VAR_7, VAR_4, FUNC_3(VAR_4));

 FUNC_2(VAR_4);

 return VAR_11;
}
