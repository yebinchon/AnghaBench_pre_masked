
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ pkt_type; struct net_device* dev; } ;
struct rmnet_port {int rmnet_mode; int bridge_ep; } ;
struct net_device {int dummy; } ;
typedef int rx_handler_result_t ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 struct rmnet_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*,struct rmnet_port*) ;

rx_handler_result_t FUNC_3(struct sk_buff **VAR_3)
{
 struct sk_buff *VAR_4 = *VAR_3;
 struct rmnet_port *VAR_5;
 struct net_device *VAR_6;

 if (!VAR_4)
  goto done;

 if (VAR_4->pkt_type == VAR_0)
  return VAR_2;

 VAR_6 = VAR_4->dev;
 VAR_5 = FUNC_1(VAR_6);

 switch (VAR_5->rmnet_mode) {
 case 128:
  FUNC_2(VAR_4, VAR_5);
  break;
 case 129:
  FUNC_0(VAR_4, VAR_5->bridge_ep);
  break;
 }

done:
 return VAR_1;
}
