
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vortex_private {int lock; scalar_t__ full_bus_master_rx; } ;
struct net_device {int irq; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int ,struct net_device*) ;
 struct vortex_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t
FUNC_5(int VAR_0, void *VAR_1)
{
 struct net_device *VAR_2 = VAR_1;
 struct vortex_private *VAR_3 = FUNC_2(VAR_2);
 unsigned long VAR_4;
 irqreturn_t VAR_5;

 FUNC_3(&VAR_3->lock, VAR_4);

 if (VAR_3->full_bus_master_rx)
  VAR_5 = FUNC_0(VAR_2->irq, VAR_2);
 else
  VAR_5 = FUNC_1(VAR_2->irq, VAR_2);

 FUNC_4(&VAR_3->lock, VAR_4);

 return VAR_5;
}
