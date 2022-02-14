
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_fs_vq {int connected; int lock; } ;
struct virtio_fs {struct virtio_fs_vq* vqs; } ;
struct super_block {int dummy; } ;
struct TYPE_2__ {struct virtio_fs* priv; } ;
struct fuse_conn {TYPE_1__ iq; } ;


 size_t VAR_0 ;
 void FUNC_0 (struct super_block*) ;
 struct fuse_conn* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct virtio_fs*) ;
 int FUNC_5 (struct virtio_fs*) ;
 int FUNC_6 (struct virtio_fs*) ;

__attribute__((used)) static void FUNC_7(struct super_block *VAR_1)
{
 struct fuse_conn *VAR_2 = FUNC_1(VAR_1);
 struct virtio_fs *VAR_3;
 struct virtio_fs_vq *VAR_4;


 if (!VAR_2)
  return FUNC_0(VAR_1);

 VAR_3 = VAR_2->iq.priv;
 VAR_4 = &VAR_3->vqs[VAR_0];


 FUNC_2(&VAR_4->lock);
 VAR_4->connected = 0;
 FUNC_3(&VAR_4->lock);
 FUNC_4(VAR_3);

 FUNC_0(VAR_1);






 FUNC_6(VAR_3);
 FUNC_4(VAR_3);
 FUNC_5(VAR_3);
}
