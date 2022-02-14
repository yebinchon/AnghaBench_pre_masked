
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_0, struct net_device *VAR_1)
{
 bool VAR_2 = 1;

 if (VAR_1)
  VAR_2 = !FUNC_1(FUNC_0(VAR_0->dev), FUNC_0(VAR_1));

 FUNC_2(VAR_0, VAR_2);
 if (VAR_1)
  VAR_0->dev = VAR_1;
}
