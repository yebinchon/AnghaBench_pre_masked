
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_1(struct sk_buff *VAR_0, struct net_device *VAR_1)
{
 if (VAR_1) {
  VAR_0->dev = VAR_1;
  FUNC_0(VAR_0);
 }
}
