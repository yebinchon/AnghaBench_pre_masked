
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct fsync_inode_entry {int dummy; } ;
struct f2fs_sb_info {TYPE_1__* sb; int cp_mutex; } ;
struct cp_control {int reason; } ;
typedef int loff_t ;
struct TYPE_2__ {unsigned long s_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct list_head*) ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (struct f2fs_sb_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_4 (struct f2fs_sb_info*,int ) ;
 int FUNC_5 (struct list_head*,int) ;
 int FUNC_6 (struct f2fs_sb_info*,int) ;
 int FUNC_7 (struct f2fs_sb_info*,unsigned long) ;
 int FUNC_8 (struct f2fs_sb_info*,char*) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct f2fs_sb_info*,struct cp_control*) ;
 int FUNC_12 (struct f2fs_sb_info*,struct list_head*,int) ;
 int VAR_7 ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (struct list_head*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct f2fs_sb_info*,struct list_head*,struct list_head*,struct list_head*) ;
 int FUNC_18 (struct f2fs_sb_info*,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int,int) ;

int FUNC_21(struct f2fs_sb_info *VAR_8, bool VAR_9)
{
 struct list_head VAR_10, VAR_11;
 struct list_head VAR_12;
 int VAR_13;
 int VAR_14 = 0;
 unsigned long VAR_15 = VAR_8->sb->s_flags;
 bool VAR_16 = 0;




 if (VAR_15 & VAR_6) {
  FUNC_8(VAR_8, "recover fsync data on readonly fs");
  VAR_8->sb->s_flags &= ~VAR_6;
 }
 VAR_7 = FUNC_9("f2fs_fsync_inode_entry",
   sizeof(struct fsync_inode_entry));
 if (!VAR_7) {
  VAR_13 = -VAR_1;
  goto out;
 }

 FUNC_0(&VAR_10);
 FUNC_0(&VAR_11);
 FUNC_0(&VAR_12);


 FUNC_15(&VAR_8->cp_mutex);


 VAR_13 = FUNC_12(VAR_8, &VAR_10, VAR_9);
 if (VAR_13 || FUNC_14(&VAR_10))
  goto skip;

 if (VAR_9) {
  VAR_14 = 1;
  goto skip;
 }

 VAR_16 = 1;


 VAR_13 = FUNC_17(VAR_8, &VAR_10, &VAR_11, &VAR_12);
 if (!VAR_13)
  FUNC_6(VAR_8, !FUNC_14(&VAR_10));
 else {

  VAR_8->sb->s_flags = VAR_15;
 }
skip:
 FUNC_5(&VAR_10, VAR_13);
 FUNC_5(&VAR_11, VAR_13);


 FUNC_20(FUNC_2(VAR_8),
   (loff_t)FUNC_1(VAR_8) << VAR_2, -1);

 if (VAR_13) {
  FUNC_19(FUNC_3(VAR_8));
  FUNC_19(FUNC_2(VAR_8));
 } else {
  FUNC_4(VAR_8, VAR_4);
 }
 FUNC_16(&VAR_8->cp_mutex);


 FUNC_5(&VAR_12, VAR_13);

 if (VAR_16) {
  FUNC_18(VAR_8, VAR_3);

  if (!VAR_13) {
   struct cp_control VAR_17 = {
    .reason = VAR_0,
   };
   VAR_13 = FUNC_11(VAR_8, &VAR_17);
  }
 }

 FUNC_13(VAR_7);
out:





 VAR_8->sb->s_flags = VAR_15;

 return VAR_14 ? VAR_14: VAR_13;
}
