
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnae_handle {int q_num; int node; struct hnae_ae_dev* dev; int * qs; } ;
struct hnae_ae_dev {int cls_dev; int owner; TYPE_1__* ops; int lock; } ;
struct TYPE_2__ {int (* put_handle ) (struct hnae_handle*) ;int (* reset ) (struct hnae_handle*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hnae_handle*) ;
 int FUNC_5 (struct hnae_handle*) ;

void FUNC_6(struct hnae_handle *VAR_0)
{
 struct hnae_ae_dev *VAR_1 = VAR_0->dev;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->q_num; VAR_2++)
  FUNC_0(VAR_0->qs[VAR_2]);

 if (VAR_0->dev->ops->reset)
  VAR_0->dev->ops->reset(VAR_0);

 FUNC_1(&VAR_1->lock, &VAR_0->node);

 if (VAR_1->ops->put_handle)
  VAR_1->ops->put_handle(VAR_0);

 FUNC_2(VAR_1->owner);

 FUNC_3(&VAR_1->cls_dev);
}
