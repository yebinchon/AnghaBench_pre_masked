
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vhost_net {int tx_flush; TYPE_2__* vqs; } ;
struct TYPE_6__ {int refcount; } ;
struct TYPE_4__ {int mutex; } ;
struct TYPE_5__ {TYPE_1__ vq; TYPE_3__* ubufs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vhost_net*,size_t) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(struct vhost_net *VAR_2)
{
 FUNC_3(VAR_2, VAR_1);
 FUNC_3(VAR_2, VAR_0);
 if (VAR_2->vqs[VAR_1].ubufs) {
  FUNC_1(&VAR_2->vqs[VAR_1].vq.mutex);
  VAR_2->tx_flush = 1;
  FUNC_2(&VAR_2->vqs[VAR_1].vq.mutex);

  FUNC_4(VAR_2->vqs[VAR_1].ubufs);
  FUNC_1(&VAR_2->vqs[VAR_1].vq.mutex);
  VAR_2->tx_flush = 0;
  FUNC_0(&VAR_2->vqs[VAR_1].ubufs->refcount, 1);
  FUNC_2(&VAR_2->vqs[VAR_1].vq.mutex);
 }
}
