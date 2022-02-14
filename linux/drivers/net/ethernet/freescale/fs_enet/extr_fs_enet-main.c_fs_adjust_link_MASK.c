
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fs_enet_private {int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* adjust_link ) (struct net_device*) ;} ;


 int FUNC_0 (struct net_device*) ;
 struct fs_enet_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0)
{
 struct fs_enet_private *VAR_1 = FUNC_1(VAR_0);
 unsigned long VAR_2;

 FUNC_2(&VAR_1->lock, VAR_2);

 if(VAR_1->ops->adjust_link)
  VAR_1->ops->adjust_link(VAR_0);
 else
  FUNC_0(VAR_0);

 FUNC_3(&VAR_1->lock, VAR_2);
}
