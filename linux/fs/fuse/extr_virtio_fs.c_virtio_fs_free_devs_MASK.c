
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_fs_vq {int * fud; } ;
struct virtio_fs {unsigned int nvqs; struct virtio_fs_vq* vqs; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct virtio_fs *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nvqs; VAR_1++) {
  struct virtio_fs_vq *VAR_2 = &VAR_0->vqs[VAR_1];

  if (!VAR_2->fud)
   continue;

  FUNC_0(VAR_2->fud);
  VAR_2->fud = ((void*)0);
 }
}
