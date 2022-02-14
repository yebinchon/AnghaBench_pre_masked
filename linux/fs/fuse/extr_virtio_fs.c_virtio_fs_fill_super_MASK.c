
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct virtio_fs_vq {TYPE_2__* fud; } ;
struct virtio_fs {unsigned int nvqs; struct virtio_fs_vq* vqs; int tag; int list; } ;
struct super_block {int dummy; } ;
struct fuse_fs_context {int default_permissions; int allow_other; int blksize; int destroy; int no_control; int no_force_umount; int no_mount_options; void** fudptr; int max_read; int rootmode; } ;
struct TYPE_4__ {struct virtio_fs* priv; } ;
struct fuse_conn {TYPE_1__ iq; } ;
struct TYPE_5__ {struct fuse_conn* fc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,struct fuse_conn*) ;
 int FUNC_2 (struct super_block*,struct fuse_fs_context*) ;
 int FUNC_3 (struct fuse_conn*) ;
 struct fuse_conn* FUNC_4 (struct super_block*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (struct virtio_fs*) ;
 int VAR_5 ;
 int FUNC_10 (struct virtio_fs*) ;

__attribute__((used)) static int FUNC_11(struct super_block *VAR_6)
{
 struct fuse_conn *VAR_7 = FUNC_4(VAR_6);
 struct virtio_fs *VAR_8 = VAR_7->iq.priv;
 unsigned int VAR_9;
 int VAR_10;
 struct fuse_fs_context VAR_11 = {
  .rootmode = VAR_2,
  .default_permissions = 1,
  .allow_other = 1,
  .max_read = VAR_3,
  .blksize = 512,
  .destroy = 1,
  .no_control = 1,
  .no_force_umount = 1,
  .no_mount_options = 1,
 };

 FUNC_6(&VAR_5);





 VAR_10 = -VAR_0;
 if (FUNC_5(&VAR_8->list)) {
  FUNC_8("virtio-fs: tag <%s> not found\n", VAR_8->tag);
  goto err;
 }

 VAR_10 = -VAR_1;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  struct virtio_fs_vq *VAR_12 = &VAR_8->vqs[VAR_9];

  VAR_12->fud = FUNC_0();
  if (!VAR_12->fud)
   goto err_free_fuse_devs;
 }

 VAR_11.fudptr = (void **)&VAR_8->vqs[VAR_4].fud;
 VAR_10 = FUNC_2(VAR_6, &VAR_11);
 if (VAR_10 < 0)
  goto err_free_fuse_devs;

 VAR_7 = VAR_8->vqs[VAR_4].fud->fc;

 for (VAR_9 = 0; VAR_9 < VAR_8->nvqs; VAR_9++) {
  struct virtio_fs_vq *VAR_13 = &VAR_8->vqs[VAR_9];

  if (VAR_9 == VAR_4)
   continue;
  FUNC_1(VAR_13->fud, VAR_7);
 }


 FUNC_10(VAR_8);
 FUNC_3(VAR_7);
 FUNC_7(&VAR_5);
 return 0;

err_free_fuse_devs:
 FUNC_9(VAR_8);
err:
 FUNC_7(&VAR_5);
 return VAR_10;
}
