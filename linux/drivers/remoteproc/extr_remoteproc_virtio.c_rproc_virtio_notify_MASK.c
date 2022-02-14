
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtqueue {struct rproc_vring* priv; } ;
struct rproc_vring {int notifyid; TYPE_1__* rvdev; } ;
struct rproc {TYPE_2__* ops; int dev; } ;
struct TYPE_4__ {int (* kick ) (struct rproc*,int) ;} ;
struct TYPE_3__ {struct rproc* rproc; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct rproc*,int) ;

__attribute__((used)) static bool FUNC_2(struct virtqueue *VAR_0)
{
 struct rproc_vring *VAR_1 = VAR_0->priv;
 struct rproc *VAR_2 = VAR_1->rvdev->rproc;
 int VAR_3 = VAR_1->notifyid;

 FUNC_0(&VAR_2->dev, "kicking vq index: %d\n", VAR_3);

 VAR_2->ops->kick(VAR_2, VAR_3);
 return 1;
}
