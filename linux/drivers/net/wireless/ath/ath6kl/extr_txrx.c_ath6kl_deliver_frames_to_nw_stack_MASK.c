
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct net_device* dev; int protocol; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
           struct sk_buff *VAR_2)
{
 if (!VAR_2)
  return;

 VAR_2->dev = VAR_1;

 if (!(VAR_2->dev->flags & VAR_0)) {
  FUNC_0(VAR_2);
  return;
 }

 VAR_2->protocol = FUNC_1(VAR_2, VAR_2->dev);

 FUNC_2(VAR_2);
}
