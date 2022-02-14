
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {TYPE_1__* sb; int gc_mutex; int stat_lock; int unusable_block_count; } ;
struct cp_control {int reason; } ;
typedef int block_t ;
struct TYPE_2__ {unsigned int s_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ FUNC_0 (struct f2fs_sb_info*,int ) ;
 int FUNC_1 (struct f2fs_sb_info*,char*) ;
 int FUNC_2 (struct f2fs_sb_info*,int,int,int ) ;
 int FUNC_3 (struct f2fs_sb_info*) ;
 int FUNC_4 (struct f2fs_sb_info*,int ) ;
 int FUNC_5 (struct f2fs_sb_info*,int ) ;
 int FUNC_6 (struct f2fs_sb_info*,struct cp_control*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct f2fs_sb_info*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_13(struct f2fs_sb_info *VAR_9)
{
 unsigned int VAR_10 = VAR_9->sb->s_flags;
 struct cp_control VAR_11;
 int VAR_12 = 0;
 int VAR_13;
 block_t VAR_14;

 if (VAR_10 & VAR_8) {
  FUNC_1(VAR_9, "checkpoint=disable on readonly fs");
  return -VAR_3;
 }
 VAR_9->sb->s_flags |= VAR_7;

 FUNC_5(VAR_9, VAR_1);

 while (!FUNC_4(VAR_9, VAR_1)) {
  FUNC_7(&VAR_9->gc_mutex);
  VAR_12 = FUNC_2(VAR_9, 1, 0, VAR_5);
  if (VAR_12 == -VAR_4) {
   VAR_12 = 0;
   break;
  }
  if (VAR_12 && VAR_12 != -VAR_2)
   break;
 }

 VAR_13 = FUNC_12(VAR_9->sb);
 if (VAR_13 || VAR_12) {
  VAR_12 = VAR_13 ? VAR_13: VAR_12;
  goto restore_flag;
 }

 VAR_14 = FUNC_3(VAR_9);
 if (FUNC_0(VAR_9, VAR_14)) {
  VAR_12 = -VAR_2;
  goto restore_flag;
 }

 FUNC_7(&VAR_9->gc_mutex);
 VAR_11.reason = VAR_0;
 FUNC_9(VAR_9, VAR_6);
 VAR_12 = FUNC_6(VAR_9, &VAR_11);
 if (VAR_12)
  goto out_unlock;

 FUNC_10(&VAR_9->stat_lock);
 VAR_9->unusable_block_count = VAR_14;
 FUNC_11(&VAR_9->stat_lock);

out_unlock:
 FUNC_8(&VAR_9->gc_mutex);
restore_flag:
 VAR_9->sb->s_flags = VAR_10;
 return VAR_12;
}
