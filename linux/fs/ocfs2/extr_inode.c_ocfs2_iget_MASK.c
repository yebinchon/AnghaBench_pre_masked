
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_6__ {void* t_tid; } ;
typedef TYPE_2__ transaction_t ;
typedef void* tid_t ;
struct super_block {int dummy; } ;
struct ocfs2_super {struct super_block* sb; } ;
struct ocfs2_inode_info {scalar_t__ ip_blkno; void* i_datasync_tid; void* i_sync_tid; } ;
struct ocfs2_find_inode_args {unsigned int fi_flags; int fi_sysfile_type; int fi_ino; scalar_t__ fi_blkno; } ;
struct inode {int i_state; } ;
struct TYPE_7__ {int j_state_lock; void* j_commit_sequence; TYPE_2__* j_committing_transaction; TYPE_2__* j_running_transaction; } ;
typedef TYPE_3__ journal_t ;
struct TYPE_8__ {TYPE_1__* journal; } ;
struct TYPE_5__ {TYPE_3__* j_journal; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int VAR_3 ;
 struct ocfs2_inode_info* FUNC_2 (struct inode*) ;
 TYPE_4__* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct super_block*,int ,int ,int ,struct ocfs2_find_inode_args*) ;
 int FUNC_6 (struct super_block*,scalar_t__) ;
 int FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int FUNC_9 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (struct inode*,struct ocfs2_find_inode_args*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int) ;
 int FUNC_14 (unsigned long long,unsigned int,int) ;
 int FUNC_15 (struct inode*,unsigned long long) ;
 int FUNC_16 (struct inode*) ;

struct inode *FUNC_17(struct ocfs2_super *VAR_6, u64 VAR_7, unsigned VAR_8,
    int VAR_9)
{
 int VAR_10 = -VAR_2;
 struct inode *VAR_11 = ((void*)0);
 struct super_block *VAR_12 = VAR_6->sb;
 struct ocfs2_find_inode_args VAR_13;
 journal_t *VAR_14 = FUNC_3(VAR_12)->journal->j_journal;

 FUNC_14((unsigned long long)VAR_7, VAR_8,
          VAR_9);




 if (VAR_7 == 0) {
  VAR_11 = FUNC_0(-VAR_0);
  FUNC_9(FUNC_4(VAR_11));
  goto bail;
 }

 VAR_13.fi_blkno = VAR_7;
 VAR_13.fi_flags = VAR_8;
 VAR_13.fi_ino = FUNC_6(VAR_12, VAR_7);
 VAR_13.fi_sysfile_type = VAR_9;

 VAR_11 = FUNC_5(VAR_12, VAR_13.fi_ino, VAR_4,
        VAR_5, &VAR_13);



 if (VAR_11 == ((void*)0)) {
  VAR_11 = FUNC_0(-VAR_1);
  FUNC_9(FUNC_4(VAR_11));
  goto bail;
 }
 FUNC_13(VAR_11->i_state);
 if (VAR_11->i_state & VAR_3) {
  VAR_10 = FUNC_10(VAR_11, &VAR_13);
  FUNC_16(VAR_11);
 }
 if (FUNC_8(VAR_11)) {
  FUNC_7(VAR_11);
  VAR_11 = FUNC_0(VAR_10);
  goto bail;
 }
 if (VAR_14) {
  transaction_t *VAR_15;
  tid_t VAR_16;
  struct ocfs2_inode_info *VAR_17 = FUNC_2(VAR_11);

  FUNC_11(&VAR_14->j_state_lock);
  if (VAR_14->j_running_transaction)
   VAR_15 = VAR_14->j_running_transaction;
  else
   VAR_15 = VAR_14->j_committing_transaction;
  if (VAR_15)
   VAR_16 = VAR_15->t_tid;
  else
   VAR_16 = VAR_14->j_commit_sequence;
  FUNC_12(&VAR_14->j_state_lock);
  VAR_17->i_sync_tid = VAR_16;
  VAR_17->i_datasync_tid = VAR_16;
 }

bail:
 if (!FUNC_1(VAR_11)) {
  FUNC_15(VAR_11,
   (unsigned long long)FUNC_2(VAR_11)->ip_blkno);
 }

 return VAR_11;
}
