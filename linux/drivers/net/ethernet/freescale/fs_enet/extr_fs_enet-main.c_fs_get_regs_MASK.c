
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fs_enet_private {int lock; TYPE_1__* ops; } ;
struct ethtool_regs {int len; scalar_t__ version; } ;
struct TYPE_2__ {int (* get_regs ) (struct net_device*,void*,int*) ;} ;


 struct fs_enet_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct net_device*,void*,int*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0, struct ethtool_regs *VAR_1,
    void *VAR_2)
{
 struct fs_enet_private *VAR_3 = FUNC_0(VAR_0);
 unsigned long VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = VAR_1->len;

 FUNC_1(&VAR_3->lock, VAR_4);
 VAR_5 = (*VAR_3->ops->get_regs)(VAR_0, VAR_2, &VAR_6);
 FUNC_2(&VAR_3->lock, VAR_4);

 if (VAR_5 == 0)
  VAR_1->version = 0;
}
