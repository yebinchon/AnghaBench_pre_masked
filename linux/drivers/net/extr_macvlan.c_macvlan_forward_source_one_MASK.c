
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int pkt_type; struct net_device* dev; } ;
struct net_device {int flags; int dev_addr; } ;
struct macvlan_dev {struct net_device* dev; } ;
struct TYPE_2__ {int h_dest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct macvlan_dev*,int,int,int) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_5,
           struct macvlan_dev *VAR_6)
{
 struct sk_buff *VAR_7;
 struct net_device *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_8 = VAR_6->dev;
 if (FUNC_5(!(VAR_8->flags & VAR_2)))
  return;

 VAR_7 = FUNC_4(VAR_5, VAR_1);
 if (!VAR_7)
  return;

 VAR_9 = VAR_7->len + VAR_0;
 VAR_7->dev = VAR_8;

 if (FUNC_1(FUNC_0(VAR_5)->h_dest, VAR_8->dev_addr))
  VAR_7->pkt_type = VAR_4;

 VAR_10 = FUNC_3(VAR_7);
 FUNC_2(VAR_6, VAR_9, VAR_10 == VAR_3, 0);
}
