
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int pkt_type; struct net_device* dev; } ;
struct net_device {int broadcast; } ;
struct macvlan_dev {struct net_device* dev; } ;
struct ethhdr {int h_dest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_2,
     const struct macvlan_dev *VAR_3,
     const struct ethhdr *VAR_4, bool VAR_5)
{
 struct net_device *VAR_6 = VAR_3->dev;

 if (VAR_5)
  return FUNC_0(VAR_6, VAR_2);

 VAR_2->dev = VAR_6;
 if (FUNC_1(VAR_4->h_dest, VAR_6->broadcast))
  VAR_2->pkt_type = VAR_0;
 else
  VAR_2->pkt_type = VAR_1;

 return 0;
}
