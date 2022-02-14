
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int i_ctime; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct TYPE_2__ {struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int const VAR_0 ;
 scalar_t__ FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*) ;
 int FUNC_3 (struct btrfs_trans_handle*) ;
 int FUNC_4 (struct inode*,scalar_t__ const,int *) ;
 struct btrfs_trans_handle* FUNC_5 (struct btrfs_root*,int) ;
 int FUNC_6 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*) ;
 int FUNC_7 (struct inode*) ;
 scalar_t__ const FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,scalar_t__ const) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_1,
     const u64 VAR_2,
     const int VAR_3)
{
 struct btrfs_trans_handle *VAR_4;
 struct btrfs_root *VAR_5 = FUNC_0(VAR_1)->root;
 int VAR_6;
 int VAR_7;

 if (VAR_3 & VAR_0 || VAR_2 <= FUNC_8(VAR_1))
  return 0;

 VAR_4 = FUNC_5(VAR_5, 1);
 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_4);

 VAR_1->i_ctime = FUNC_7(VAR_1);
 FUNC_9(VAR_1, VAR_2);
 FUNC_4(VAR_1, VAR_2, ((void*)0));
 VAR_6 = FUNC_6(VAR_4, VAR_5, VAR_1);
 VAR_7 = FUNC_3(VAR_4);

 return VAR_6 ? VAR_6 : VAR_7;
}
