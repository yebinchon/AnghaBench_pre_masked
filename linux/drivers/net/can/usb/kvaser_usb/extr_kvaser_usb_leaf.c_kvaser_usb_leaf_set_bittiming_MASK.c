
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct can_bittiming {int phase_seg2; scalar_t__ phase_seg1; scalar_t__ prop_seg; int sjw; int bitrate; } ;
struct TYPE_4__ {int ctrlmode; struct can_bittiming bittiming; } ;
struct kvaser_usb_net_priv {TYPE_1__ can; int channel; struct kvaser_usb* dev; } ;
struct kvaser_usb {int dummy; } ;
struct kvaser_cmd_busparams {int dummy; } ;
struct TYPE_5__ {int tid; int no_samp; int tseg2; scalar_t__ tseg1; int sjw; int bitrate; int channel; } ;
struct TYPE_6__ {TYPE_2__ busparams; } ;
struct kvaser_cmd {scalar_t__ len; TYPE_3__ u; int id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvaser_cmd*) ;
 struct kvaser_cmd* FUNC_2 (int,int ) ;
 int FUNC_3 (struct kvaser_usb*,struct kvaser_cmd*,scalar_t__) ;
 struct kvaser_usb_net_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5)
{
 struct kvaser_usb_net_priv *VAR_6 = FUNC_4(VAR_5);
 struct can_bittiming *VAR_7 = &VAR_6->can.bittiming;
 struct kvaser_usb *VAR_8 = VAR_6->dev;
 struct kvaser_cmd *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_4);
 if (!VAR_9)
  return -VAR_3;

 VAR_9->id = VAR_2;
 VAR_9->len = VAR_1 + sizeof(struct kvaser_cmd_busparams);
 VAR_9->u.busparams.channel = VAR_6->channel;
 VAR_9->u.busparams.tid = 0xff;
 VAR_9->u.busparams.bitrate = FUNC_0(VAR_7->bitrate);
 VAR_9->u.busparams.sjw = VAR_7->sjw;
 VAR_9->u.busparams.tseg1 = VAR_7->prop_seg + VAR_7->phase_seg1;
 VAR_9->u.busparams.tseg2 = VAR_7->phase_seg2;

 if (VAR_6->can.ctrlmode & VAR_0)
  VAR_9->u.busparams.no_samp = 3;
 else
  VAR_9->u.busparams.no_samp = 1;

 VAR_10 = FUNC_3(VAR_8, VAR_9, VAR_9->len);

 FUNC_1(VAR_9);
 return VAR_10;
}
