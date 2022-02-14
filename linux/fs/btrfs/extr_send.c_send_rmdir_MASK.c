
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct send_ctx {TYPE_1__* send_root; } ;
struct fs_path {int start; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_2__ {struct btrfs_fs_info* fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct send_ctx*,int ,struct fs_path*) ;
 int FUNC_1 (struct send_ctx*,int ) ;
 int FUNC_2 (struct btrfs_fs_info*,char*,int ) ;
 int FUNC_3 (struct send_ctx*) ;

__attribute__((used)) static int FUNC_4(struct send_ctx *VAR_2, struct fs_path *VAR_3)
{
 struct btrfs_fs_info *VAR_4 = VAR_2->send_root->fs_info;
 int VAR_5;

 FUNC_2(VAR_4, "send_rmdir %s", VAR_3->start);

 VAR_5 = FUNC_1(VAR_2, VAR_1);
 if (VAR_5 < 0)
  goto out;

 FUNC_0(VAR_2, VAR_0, VAR_3);

 VAR_5 = FUNC_3(VAR_2);

tlv_put_failure:
out:
 return VAR_5;
}
