
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct send_ctx {int dummy; } ;
struct list_head {int dummy; } ;
struct fs_path {int dummy; } ;
struct btrfs_root {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct list_head*,int ,int ,struct fs_path*) ;
 int FUNC_1 (struct fs_path*,struct fs_path*) ;
 struct fs_path* FUNC_2 () ;
 int FUNC_3 (struct fs_path*) ;
 int FUNC_4 (struct send_ctx*,int ,int ,struct fs_path*) ;
 int FUNC_5 (struct btrfs_root*,int ,int *,int *,int *,int *,int *,int *) ;

__attribute__((used)) static int FUNC_6(struct btrfs_root *VAR_1, u64 VAR_2, struct fs_path *VAR_3,
        void *VAR_4, struct list_head *VAR_5)
{
 int VAR_6 = 0;
 struct send_ctx *VAR_7 = VAR_4;
 struct fs_path *VAR_8;
 u64 VAR_9;

 VAR_8 = FUNC_2();
 if (!VAR_8)
  return -VAR_0;

 VAR_6 = FUNC_5(VAR_1, VAR_2, ((void*)0), &VAR_9, ((void*)0), ((void*)0),
   ((void*)0), ((void*)0));
 if (VAR_6 < 0)
  goto out;

 VAR_6 = FUNC_4(VAR_7, VAR_2, VAR_9, VAR_8);
 if (VAR_6 < 0)
  goto out;
 VAR_6 = FUNC_1(VAR_8, VAR_3);
 if (VAR_6 < 0)
  goto out;

 VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_9, VAR_8);

out:
 if (VAR_6)
  FUNC_3(VAR_8);
 return VAR_6;
}
