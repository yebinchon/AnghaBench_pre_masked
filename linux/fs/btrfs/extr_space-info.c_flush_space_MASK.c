
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_space_info {int flags; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_fs_info {struct btrfs_root* extent_root; } ;




 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;






 int FUNC_0 (struct btrfs_trans_handle*) ;
 int FUNC_1 (struct btrfs_trans_handle*) ;

 int FUNC_2 (struct btrfs_trans_handle*,int ,int ) ;
 int FUNC_3 (struct btrfs_trans_handle*) ;
 struct btrfs_trans_handle* FUNC_4 (struct btrfs_root*) ;
 int FUNC_5 (struct btrfs_fs_info*) ;
 int FUNC_6 (struct btrfs_fs_info*) ;
 int FUNC_7 (struct btrfs_trans_handle*,int) ;
 int FUNC_8 (struct btrfs_trans_handle*,int) ;
 int FUNC_9 (struct btrfs_fs_info*) ;
 int FUNC_10 (struct btrfs_fs_info*,int) ;
 int FUNC_11 (struct btrfs_fs_info*,struct btrfs_space_info*) ;
 int FUNC_12 (struct btrfs_fs_info*,int,int,int) ;
 int FUNC_13 (struct btrfs_fs_info*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_14(struct btrfs_fs_info *VAR_3,
         struct btrfs_space_info *VAR_4, u64 VAR_5,
         int VAR_6)
{
 struct btrfs_root *VAR_7 = VAR_3->extent_root;
 struct btrfs_trans_handle *VAR_8;
 int VAR_9;
 int VAR_10 = 0;

 switch (VAR_6) {
 case 131:
 case 132:
  if (VAR_6 == 131)
   VAR_9 = FUNC_10(VAR_3, VAR_5) * 2;
  else
   VAR_9 = -1;

  VAR_8 = FUNC_4(VAR_7);
  if (FUNC_0(VAR_8)) {
   VAR_10 = FUNC_1(VAR_8);
   break;
  }
  VAR_10 = FUNC_7(VAR_8, VAR_9);
  FUNC_3(VAR_8);
  break;
 case 134:
 case 133:
  FUNC_12(VAR_3, VAR_5 * 2, VAR_5,
    VAR_6 == 133);
  break;
 case 129:
 case 130:
  VAR_8 = FUNC_4(VAR_7);
  if (FUNC_0(VAR_8)) {
   VAR_10 = FUNC_1(VAR_8);
   break;
  }
  if (VAR_6 == 129)
   VAR_9 = FUNC_10(VAR_3, VAR_5);
  else
   VAR_9 = 0;
  FUNC_8(VAR_8, VAR_9);
  FUNC_3(VAR_8);
  break;
 case 137:
 case 136:
  VAR_8 = FUNC_4(VAR_7);
  if (FUNC_0(VAR_8)) {
   VAR_10 = FUNC_1(VAR_8);
   break;
  }
  VAR_10 = FUNC_2(VAR_8,
    FUNC_5(VAR_3),
    (VAR_6 == 137) ? VAR_1 :
     VAR_0);
  FUNC_3(VAR_8);
  if (VAR_10 > 0 || VAR_10 == -VAR_2)
   VAR_10 = 0;
  break;
 case 128:





  FUNC_6(VAR_3);
  FUNC_9(VAR_3);
  break;
 case 135:
  VAR_10 = FUNC_11(VAR_3, VAR_4);
  break;
 default:
  VAR_10 = -VAR_2;
  break;
 }

 FUNC_13(VAR_3, VAR_4->flags, VAR_5, VAR_6,
    VAR_10);
 return;
}
