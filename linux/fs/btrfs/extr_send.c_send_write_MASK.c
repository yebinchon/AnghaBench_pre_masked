
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct send_ctx {int read_buf; int cur_inode_gen; int cur_ino; TYPE_1__* send_root; } ;
struct fs_path {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct btrfs_fs_info* fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct send_ctx*,int ,int ,int) ;
 int FUNC_1 (struct send_ctx*,int ,struct fs_path*) ;
 int FUNC_2 (struct send_ctx*,int ,int ) ;
 int FUNC_3 (struct send_ctx*,int ) ;
 int FUNC_4 (struct btrfs_fs_info*,char*,int ,int ) ;
 int FUNC_5 (struct send_ctx*,int ,int ) ;
 struct fs_path* FUNC_6 () ;
 int FUNC_7 (struct fs_path*) ;
 int FUNC_8 (struct send_ctx*,int ,int ,struct fs_path*) ;
 int FUNC_9 (struct send_ctx*) ;

__attribute__((used)) static int FUNC_10(struct send_ctx *VAR_5, u64 VAR_6, u32 VAR_7)
{
 struct btrfs_fs_info *VAR_8 = VAR_5->send_root->fs_info;
 int VAR_9 = 0;
 struct fs_path *VAR_10;
 ssize_t VAR_11 = 0;

 VAR_10 = FUNC_6();
 if (!VAR_10)
  return -VAR_4;

 FUNC_4(VAR_8, "send_write offset=%llu, len=%d", VAR_6, VAR_7);

 VAR_11 = FUNC_5(VAR_5, VAR_6, VAR_7);
 if (VAR_11 <= 0) {
  if (VAR_11 < 0)
   VAR_9 = VAR_11;
  goto out;
 }

 VAR_9 = FUNC_3(VAR_5, VAR_3);
 if (VAR_9 < 0)
  goto out;

 VAR_9 = FUNC_8(VAR_5, VAR_5->cur_ino, VAR_5->cur_inode_gen, VAR_10);
 if (VAR_9 < 0)
  goto out;

 FUNC_1(VAR_5, VAR_2, VAR_10);
 FUNC_2(VAR_5, VAR_1, VAR_6);
 FUNC_0(VAR_5, VAR_0, VAR_5->read_buf, VAR_11);

 VAR_9 = FUNC_9(VAR_5);

tlv_put_failure:
out:
 FUNC_7(VAR_10);
 if (VAR_9 < 0)
  return VAR_9;
 return VAR_11;
}
