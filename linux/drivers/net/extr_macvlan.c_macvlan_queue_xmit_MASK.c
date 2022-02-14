
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct macvlan_port {int dummy; } ;
struct macvlan_dev {scalar_t__ mode; int lowerdev; struct macvlan_port* port; } ;
struct ethhdr {int h_dest; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,struct macvlan_port const*,struct net_device*,scalar_t__) ;
 struct macvlan_dev* FUNC_4 (struct macvlan_port const*,int ) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 struct macvlan_dev* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 const struct macvlan_dev *VAR_4 = FUNC_6(VAR_3);
 const struct macvlan_port *VAR_5 = VAR_4->port;
 const struct macvlan_dev *VAR_6;

 if (VAR_4->mode == VAR_0) {
  const struct ethhdr *VAR_7 = (void *)VAR_2->data;


  if (FUNC_2(VAR_7->h_dest)) {
   FUNC_3(VAR_2, VAR_5, VAR_3, VAR_0);
   goto xmit_world;
  }

  VAR_6 = FUNC_4(VAR_5, VAR_7->h_dest);
  if (VAR_6 && VAR_6->mode == VAR_0) {

   FUNC_0(VAR_4->lowerdev, VAR_2);

   return VAR_1;
  }
 }
xmit_world:
 VAR_2->dev = VAR_4->lowerdev;
 return FUNC_1(VAR_2,
        FUNC_5(VAR_3) ? VAR_3 : ((void*)0));
}
