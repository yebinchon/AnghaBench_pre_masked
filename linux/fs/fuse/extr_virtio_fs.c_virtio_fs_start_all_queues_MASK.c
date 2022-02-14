
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_fs_vq {int connected; int lock; } ;
struct virtio_fs {int nvqs; struct virtio_fs_vq* vqs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct virtio_fs *VAR_0)
{
 struct virtio_fs_vq *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->nvqs; VAR_2++) {
  VAR_1 = &VAR_0->vqs[VAR_2];
  FUNC_0(&VAR_1->lock);
  VAR_1->connected = 1;
  FUNC_1(&VAR_1->lock);
 }
}
