
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
 int VAR_2 ;
 int FUNC_0 (struct send_ctx*,int ,struct fs_path*) ;
 int FUNC_1 (struct send_ctx*,int ) ;
 int FUNC_2 (struct btrfs_fs_info*,char*,int ,int ) ;
 int FUNC_3 (struct send_ctx*) ;

__attribute__((used)) static int FUNC_4(struct send_ctx *VAR_3,
       struct fs_path *VAR_4, struct fs_path *VAR_5)
{
 struct btrfs_fs_info *VAR_6 = VAR_3->send_root->fs_info;
 int VAR_7;

 FUNC_2(VAR_6, "send_rename %s -> %s", VAR_4->start, VAR_5->start);

 VAR_7 = FUNC_1(VAR_3, VAR_2);
 if (VAR_7 < 0)
  goto out;

 FUNC_0(VAR_3, VAR_0, VAR_4);
 FUNC_0(VAR_3, VAR_1, VAR_5);

 VAR_7 = FUNC_3(VAR_3);

tlv_put_failure:
out:
 return VAR_7;
}
