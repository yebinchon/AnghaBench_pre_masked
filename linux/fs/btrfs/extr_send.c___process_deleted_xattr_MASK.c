
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct send_ctx {int cur_inode_gen; int cur_ino; } ;
struct fs_path {int dummy; } ;
struct btrfs_key {int dummy; } ;


 int VAR_0 ;
 struct fs_path* FUNC_0 () ;
 int FUNC_1 (struct fs_path*) ;
 int FUNC_2 (struct send_ctx*,int ,int ,struct fs_path*) ;
 int FUNC_3 (struct send_ctx*,struct fs_path*,char const*,int) ;

__attribute__((used)) static int FUNC_4(int VAR_1, struct btrfs_key *VAR_2,
       const char *VAR_3, int VAR_4,
       const char *VAR_5, int VAR_6,
       u8 VAR_7, void *VAR_8)
{
 int VAR_9;
 struct send_ctx *VAR_10 = VAR_8;
 struct fs_path *VAR_11;

 VAR_11 = FUNC_0();
 if (!VAR_11)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_10, VAR_10->cur_ino, VAR_10->cur_inode_gen, VAR_11);
 if (VAR_9 < 0)
  goto out;

 VAR_9 = FUNC_3(VAR_10, VAR_11, VAR_3, VAR_4);

out:
 FUNC_1(VAR_11);
 return VAR_9;
}
