
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
 int FUNC_0 (struct send_ctx*,int ,struct fs_path*) ;
 int FUNC_1 (struct send_ctx*,int ,int) ;
 int FUNC_2 (struct send_ctx*,int ) ;
 int FUNC_3 (struct btrfs_fs_info*,char*,int,int) ;
 struct fs_path* FUNC_4 () ;
 int FUNC_5 (struct fs_path*) ;
 int FUNC_6 (struct send_ctx*,int,int,struct fs_path*) ;
 int FUNC_7 (struct send_ctx*) ;

__attribute__((used)) static int FUNC_8(struct send_ctx *VAR_4, u64 VAR_5, u64 VAR_6, u64 VAR_7)
{
 struct btrfs_fs_info *VAR_8 = VAR_4->send_root->fs_info;
 int VAR_9 = 0;
 struct fs_path *VAR_10;

 FUNC_3(VAR_8, "send_chmod %llu mode=%llu", VAR_5, VAR_7);

 VAR_10 = FUNC_4();
 if (!VAR_10)
  return -VAR_3;

 VAR_9 = FUNC_2(VAR_4, VAR_2);
 if (VAR_9 < 0)
  goto out;

 VAR_9 = FUNC_6(VAR_4, VAR_5, VAR_6, VAR_10);
 if (VAR_9 < 0)
  goto out;
 FUNC_0(VAR_4, VAR_1, VAR_10);
 FUNC_1(VAR_4, VAR_0, VAR_7 & 07777);

 VAR_9 = FUNC_7(VAR_4);

tlv_put_failure:
out:
 FUNC_5(VAR_10);
 return VAR_9;
}
