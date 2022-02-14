
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netdev_private {int csr6; int lock; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 struct netdev_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0)
{
 struct netdev_private *VAR_1 = FUNC_1(VAR_0);
 u32 VAR_2 = FUNC_0(VAR_0);
 FUNC_2(&VAR_1->lock);
 FUNC_4(VAR_0, (VAR_1->csr6 & ~0x00F8) | VAR_2);
 FUNC_3(&VAR_1->lock);
}
