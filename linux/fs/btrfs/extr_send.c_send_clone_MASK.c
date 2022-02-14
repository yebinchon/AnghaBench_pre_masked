
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct send_ctx {TYPE_3__* send_root; int cur_inode_gen; int cur_ino; } ;
struct fs_path {int dummy; } ;
struct clone_root {int offset; TYPE_3__* root; int ino; } ;
struct TYPE_6__ {int ctransid; int uuid; int received_uuid; } ;
struct TYPE_5__ {int objectid; } ;
struct TYPE_7__ {TYPE_2__ root_item; TYPE_1__ root_key; int fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct send_ctx*,int ,struct fs_path*) ;
 int FUNC_1 (struct send_ctx*,int ,int ) ;
 int FUNC_2 (struct send_ctx*,int ,int ) ;
 int FUNC_3 (struct send_ctx*,int ) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 struct fs_path* FUNC_6 () ;
 int FUNC_7 (struct fs_path*) ;
 int FUNC_8 (struct send_ctx*,int ,int ,struct fs_path*) ;
 int FUNC_9 (TYPE_3__*,int ,int *,int *,int *,int *,int *,int *) ;
 int FUNC_10 (TYPE_3__*,int ,struct fs_path*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct send_ctx*) ;

__attribute__((used)) static int FUNC_13(struct send_ctx *VAR_9,
        u64 VAR_10, u32 VAR_11,
        struct clone_root *VAR_12)
{
 int VAR_13 = 0;
 struct fs_path *VAR_14;
 u64 VAR_15;

 FUNC_4(VAR_9->send_root->fs_info,
      "send_clone offset=%llu, len=%d, clone_root=%llu, clone_inode=%llu, clone_offset=%llu",
      VAR_10, VAR_11, VAR_12->root->root_key.objectid,
      VAR_12->ino, VAR_12->offset);

 VAR_14 = FUNC_6();
 if (!VAR_14)
  return -VAR_8;

 VAR_13 = FUNC_3(VAR_9, VAR_7);
 if (VAR_13 < 0)
  goto out;

 VAR_13 = FUNC_8(VAR_9, VAR_9->cur_ino, VAR_9->cur_inode_gen, VAR_14);
 if (VAR_13 < 0)
  goto out;

 FUNC_1(VAR_9, VAR_5, VAR_10);
 FUNC_1(VAR_9, VAR_1, VAR_11);
 FUNC_0(VAR_9, VAR_6, VAR_14);

 if (VAR_12->root == VAR_9->send_root) {
  VAR_13 = FUNC_9(VAR_9->send_root, VAR_12->ino, ((void*)0),
    &VAR_15, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
  if (VAR_13 < 0)
   goto out;
  VAR_13 = FUNC_8(VAR_9, VAR_12->ino, VAR_15, VAR_14);
 } else {
  VAR_13 = FUNC_10(VAR_12->root, VAR_12->ino, VAR_14);
 }
 if (VAR_13 < 0)
  goto out;
 if (!FUNC_5(VAR_12->root->root_item.received_uuid))
  FUNC_2(VAR_9, VAR_4,
        VAR_12->root->root_item.received_uuid);
 else
  FUNC_2(VAR_9, VAR_4,
        VAR_12->root->root_item.uuid);
 FUNC_1(VAR_9, VAR_0,
      FUNC_11(VAR_12->root->root_item.ctransid));
 FUNC_0(VAR_9, VAR_3, VAR_14);
 FUNC_1(VAR_9, VAR_2,
   VAR_12->offset);

 VAR_13 = FUNC_12(VAR_9);

tlv_put_failure:
out:
 FUNC_7(VAR_14);
 return VAR_13;
}
