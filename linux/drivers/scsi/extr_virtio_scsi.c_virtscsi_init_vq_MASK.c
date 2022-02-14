
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int dummy; } ;
struct virtio_scsi_vq {struct virtqueue* vq; int vq_lock; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct virtio_scsi_vq *VAR_0,
        struct virtqueue *VAR_1)
{
 FUNC_0(&VAR_0->vq_lock);
 VAR_0->vq = VAR_1;
}
