
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yam_port {int send_queue; } ;
struct sk_buff {scalar_t__ protocol; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct yam_port* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_5(struct sk_buff *VAR_2,
      struct net_device *VAR_3)
{
 struct yam_port *VAR_4 = FUNC_2(VAR_3);

 if (VAR_2->protocol == FUNC_1(VAR_0))
  return FUNC_0(VAR_2);

 FUNC_4(&VAR_4->send_queue, VAR_2);
 FUNC_3(VAR_3);
 return VAR_1;
}
