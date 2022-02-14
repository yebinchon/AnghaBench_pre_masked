
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_trans_handle*,struct btrfs_root*,int ) ;

__attribute__((used)) static int FUNC_1(struct btrfs_trans_handle *VAR_1,
         struct btrfs_root *VAR_2, u64 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4 == -VAR_0)
  VAR_4 = 0;

 return VAR_4;
}
