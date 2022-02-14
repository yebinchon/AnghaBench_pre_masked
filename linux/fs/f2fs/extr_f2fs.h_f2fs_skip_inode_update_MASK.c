
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mtime; int i_ctime; int i_atime; } ;
struct f2fs_sb_info {int * inode_lock; } ;
struct TYPE_2__ {int last_disk_size; int i_sem; int i_crtime; scalar_t__ i_disk_time; int gdirty_list; } ;


 size_t VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__,int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static inline bool FUNC_11(struct inode *VAR_3, int VAR_4)
{
 bool VAR_5;

 if (VAR_4) {
  struct f2fs_sb_info *VAR_6 = FUNC_1(VAR_3);

  FUNC_7(&VAR_6->inode_lock[VAR_0]);
  VAR_5 = FUNC_6(&FUNC_0(VAR_3)->gdirty_list);
  FUNC_8(&VAR_6->inode_lock[VAR_0]);
  return VAR_5;
 }
 if (!FUNC_5(VAR_3, VAR_1) ||
   FUNC_3(VAR_3) ||
   FUNC_4(VAR_3) & ~VAR_2)
  return 0;

 if (!FUNC_9(FUNC_0(VAR_3)->i_disk_time, &VAR_3->i_atime))
  return 0;
 if (!FUNC_9(FUNC_0(VAR_3)->i_disk_time + 1, &VAR_3->i_ctime))
  return 0;
 if (!FUNC_9(FUNC_0(VAR_3)->i_disk_time + 2, &VAR_3->i_mtime))
  return 0;
 if (!FUNC_9(FUNC_0(VAR_3)->i_disk_time + 3,
      &FUNC_0(VAR_3)->i_crtime))
  return 0;

 FUNC_2(&FUNC_0(VAR_3)->i_sem);
 VAR_5 = FUNC_0(VAR_3)->last_disk_size == FUNC_4(VAR_3);
 FUNC_10(&FUNC_0(VAR_3)->i_sem);

 return VAR_5;
}
