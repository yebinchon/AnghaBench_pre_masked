
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_fs {int dummy; } ;
struct super_block {int s_root; int s_flags; } ;
struct fuse_conn {int delete_stale; int release; } ;
struct fs_context {int root; struct fuse_conn* s_fs_info; int source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct fuse_conn*,int ,int *,struct virtio_fs*) ;
 int FUNC_7 (struct fuse_conn*) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;
 struct fuse_conn* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,int ) ;
 struct super_block* FUNC_13 (struct fs_context*,int ,int ) ;
 int FUNC_14 (struct super_block*) ;
 struct virtio_fs* FUNC_15 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_16 (struct virtio_fs*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_17(struct fs_context *VAR_9)
{
 struct virtio_fs *VAR_10;
 struct super_block *VAR_11;
 struct fuse_conn *VAR_12;
 int VAR_13;





 VAR_10 = FUNC_15(VAR_9->source);
 if (!VAR_10) {
  FUNC_12("virtio-fs: tag <%s> not found\n", VAR_9->source);
  return -VAR_0;
 }

 VAR_12 = FUNC_9(sizeof(struct fuse_conn), VAR_2);
 if (!VAR_12) {
  FUNC_10(&VAR_6);
  FUNC_16(VAR_10);
  FUNC_11(&VAR_6);
  return -VAR_1;
 }

 FUNC_6(VAR_12, FUNC_8(FUNC_3()), &VAR_5,
         VAR_10);
 VAR_12->release = VAR_4;
 VAR_12->delete_stale = 1;

 VAR_9->s_fs_info = VAR_12;
 VAR_11 = FUNC_13(VAR_9, VAR_8, VAR_7);
 FUNC_7(VAR_12);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 if (!VAR_11->s_root) {
  VAR_13 = FUNC_14(VAR_11);
  if (VAR_13) {
   FUNC_4(VAR_11);
   return VAR_13;
  }

  VAR_11->s_flags |= VAR_3;
 }

 FUNC_2(VAR_9->root);
 VAR_9->root = FUNC_5(VAR_11->s_root);
 return 0;
}
