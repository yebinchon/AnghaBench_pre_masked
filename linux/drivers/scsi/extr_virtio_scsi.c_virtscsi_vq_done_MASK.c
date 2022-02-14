
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int dummy; } ;
struct virtio_scsi_vq {int vq_lock; struct virtqueue* vq; } ;
struct virtio_scsi {int dummy; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct virtqueue*) ;
 int FUNC_4 (struct virtqueue*) ;
 void* FUNC_5 (struct virtqueue*,unsigned int*) ;
 int FUNC_6 (struct virtqueue*) ;

__attribute__((used)) static void FUNC_7(struct virtio_scsi *VAR_0,
        struct virtio_scsi_vq *VAR_1,
        void (*VAR_2)(struct virtio_scsi *VAR_3, void *VAR_4))
{
 void *VAR_5;
 unsigned int VAR_6;
 unsigned long VAR_7;
 struct virtqueue *VAR_8 = VAR_1->vq;

 FUNC_0(&VAR_1->vq_lock, VAR_7);
 do {
  FUNC_3(VAR_8);
  while ((VAR_5 = FUNC_5(VAR_8, &VAR_6)) != ((void*)0))
   VAR_2(VAR_0, VAR_5);

  if (FUNC_2(FUNC_6(VAR_8)))
   break;
 } while (!FUNC_4(VAR_8));
 FUNC_1(&VAR_1->vq_lock, VAR_7);
}
