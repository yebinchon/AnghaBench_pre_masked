
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int ctrlmode; } ;
struct kvaser_usb_net_priv {size_t channel; TYPE_4__ can; int netdev; struct kvaser_usb* dev; } ;
struct TYPE_7__ {int * channel_to_he; } ;
struct TYPE_8__ {TYPE_2__ hydra; } ;
struct kvaser_usb {TYPE_3__ card_data; } ;
struct TYPE_10__ {int mode; } ;
struct TYPE_6__ {int cmd_no; } ;
struct kvaser_cmd {TYPE_5__ set_ctrlmode; TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct kvaser_cmd* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct kvaser_cmd*) ;
 int FUNC_2 (struct kvaser_cmd*) ;
 int FUNC_3 (struct kvaser_usb*) ;
 int FUNC_4 (struct kvaser_cmd*,int ) ;
 int FUNC_5 (struct kvaser_cmd*,int ) ;
 int FUNC_6 (struct kvaser_usb*,struct kvaser_cmd*,int ) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int FUNC_8(const struct kvaser_usb_net_priv *VAR_9)
{
 struct kvaser_usb *VAR_10 = VAR_9->dev;
 struct kvaser_cmd *VAR_11;
 int VAR_12;

 if ((VAR_9->can.ctrlmode &
     (VAR_0 | VAR_1)) ==
     VAR_1) {
  FUNC_7(VAR_9->netdev,
       "CTRLMODE_FD shall be on if CTRLMODE_FD_NON_ISO is on\n");
  return -VAR_4;
 }

 VAR_11 = FUNC_0(1, sizeof(struct kvaser_cmd), VAR_6);
 if (!VAR_11)
  return -VAR_5;

 VAR_11->header.cmd_no = VAR_3;
 FUNC_4
  (VAR_11, VAR_10->card_data.hydra.channel_to_he[VAR_9->channel]);
 FUNC_5
    (VAR_11, FUNC_3(VAR_10));
 if (VAR_9->can.ctrlmode & VAR_2)
  VAR_11->set_ctrlmode.mode = VAR_7;
 else
  VAR_11->set_ctrlmode.mode = VAR_8;

 VAR_12 = FUNC_6(VAR_10, VAR_11, FUNC_2(VAR_11));
 FUNC_1(VAR_11);

 return VAR_12;
}
