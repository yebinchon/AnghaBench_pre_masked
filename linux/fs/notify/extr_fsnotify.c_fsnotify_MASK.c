
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct super_block {int s_fsnotify_mask; int s_fsnotify_marks; } ;
struct qstr {int dummy; } ;
struct path {int mnt; } ;
struct mount {int mnt_fsnotify_mask; int mnt_fsnotify_marks; } ;
struct inode {int i_fsnotify_mask; int i_fsnotify_marks; struct super_block* i_sb; } ;
struct fsnotify_iter_info {int srcu_idx; void** marks; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (struct fsnotify_iter_info*) ;
 scalar_t__ FUNC_2 (struct fsnotify_iter_info*) ;
 int VAR_8 ;
 struct mount* FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,int,void const*,int,int ,struct qstr const*,struct fsnotify_iter_info*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

int FUNC_7(struct inode *VAR_9, __u32 VAR_10, const void *VAR_11, int VAR_12,
      const struct qstr *VAR_13, u32 VAR_14)
{
 struct fsnotify_iter_info VAR_15 = {};
 struct super_block *VAR_16 = VAR_9->i_sb;
 struct mount *VAR_17 = ((void*)0);
 __u32 VAR_18 = VAR_16->s_fsnotify_mask;
 int VAR_19 = 0;
 __u32 VAR_20 = (VAR_10 & VAR_0);

 if (VAR_12 == VAR_2) {
  VAR_17 = FUNC_3(((const struct path *)VAR_11)->mnt);
  VAR_18 |= VAR_17->mnt_fsnotify_mask;
 }

 if (VAR_10 & VAR_6)
  VAR_18 = 0;
 if (!VAR_9->i_fsnotify_marks && !VAR_16->s_fsnotify_marks &&
     (!VAR_17 || !VAR_17->mnt_fsnotify_marks))
  return 0;





 if (!(VAR_10 & VAR_7) &&
     !(VAR_20 & (VAR_9->i_fsnotify_mask | VAR_18)))
  return 0;

 VAR_15.srcu_idx = FUNC_5(&VAR_8);

 VAR_15.marks[VAR_3] =
  FUNC_0(&VAR_9->i_fsnotify_marks);
 VAR_15.marks[VAR_4] =
  FUNC_0(&VAR_16->s_fsnotify_marks);
 if (VAR_17) {
  VAR_15.marks[VAR_5] =
   FUNC_0(&VAR_17->mnt_fsnotify_marks);
 }






 while (FUNC_2(&VAR_15)) {
  VAR_19 = FUNC_4(VAR_9, VAR_10, VAR_11, VAR_12, VAR_14,
        VAR_13, &VAR_15);

  if (VAR_19 && (VAR_10 & VAR_1))
   goto out;

  FUNC_1(&VAR_15);
 }
 VAR_19 = 0;
out:
 FUNC_6(&VAR_8, VAR_15.srcu_idx);

 return VAR_19;
}
