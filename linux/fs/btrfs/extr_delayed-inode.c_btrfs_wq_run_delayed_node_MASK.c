
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int delayed_workers; } ;
struct btrfs_delayed_root {int dummy; } ;
struct btrfs_async_delayed_work {int nr; int work; struct btrfs_delayed_root* delayed_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int *,int *) ;
 int FUNC_1 (int ,int *) ;
 struct btrfs_async_delayed_work* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct btrfs_delayed_root *VAR_4,
         struct btrfs_fs_info *VAR_5, int VAR_6)
{
 struct btrfs_async_delayed_work *VAR_7;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->delayed_root = VAR_4;
 FUNC_0(&VAR_7->work, VAR_3,
   VAR_2, ((void*)0), ((void*)0));
 VAR_7->nr = VAR_6;

 FUNC_1(VAR_5->delayed_workers, &VAR_7->work);
 return 0;
}
