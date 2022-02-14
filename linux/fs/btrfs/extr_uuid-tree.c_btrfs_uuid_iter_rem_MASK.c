
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;


 scalar_t__ FUNC_0 (struct btrfs_trans_handle*) ;
 int FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*) ;
 struct btrfs_trans_handle* FUNC_3 (struct btrfs_root*,int) ;
 int FUNC_4 (struct btrfs_trans_handle*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct btrfs_root *VAR_0, u8 *VAR_1, u8 VAR_2,
          u64 VAR_3)
{
 struct btrfs_trans_handle *VAR_4;
 int VAR_5;


 VAR_4 = FUNC_3(VAR_0, 1);
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
  goto out;
 }

 VAR_5 = FUNC_4(VAR_4, VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_4);

out:
 return VAR_5;
}
