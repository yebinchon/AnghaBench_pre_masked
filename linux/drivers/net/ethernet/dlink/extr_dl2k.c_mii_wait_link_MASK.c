
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_private {int phy_addr; } ;
struct net_device {int dummy; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,int,int ) ;
 struct netdev_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int
FUNC_3 (struct net_device *VAR_2, int VAR_3)
{
 __u16 VAR_4;
 int VAR_5;
 struct netdev_private *VAR_6;

 VAR_6 = FUNC_2(VAR_2);
 VAR_5 = VAR_6->phy_addr;

 do {
  VAR_4 = FUNC_1 (VAR_2, VAR_5, VAR_1);
  if (VAR_4 & VAR_0)
   return 0;
  FUNC_0 (1);
 } while (--VAR_3 > 0);
 return -1;
}
