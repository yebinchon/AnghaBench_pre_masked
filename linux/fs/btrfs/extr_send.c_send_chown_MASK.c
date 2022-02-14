
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct send_ctx {TYPE_1__* send_root; } ;
struct fs_path {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_2__ {struct btrfs_fs_info* fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct send_ctx*,int ,struct fs_path*) ;
 int FUNC_1 (struct send_ctx*,int ,int ) ;
 int FUNC_2 (struct send_ctx*,int ) ;
 int FUNC_3 (struct btrfs_fs_info*,char*,int ,int ,int ) ;
 struct fs_path* FUNC_4 () ;
 int FUNC_5 (struct fs_path*) ;
 int FUNC_6 (struct send_ctx*,int ,int ,struct fs_path*) ;
 int FUNC_7 (struct send_ctx*) ;

__attribute__((used)) static int FUNC_8(struct send_ctx *VAR_5, u64 VAR_6, u64 VAR_7, u64 VAR_8, u64 VAR_9)
{
 struct btrfs_fs_info *VAR_10 = VAR_5->send_root->fs_info;
 int VAR_11 = 0;
 struct fs_path *VAR_12;

 FUNC_3(VAR_10, "send_chown %llu uid=%llu, gid=%llu",
      VAR_6, VAR_8, VAR_9);

 VAR_12 = FUNC_4();
 if (!VAR_12)
  return -VAR_4;

 VAR_11 = FUNC_2(VAR_5, VAR_3);
 if (VAR_11 < 0)
  goto out;

 VAR_11 = FUNC_6(VAR_5, VAR_6, VAR_7, VAR_12);
 if (VAR_11 < 0)
  goto out;
 FUNC_0(VAR_5, VAR_1, VAR_12);
 FUNC_1(VAR_5, VAR_2, VAR_8);
 FUNC_1(VAR_5, VAR_0, VAR_9);

 VAR_11 = FUNC_7(VAR_5);

tlv_put_failure:
out:
 FUNC_5(VAR_12);
 return VAR_11;
}
