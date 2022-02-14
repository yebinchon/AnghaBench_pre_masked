
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct kvaser_usb_net_priv {int channel; } ;
struct kvaser_cmd_simple {int dummy; } ;
struct TYPE_3__ {int channel; } ;
struct TYPE_4__ {TYPE_1__ simple; } ;
struct kvaser_cmd {scalar_t__ len; TYPE_2__ u; int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvaser_cmd*) ;
 struct kvaser_cmd* FUNC_1 (int,int ) ;
 int FUNC_2 (struct kvaser_usb_net_priv*,struct kvaser_cmd*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct kvaser_usb_net_priv *VAR_3,
         u8 VAR_4)
{
 struct kvaser_cmd *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->len = VAR_0 + sizeof(struct kvaser_cmd_simple);
 VAR_5->id = VAR_4;
 VAR_5->u.simple.channel = VAR_3->channel;

 VAR_6 = FUNC_2(VAR_3, VAR_5, VAR_5->len);
 if (VAR_6)
  FUNC_0(VAR_5);

 return VAR_6;
}
