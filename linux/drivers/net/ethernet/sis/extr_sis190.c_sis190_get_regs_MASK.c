
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis190_private {int lock; int mmio_addr; } ;
struct net_device {int dummy; } ;
struct ethtool_regs {int len; } ;


 int FUNC_0 (void*,int ,int ) ;
 struct sis190_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0, struct ethtool_regs *VAR_1,
       void *VAR_2)
{
 struct sis190_private *VAR_3 = FUNC_1(VAR_0);
 unsigned long VAR_4;

 FUNC_2(&VAR_3->lock, VAR_4);
 FUNC_0(VAR_2, VAR_3->mmio_addr, VAR_1->len);
 FUNC_3(&VAR_3->lock, VAR_4);
}
