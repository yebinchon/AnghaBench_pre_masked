
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; scalar_t__ len; struct net_device* dev; } ;
struct rmnet_port {int data_format; } ;
struct rmnet_map_dl_csum_trailer {int dummy; } ;
struct rmnet_map_control_command {unsigned char cmd_type; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
struct TYPE_2__ {int (* ndo_start_xmit ) (struct sk_buff*,struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct rmnet_map_control_command* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_2,
          unsigned char VAR_3,
          struct rmnet_port *VAR_4)
{
 struct rmnet_map_control_command *VAR_5;
 struct net_device *VAR_6 = VAR_2->dev;

 if (VAR_4->data_format & VAR_1)
  FUNC_4(VAR_2,
    VAR_2->len - sizeof(struct rmnet_map_dl_csum_trailer));

 VAR_2->protocol = FUNC_1(VAR_0);

 VAR_5 = FUNC_0(VAR_2);
 VAR_5->cmd_type = VAR_3 & 0x03;

 FUNC_2(VAR_6);
 VAR_6->netdev_ops->ndo_start_xmit(VAR_2, VAR_6);
 FUNC_3(VAR_6);
}
