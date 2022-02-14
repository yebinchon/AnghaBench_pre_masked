
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_eth_private {int speed; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sh_eth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2)
{
 struct sh_eth_private *VAR_3 = FUNC_0(VAR_2);

 switch (VAR_3->speed) {
 case 10:
  FUNC_1(VAR_2, VAR_0, VAR_1, 0);
  break;
 case 100:
  FUNC_1(VAR_2, VAR_0, VAR_1, VAR_1);
  break;
 }
}
