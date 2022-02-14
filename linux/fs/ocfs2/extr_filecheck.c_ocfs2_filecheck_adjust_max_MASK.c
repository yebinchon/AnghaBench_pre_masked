
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_filecheck_sysfs_entry {TYPE_1__* fs_fcheck; } ;
struct TYPE_2__ {unsigned int fc_size; unsigned int fc_done; unsigned int fc_max; int fc_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_2 (struct ocfs2_filecheck_sysfs_entry*,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct ocfs2_filecheck_sysfs_entry *VAR_5,
      unsigned int VAR_6)
{
 int VAR_7;

 if ((VAR_6 < VAR_4) || (VAR_6 > VAR_3))
  return -VAR_1;

 FUNC_3(&VAR_5->fs_fcheck->fc_lock);
 if (VAR_6 < (VAR_5->fs_fcheck->fc_size - VAR_5->fs_fcheck->fc_done)) {
  FUNC_1(VAR_2,
  "Cannot set online file check maximum entry number "
  "to %u due to too many pending entries(%u)\n",
  VAR_6, VAR_5->fs_fcheck->fc_size - VAR_5->fs_fcheck->fc_done);
  VAR_7 = -VAR_0;
 } else {
  if (VAR_6 < VAR_5->fs_fcheck->fc_size)
   FUNC_0(!FUNC_2(VAR_5,
    VAR_5->fs_fcheck->fc_size - VAR_6));

  VAR_5->fs_fcheck->fc_max = VAR_6;
  VAR_7 = 0;
 }
 FUNC_4(&VAR_5->fs_fcheck->fc_lock);

 return VAR_7;
}
