
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvaser_usb_net_priv {int dev; int channel; } ;
struct kvaser_cmd_flush_queue {int dummy; } ;
struct TYPE_3__ {int flags; int channel; } ;
struct TYPE_4__ {TYPE_1__ flush_queue; } ;
struct kvaser_cmd {scalar_t__ len; TYPE_2__ u; int id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvaser_cmd*) ;
 struct kvaser_cmd* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,struct kvaser_cmd*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct kvaser_usb_net_priv *VAR_4)
{
 struct kvaser_cmd *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_3);
 if (!VAR_5)
  return -VAR_2;

 VAR_5->id = VAR_0;
 VAR_5->len = VAR_1 + sizeof(struct kvaser_cmd_flush_queue);
 VAR_5->u.flush_queue.channel = VAR_4->channel;
 VAR_5->u.flush_queue.flags = 0x00;

 VAR_6 = FUNC_2(VAR_4->dev, VAR_5, VAR_5->len);

 FUNC_0(VAR_5);
 return VAR_6;
}
