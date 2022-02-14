
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct kvaser_usb_net_priv {size_t channel; struct kvaser_usb* dev; } ;
struct TYPE_5__ {int * channel_to_he; } ;
struct TYPE_6__ {TYPE_2__ hydra; } ;
struct kvaser_usb {TYPE_3__ card_data; } ;
struct TYPE_4__ {int cmd_no; } ;
struct kvaser_cmd {TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct kvaser_cmd* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct kvaser_cmd*) ;
 int FUNC_2 (struct kvaser_cmd*) ;
 int FUNC_3 (struct kvaser_usb*) ;
 int FUNC_4 (struct kvaser_cmd*,int ) ;
 int FUNC_5 (struct kvaser_cmd*,int ) ;
 int FUNC_6 (struct kvaser_usb_net_priv*,struct kvaser_cmd*,int ) ;

__attribute__((used)) static int
FUNC_7(struct kvaser_usb_net_priv *VAR_2,
           u8 VAR_3)
{
 struct kvaser_cmd *VAR_4;
 struct kvaser_usb *VAR_5 = VAR_2->dev;
 int VAR_6;

 VAR_4 = FUNC_0(1, sizeof(struct kvaser_cmd), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->header.cmd_no = VAR_3;

 FUNC_4
  (VAR_4, VAR_5->card_data.hydra.channel_to_he[VAR_2->channel]);
 FUNC_5
    (VAR_4, FUNC_3(VAR_5));

 VAR_6 = FUNC_6(VAR_2, VAR_4,
     FUNC_2(VAR_4));
 if (VAR_6)
  FUNC_1(VAR_4);

 return VAR_6;
}
