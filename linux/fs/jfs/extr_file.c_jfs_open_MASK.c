
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jfs_sb_info {TYPE_1__* bmap; } ;
struct jfs_inode_info {int active_ag; int ag_lock; int ixpxd; } ;
struct inode {scalar_t__ i_size; int i_sb; int i_mode; } ;
struct file {int f_mode; } ;
struct TYPE_2__ {int * db_active; } ;


 int FUNC_0 (int ,struct jfs_sb_info*) ;
 int VAR_0 ;
 struct jfs_inode_info* FUNC_1 (struct inode*) ;
 struct jfs_sb_info* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,struct file*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_1, struct file *VAR_2)
{
 int VAR_3;

 if ((VAR_3 = FUNC_6(VAR_1, VAR_2)))
  return VAR_3;
 if (FUNC_3(VAR_1->i_mode) && VAR_2->f_mode & VAR_0 &&
     (VAR_1->i_size == 0)) {
  struct jfs_inode_info *VAR_4 = FUNC_1(VAR_1);
  FUNC_7(&VAR_4->ag_lock);
  if (VAR_4->active_ag == -1) {
   struct jfs_sb_info *VAR_5 = FUNC_2(VAR_1->i_sb);
   VAR_4->active_ag = FUNC_0(FUNC_4(&VAR_4->ixpxd), VAR_5);
   FUNC_5(&VAR_5->bmap->db_active[VAR_4->active_ag]);
  }
  FUNC_8(&VAR_4->ag_lock);
 }

 return 0;
}
