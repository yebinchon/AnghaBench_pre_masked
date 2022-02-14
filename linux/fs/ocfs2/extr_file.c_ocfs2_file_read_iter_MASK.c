
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kiocb {int ki_flags; struct file* ki_filp; } ;
struct iov_iter {int nr_segs; } ;
struct inode {int dummy; } ;
struct TYPE_6__ {int mnt; TYPE_3__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
typedef int ssize_t ;
struct TYPE_8__ {scalar_t__ ip_blkno; } ;
struct TYPE_5__ {int name; int len; } ;
struct TYPE_7__ {TYPE_1__ d_name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct file*) ;
 int FUNC_3 (struct kiocb*,struct iov_iter*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct inode*,int ,int*,int) ;
 int FUNC_6 (struct inode*,int) ;
 int FUNC_7 (struct kiocb*) ;
 int FUNC_8 (struct kiocb*,int) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (struct inode*,int) ;
 int FUNC_11 (struct inode*,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct inode*,struct file*,TYPE_3__*,unsigned long long,int ,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_14(struct kiocb *VAR_6,
       struct iov_iter *VAR_7)
{
 int VAR_8 = 0, VAR_9 = -1, VAR_10 = 0;
 struct file *VAR_11 = VAR_6->ki_filp;
 struct inode *VAR_12 = FUNC_2(VAR_11);
 int VAR_13 = VAR_6->ki_flags & VAR_4 ? 1 : 0;
 int VAR_14 = VAR_6->ki_flags & VAR_5 ? 1 : 0;

 FUNC_13(VAR_12, VAR_11, VAR_11->f_path.dentry,
   (unsigned long long)FUNC_1(VAR_12)->ip_blkno,
   VAR_11->f_path.dentry->d_name.len,
   VAR_11->f_path.dentry->d_name.name,
   VAR_7->nr_segs);


 if (!VAR_12) {
  VAR_8 = -VAR_1;
  FUNC_4(VAR_8);
  goto bail;
 }

 if (!VAR_13 && VAR_14)
  return -VAR_3;





 if (VAR_13) {
  if (VAR_14)
   VAR_8 = FUNC_11(VAR_12, 0);
  else
   VAR_8 = FUNC_9(VAR_12, 0);

  if (VAR_8 < 0) {
   if (VAR_8 != -VAR_0)
    FUNC_4(VAR_8);
   goto bail;
  }
  VAR_9 = 0;

  FUNC_8(VAR_6, VAR_9);
 }
 VAR_8 = FUNC_5(VAR_12, VAR_11->f_path.mnt, &VAR_10,
         !VAR_14);
 if (VAR_8 < 0) {
  if (VAR_8 != -VAR_0)
   FUNC_4(VAR_8);
  goto bail;
 }
 FUNC_6(VAR_12, VAR_10);

 VAR_8 = FUNC_3(VAR_6, VAR_7);
 FUNC_12(VAR_8);


 FUNC_0(VAR_8 == -VAR_2 && !VAR_13);


 if (VAR_8 == -VAR_2 || !FUNC_7(VAR_6)) {
  VAR_9 = -1;
 }

bail:
 if (VAR_9 != -1)
  FUNC_10(VAR_12, VAR_9);

 return VAR_8;
}
