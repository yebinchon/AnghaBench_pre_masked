
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_private {int* phys; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,int,int ) ;
 struct netdev_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;
 struct netdev_private *VAR_5;

 VAR_5 = FUNC_2(VAR_1);
 VAR_4 = VAR_5->phys[0];

 do {
  VAR_3 = FUNC_1(VAR_1, VAR_4, VAR_0);
  if (VAR_3 & 0x0004)
   return 0;
  FUNC_0(1);
 } while (--VAR_2 > 0);
 return -1;
}
