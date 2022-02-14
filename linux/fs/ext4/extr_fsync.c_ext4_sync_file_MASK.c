
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tid_t ;
struct inode {TYPE_3__* i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
struct ext4_inode_info {int i_sync_tid; int i_datasync_tid; } ;
typedef int loff_t ;
struct TYPE_12__ {int j_flags; } ;
typedef TYPE_2__ journal_t ;
struct TYPE_14__ {int s_mount_flags; TYPE_2__* s_journal; } ;
struct TYPE_13__ {int s_bdev; } ;
struct TYPE_11__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 TYPE_7__* FUNC_1 (TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct file*,int ,int ,int) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_7__*) ;
 int * FUNC_7 () ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct file*) ;
 int FUNC_11 (struct file*,int ,int ) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int FUNC_13 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (TYPE_3__*,int ) ;
 int FUNC_17 (struct file*,int) ;
 int FUNC_18 (struct inode*,int) ;
 scalar_t__ FUNC_19 (int ) ;

int FUNC_20(struct file *VAR_6, loff_t VAR_7, loff_t VAR_8, int VAR_9)
{
 struct inode *VAR_10 = VAR_6->f_mapping->host;
 struct ext4_inode_info *VAR_11 = FUNC_0(VAR_10);
 journal_t *VAR_12 = FUNC_1(VAR_10->i_sb)->s_journal;
 int VAR_13 = 0, VAR_14;
 tid_t VAR_15;
 bool VAR_16 = 0;

 if (FUNC_19(FUNC_6(FUNC_1(VAR_10->i_sb))))
  return -VAR_1;

 FUNC_2(FUNC_7() == ((void*)0));

 FUNC_17(VAR_6, VAR_9);

 if (FUNC_14(VAR_10->i_sb)) {

  FUNC_15();
  if (FUNC_1(VAR_10->i_sb)->s_mount_flags & VAR_3)
   VAR_13 = -VAR_2;
  goto out;
 }

 if (!VAR_12) {
  VAR_13 = FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9);
  if (!VAR_13)
   VAR_13 = FUNC_9(VAR_10);
  if (FUNC_16(VAR_10->i_sb, VAR_0))
   goto issue_flush;
  goto out;
 }

 VAR_13 = FUNC_11(VAR_6, VAR_7, VAR_8);
 if (VAR_13)
  return VAR_13;
 if (FUNC_8(VAR_10)) {
  VAR_13 = FUNC_5(VAR_10->i_sb);
  goto out;
 }

 VAR_15 = VAR_9 ? VAR_11->i_datasync_tid : VAR_11->i_sync_tid;
 if (VAR_12->j_flags & VAR_5 &&
     !FUNC_13(VAR_12, VAR_15))
  VAR_16 = 1;
 VAR_13 = FUNC_12(VAR_12, VAR_15);
 if (VAR_16) {
 issue_flush:
  VAR_14 = FUNC_4(VAR_10->i_sb->s_bdev, VAR_4, ((void*)0));
  if (!VAR_13)
   VAR_13 = VAR_14;
 }
out:
 VAR_14 = FUNC_10(VAR_6);
 if (VAR_13 == 0)
  VAR_13 = VAR_14;
 FUNC_18(VAR_10, VAR_13);
 return VAR_13;
}
