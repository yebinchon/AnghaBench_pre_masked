
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ctrlmode; } ;
struct kvaser_usb_net_priv {int dev; TYPE_1__ can; int channel; } ;
struct kvaser_cmd_ctrl_mode {int dummy; } ;
struct TYPE_5__ {int tid; int ctrl_mode; int channel; } ;
struct TYPE_6__ {TYPE_2__ ctrl_mode; } ;
struct kvaser_cmd {scalar_t__ len; TYPE_3__ u; int id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct kvaser_cmd*) ;
 struct kvaser_cmd* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,struct kvaser_cmd*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(const struct kvaser_usb_net_priv *VAR_7)
{
 struct kvaser_cmd *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_4);
 if (!VAR_8)
  return -VAR_3;

 VAR_8->id = VAR_2;
 VAR_8->len = VAR_1 + sizeof(struct kvaser_cmd_ctrl_mode);
 VAR_8->u.ctrl_mode.tid = 0xff;
 VAR_8->u.ctrl_mode.channel = VAR_7->channel;

 if (VAR_7->can.ctrlmode & VAR_0)
  VAR_8->u.ctrl_mode.ctrl_mode = VAR_6;
 else
  VAR_8->u.ctrl_mode.ctrl_mode = VAR_5;

 VAR_9 = FUNC_2(VAR_7->dev, VAR_8, VAR_8->len);

 FUNC_0(VAR_8);
 return VAR_9;
}
