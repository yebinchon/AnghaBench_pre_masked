
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {scalar_t__ i_sb; scalar_t__ i_size; int i_mapping; } ;
struct TYPE_7__ {scalar_t__ mnt; } ;
struct file {TYPE_3__ f_path; } ;
struct btrfs_root {TYPE_2__* fs_info; } ;
typedef scalar_t__ loff_t ;
struct TYPE_8__ {int flags; struct btrfs_root* root; } ;
struct TYPE_6__ {TYPE_1__* sb; } ;
struct TYPE_5__ {scalar_t__ s_blocksize; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 TYPE_4__* FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_3 (struct btrfs_root*) ;
 int FUNC_4 (struct inode*,scalar_t__,scalar_t__) ;
 struct inode* FUNC_5 (struct file*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct file*,scalar_t__,struct file*,scalar_t__,scalar_t__*,unsigned int) ;
 int FUNC_8 (struct inode*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_5, loff_t VAR_6,
           struct file *VAR_7, loff_t VAR_8,
           loff_t *VAR_9, unsigned int VAR_10)
{
 struct inode *VAR_11 = FUNC_5(VAR_5);
 struct inode *VAR_12 = FUNC_5(VAR_7);
 u64 VAR_13 = FUNC_2(VAR_12)->root->fs_info->sb->s_blocksize;
 bool VAR_14 = VAR_12 == VAR_11;
 u64 VAR_15;
 int VAR_16;

 if (!(VAR_10 & VAR_4)) {
  struct btrfs_root *VAR_17 = FUNC_2(VAR_12)->root;

  if (FUNC_3(VAR_17))
   return -VAR_2;

  if (VAR_5->f_path.mnt != VAR_7->f_path.mnt ||
      VAR_11->i_sb != VAR_12->i_sb)
   return -VAR_3;
 }


 if ((FUNC_2(VAR_11)->flags & VAR_0) !=
     (FUNC_2(VAR_12)->flags & VAR_0)) {
  return -VAR_1;
 }
 if (*VAR_9 == 0 && !(VAR_10 & VAR_4))
  VAR_15 = FUNC_0(VAR_11->i_size, VAR_13) - FUNC_1(VAR_6, VAR_13);
 else
  VAR_15 = FUNC_0(*VAR_9, VAR_13);






 FUNC_8(VAR_11);
 if (!VAR_14)
  FUNC_8(VAR_12);
 VAR_16 = FUNC_6(VAR_11->i_mapping);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_4(VAR_11, FUNC_1(VAR_6, VAR_13),
           VAR_15);
 if (VAR_16 < 0)
  return VAR_16;
 VAR_16 = FUNC_4(VAR_12, FUNC_1(VAR_8, VAR_13),
           VAR_15);
 if (VAR_16 < 0)
  return VAR_16;

 return FUNC_7(VAR_5, VAR_6, VAR_7, VAR_8,
         VAR_9, VAR_10);
}
