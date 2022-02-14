
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int phydev; } ;
struct fs_enet_private {int interrupt; int lock; int tx_lock; TYPE_1__* ops; int timeout_work; int napi; } ;
struct TYPE_2__ {int (* stop ) (struct net_device*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (int *) ;
 struct fs_enet_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (struct net_device*) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_0)
{
 struct fs_enet_private *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2;

 FUNC_5(VAR_0);
 FUNC_4(VAR_0);
 FUNC_2(&VAR_1->napi);
 FUNC_0(&VAR_1->timeout_work);
 FUNC_7(VAR_0->phydev);

 FUNC_9(&VAR_1->lock, VAR_2);
 FUNC_8(&VAR_1->tx_lock);
 (*VAR_1->ops->stop)(VAR_0);
 FUNC_10(&VAR_1->tx_lock);
 FUNC_11(&VAR_1->lock, VAR_2);


 FUNC_6(VAR_0->phydev);
 FUNC_1(VAR_1->interrupt, VAR_0);

 return 0;
}
