
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct virtproc_info {size_t num_bufs; size_t buf_size; int bufs_dma; int rbufs; int vdev; int endpoints; scalar_t__ ns_ept; } ;
struct TYPE_5__ {int parent; } ;
struct virtio_device {TYPE_2__ dev; TYPE_1__* config; struct virtproc_info* priv; } ;
struct TYPE_4__ {int (* del_vqs ) (int ) ;int (* reset ) (struct virtio_device*) ;} ;


 int FUNC_0 (struct virtproc_info*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (TYPE_2__*,int *,int ) ;
 int FUNC_3 (int ,size_t,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct virtproc_info*) ;
 int VAR_0 ;
 int FUNC_6 (struct virtio_device*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct virtio_device *VAR_1)
{
 struct virtproc_info *VAR_2 = VAR_1->priv;
 size_t VAR_3 = VAR_2->num_bufs * VAR_2->buf_size;
 int VAR_4;

 VAR_1->config->reset(VAR_1);

 VAR_4 = FUNC_2(&VAR_1->dev, ((void*)0), VAR_0);
 if (VAR_4)
  FUNC_1(&VAR_1->dev, "can't remove rpmsg device: %d\n", VAR_4);

 if (VAR_2->ns_ept)
  FUNC_0(VAR_2, VAR_2->ns_ept);

 FUNC_4(&VAR_2->endpoints);

 VAR_1->config->del_vqs(VAR_2->vdev);

 FUNC_3(VAR_1->dev.parent, VAR_3,
     VAR_2->rbufs, VAR_2->bufs_dma);

 FUNC_5(VAR_2);
}
