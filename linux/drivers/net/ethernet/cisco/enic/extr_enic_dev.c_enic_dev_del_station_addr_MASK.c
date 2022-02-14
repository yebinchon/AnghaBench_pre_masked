
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enic {int devcmd_lock; TYPE_1__* netdev; int vdev; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct enic *VAR_1)
{
 int VAR_2;

 if (!FUNC_0(VAR_1->netdev->dev_addr))
  return -VAR_0;

 FUNC_1(&VAR_1->devcmd_lock);
 VAR_2 = FUNC_3(VAR_1->vdev, VAR_1->netdev->dev_addr);
 FUNC_2(&VAR_1->devcmd_lock);

 return VAR_2;
}
