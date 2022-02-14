
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ocfs2_super {int s_mount_opt; TYPE_3__* journal; } ;
struct kiocb {scalar_t__ ki_pos; int ki_flags; int ki_complete; struct file* ki_filp; } ;
struct iov_iter {scalar_t__ nr_segs; } ;
struct inode {int i_sb; } ;
struct TYPE_7__ {TYPE_4__* dentry; } ;
struct file {int f_flags; int f_mapping; TYPE_2__ f_path; } ;
typedef int ssize_t ;
struct TYPE_10__ {scalar_t__ ip_blkno; } ;
struct TYPE_6__ {int name; int len; } ;
struct TYPE_9__ {TYPE_1__ d_name; } ;
struct TYPE_8__ {int j_journal; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 TYPE_5__* FUNC_2 (struct inode*) ;
 int VAR_5 ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (struct kiocb*,struct iov_iter*) ;
 struct inode* FUNC_5 (struct file*) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct kiocb*,struct iov_iter*) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 size_t FUNC_13 (struct iov_iter*) ;
 int FUNC_14 (struct kiocb*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int) ;
 int FUNC_17 (struct inode*,int *,int) ;
 int FUNC_18 (struct inode*,int) ;
 int FUNC_19 (struct kiocb*) ;
 int FUNC_20 (struct kiocb*,int) ;
 scalar_t__ FUNC_21 (struct inode*,size_t,scalar_t__) ;
 int FUNC_22 (struct file*,scalar_t__,size_t,int) ;
 int FUNC_23 (struct inode*,int) ;
 int FUNC_24 (struct inode*,int) ;
 int FUNC_25 (struct inode*,int *,int) ;
 int FUNC_26 (struct inode*,int) ;
 int FUNC_27 (struct inode*,struct file*,TYPE_4__*,unsigned long long,int ,int ,unsigned int) ;
 scalar_t__ FUNC_28 (int) ;
 void* FUNC_29 (int *,void*) ;

__attribute__((used)) static ssize_t FUNC_30(struct kiocb *VAR_7,
        struct iov_iter *VAR_8)
{
 int VAR_9;
 ssize_t VAR_10 = 0;
 ssize_t VAR_11;
 size_t VAR_12 = FUNC_13(VAR_8);
 struct file *VAR_13 = VAR_7->ki_filp;
 struct inode *VAR_14 = FUNC_5(VAR_13);
 struct ocfs2_super *VAR_15 = FUNC_3(VAR_14->i_sb);
 int VAR_16 = !(VAR_15->s_mount_opt &
          VAR_5);
 void *VAR_17 = ((void*)0);
 int VAR_18 = ((VAR_7->ki_pos + VAR_12) >=
   FUNC_9(VAR_14) ? 1 : 0);
 int VAR_19 = VAR_7->ki_flags & VAR_3 ? 1 : 0;
 int VAR_20 = VAR_7->ki_flags & VAR_4 ? 1 : 0;

 FUNC_27(VAR_14, VAR_13, VAR_13->f_path.dentry,
  (unsigned long long)FUNC_2(VAR_14)->ip_blkno,
  VAR_13->f_path.dentry->d_name.len,
  VAR_13->f_path.dentry->d_name.name,
  (unsigned int)VAR_8->nr_segs);

 if (!VAR_19 && VAR_20)
  return -VAR_2;

 if (VAR_12 == 0)
  return 0;

 if (VAR_20) {
  if (!FUNC_11(VAR_14))
   return -VAR_0;
 } else
  FUNC_10(VAR_14);






 VAR_9 = (!VAR_19 || VAR_16 || VAR_18);

 if (VAR_20)
  VAR_11 = FUNC_26(VAR_14, VAR_9);
 else
  VAR_11 = FUNC_23(VAR_14, VAR_9);
 if (VAR_11 < 0) {
  if (VAR_11 != -VAR_0)
   FUNC_16(VAR_11);
  goto out_mutex;
 }





 if (VAR_19 && VAR_16) {





  if (VAR_20)
   VAR_11 = FUNC_25(VAR_14, ((void*)0), 1);
  else
   VAR_11 = FUNC_17(VAR_14, ((void*)0), 1);
  if (VAR_11 < 0) {
   if (VAR_11 != -VAR_0)
    FUNC_16(VAR_11);
   goto out;
  }

  FUNC_18(VAR_14, 1);
 }

 VAR_11 = FUNC_8(VAR_7, VAR_8);
 if (VAR_11 <= 0) {
  if (VAR_11)
   FUNC_16(VAR_11);
  goto out;
 }
 VAR_12 = VAR_11;

 VAR_11 = FUNC_22(VAR_13, VAR_7->ki_pos, VAR_12, !VAR_20);
 if (VAR_11 < 0) {
  if (VAR_11 != -VAR_0)
   FUNC_16(VAR_11);
  goto out;
 }

 if (VAR_19 && !FUNC_14(VAR_7) &&
     FUNC_21(VAR_14, VAR_12, VAR_7->ki_pos)) {



  VAR_17 = FUNC_29(&VAR_7->ki_complete, ((void*)0));
 }


 FUNC_20(VAR_7, VAR_9);

 VAR_10 = FUNC_4(VAR_7, VAR_8);

 FUNC_0(VAR_10 == -VAR_1 && !VAR_19);
 if ((VAR_10 == -VAR_1) || (!FUNC_19(VAR_7))) {
  VAR_9 = -1;
 }

 if (FUNC_28(VAR_10 <= 0))
  goto out;

 if (((VAR_13->f_flags & VAR_6) && !VAR_19) ||
     FUNC_1(VAR_14)) {
  VAR_11 = FUNC_7(VAR_13->f_mapping,
            VAR_7->ki_pos - VAR_10,
            VAR_7->ki_pos - 1);
  if (VAR_11 < 0)
   VAR_10 = VAR_11;

  if (!VAR_11) {
   VAR_11 = FUNC_15(VAR_15->journal->j_journal);
   if (VAR_11 < 0)
    VAR_10 = VAR_11;
  }

  if (!VAR_11)
   VAR_11 = FUNC_6(VAR_13->f_mapping,
            VAR_7->ki_pos - VAR_10,
            VAR_7->ki_pos - 1);
 }

out:
 if (VAR_17)
  FUNC_29(&VAR_7->ki_complete, VAR_17);

 if (VAR_9 != -1)
  FUNC_24(VAR_14, VAR_9);

out_mutex:
 FUNC_12(VAR_14);

 if (VAR_10)
  VAR_11 = VAR_10;
 return VAR_11;
}
