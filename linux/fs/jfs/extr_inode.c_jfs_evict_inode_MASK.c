
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jfs_inode_info {scalar_t__ fileset; int active_ag; int ag_lock; int anon_inode_list; } ;
struct inode {int i_sb; int i_data; int i_nlink; } ;
struct bmap {int * db_active; } ;
struct TYPE_2__ {struct bmap* bmap; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct jfs_inode_info* FUNC_1 (struct inode*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (char*,struct inode*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int ,struct inode*) ;
 int FUNC_16 (int *) ;

void FUNC_17(struct inode *VAR_2)
{
 struct jfs_inode_info *VAR_3 = FUNC_1(VAR_2);

 FUNC_11("In jfs_evict_inode, inode = 0x%p", VAR_2);

 if (!VAR_2->i_nlink && !FUNC_9(VAR_2)) {
  FUNC_8(VAR_2);

  if (FUNC_1(VAR_2)->fileset == VAR_1) {
   FUNC_16(&VAR_2->i_data);

   if (FUNC_15(VAR_0, VAR_2))
    FUNC_10(VAR_2);

   FUNC_5(VAR_2);




   FUNC_7(VAR_2);
  }
 } else {
  FUNC_16(&VAR_2->i_data);
 }
 FUNC_4(VAR_2);
 FUNC_6(VAR_2);

 FUNC_0(!FUNC_12(&VAR_3->anon_inode_list));

 FUNC_13(&VAR_3->ag_lock);
 if (VAR_3->active_ag != -1) {
  struct bmap *VAR_4 = FUNC_2(VAR_2->i_sb)->bmap;
  FUNC_3(&VAR_4->db_active[VAR_3->active_ag]);
  VAR_3->active_ag = -1;
 }
 FUNC_14(&VAR_3->ag_lock);
}
