
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_dev_replace {int replace_state; int srcdev; int cursor_left; } ;
struct btrfs_fs_info {struct btrfs_dev_replace dev_replace; } ;







 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static u64 FUNC_3(struct btrfs_fs_info *VAR_0)
{
 struct btrfs_dev_replace *VAR_1 = &VAR_0->dev_replace;
 u64 VAR_2 = 0;

 switch (VAR_1->replace_state) {
 case 130:
 case 132:
  VAR_2 = 0;
  break;
 case 131:
  VAR_2 = 1000;
  break;
 case 129:
 case 128:
  VAR_2 = FUNC_1(VAR_1->cursor_left,
    FUNC_2(FUNC_0(
      VAR_1->srcdev), 1000));
  break;
 }

 return VAR_2;
}
