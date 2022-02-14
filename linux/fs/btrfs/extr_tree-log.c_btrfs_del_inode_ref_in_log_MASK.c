
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {struct btrfs_root* log_root; } ;
struct btrfs_inode {int log_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_trans_handle*,int) ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*,char const*,int,int ,int ,int *) ;
 int FUNC_2 (struct btrfs_root*) ;
 int FUNC_3 (struct btrfs_inode*) ;
 int FUNC_4 (struct btrfs_trans_handle*) ;
 int FUNC_5 (struct btrfs_trans_handle*,struct btrfs_inode*) ;
 int FUNC_6 (struct btrfs_root*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct btrfs_trans_handle *VAR_2,
          struct btrfs_root *VAR_3,
          const char *VAR_4, int VAR_5,
          struct btrfs_inode *VAR_6, u64 VAR_7)
{
 struct btrfs_root *VAR_8;
 u64 VAR_9;
 int VAR_10;

 if (!FUNC_5(VAR_2, VAR_6))
  return 0;

 VAR_10 = FUNC_6(VAR_3);
 if (VAR_10)
  return 0;
 VAR_8 = VAR_3->log_root;
 FUNC_7(&VAR_6->log_mutex);

 VAR_10 = FUNC_1(VAR_2, VAR_8, VAR_4, VAR_5, FUNC_3(VAR_6),
      VAR_7, &VAR_9);
 FUNC_8(&VAR_6->log_mutex);
 if (VAR_10 == -VAR_1) {
  FUNC_4(VAR_2);
  VAR_10 = 0;
 } else if (VAR_10 < 0 && VAR_10 != -VAR_0)
  FUNC_0(VAR_2, VAR_10);
 FUNC_2(VAR_3);

 return VAR_10;
}
