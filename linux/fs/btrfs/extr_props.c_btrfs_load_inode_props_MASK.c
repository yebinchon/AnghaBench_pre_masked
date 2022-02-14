
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct TYPE_3__ {struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (struct btrfs_root*,struct btrfs_path*,int ,int ,struct inode*) ;

int FUNC_3(struct inode *VAR_1, struct btrfs_path *VAR_2)
{
 struct btrfs_root *VAR_3 = FUNC_0(VAR_1)->root;
 u64 VAR_4 = FUNC_1(FUNC_0(VAR_1));
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_2, VAR_4, VAR_0, VAR_1);

 return VAR_5;
}
