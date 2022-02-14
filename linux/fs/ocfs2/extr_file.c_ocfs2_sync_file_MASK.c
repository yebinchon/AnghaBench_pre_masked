
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tid_t ;
struct ocfs2_super {TYPE_2__* journal; } ;
struct ocfs2_inode_info {int i_sync_tid; int i_datasync_tid; int ip_blkno; } ;
struct inode {TYPE_9__* i_sb; } ;
struct TYPE_13__ {TYPE_6__* dentry; } ;
struct file {TYPE_4__ f_path; TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_14__ {int j_flags; } ;
typedef TYPE_5__ journal_t ;
struct TYPE_16__ {int s_bdev; } ;
struct TYPE_12__ {int name; int len; } ;
struct TYPE_15__ {TYPE_3__ d_name; } ;
struct TYPE_11__ {TYPE_5__* j_journal; } ;
struct TYPE_10__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 struct ocfs2_super* FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (struct file*,int ,int ) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct ocfs2_super*) ;
 scalar_t__ FUNC_8 (struct ocfs2_super*) ;
 int FUNC_9 (struct inode*,struct file*,TYPE_6__*,int ,int ,int ,unsigned long long) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_4, loff_t VAR_5, loff_t VAR_6,
      int VAR_7)
{
 int VAR_8 = 0;
 struct inode *VAR_9 = VAR_4->f_mapping->host;
 struct ocfs2_super *VAR_10 = FUNC_1(VAR_9->i_sb);
 struct ocfs2_inode_info *VAR_11 = FUNC_0(VAR_9);
 journal_t *VAR_12 = VAR_10->journal->j_journal;
 int VAR_13;
 tid_t VAR_14;
 bool VAR_15 = 0;

 FUNC_9(VAR_9, VAR_4, VAR_4->f_path.dentry,
         VAR_11->ip_blkno,
         VAR_4->f_path.dentry->d_name.len,
         VAR_4->f_path.dentry->d_name.name,
         (unsigned long long)VAR_7);

 if (FUNC_7(VAR_10) || FUNC_8(VAR_10))
  return -VAR_1;

 VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_14 = VAR_7 ? VAR_11->i_datasync_tid : VAR_11->i_sync_tid;
 if (VAR_12->j_flags & VAR_3 &&
     !FUNC_5(VAR_12, VAR_14))
  VAR_15 = 1;
 VAR_8 = FUNC_4(VAR_12, VAR_14);
 if (VAR_15) {
  VAR_13 = FUNC_2(VAR_9->i_sb->s_bdev, VAR_2, ((void*)0));
  if (!VAR_8)
   VAR_8 = VAR_13;
 }

 if (VAR_8)
  FUNC_6(VAR_8);

 return (VAR_8 < 0) ? -VAR_0 : 0;
}
