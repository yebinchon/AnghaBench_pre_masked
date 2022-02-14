
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udf_inode_info {scalar_t__ i_alloc_type; int i_data_sem; int i_lenAlloc; } ;
struct kiocb {scalar_t__ ki_pos; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int i_size; TYPE_1__* i_sb; } ;
struct file {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ s_blocksize; } ;


 scalar_t__ VAR_0 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct kiocb*,struct iov_iter*) ;
 int FUNC_2 (int *) ;
 struct inode* FUNC_3 (struct file*) ;
 scalar_t__ FUNC_4 (struct kiocb*,struct iov_iter*) ;
 scalar_t__ FUNC_5 (struct kiocb*,scalar_t__) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (struct iov_iter*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (struct inode*) ;
 scalar_t__ FUNC_13 (struct inode*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static ssize_t FUNC_15(struct kiocb *VAR_1, struct iov_iter *VAR_2)
{
 ssize_t VAR_3;
 struct file *VAR_4 = VAR_1->ki_filp;
 struct inode *VAR_5 = FUNC_3(VAR_4);
 struct udf_inode_info *VAR_6 = FUNC_0(VAR_5);
 int VAR_7;

 FUNC_6(VAR_5);

 VAR_3 = FUNC_4(VAR_1, VAR_2);
 if (VAR_3 <= 0)
  goto out;

 FUNC_2(&VAR_6->i_data_sem);
 if (VAR_6->i_alloc_type == VAR_0) {
  loff_t VAR_8 = VAR_1->ki_pos + FUNC_8(VAR_2);

  if (VAR_5->i_sb->s_blocksize <
    (FUNC_13(VAR_5) + VAR_8)) {
   VAR_7 = FUNC_12(VAR_5);
   if (VAR_7) {
    FUNC_7(VAR_5);
    FUNC_11("udf_expand_adinicb: err=%d\n", VAR_7);
    return VAR_7;
   }
  } else {
   VAR_6->i_lenAlloc = FUNC_10(VAR_8, VAR_5->i_size);
   FUNC_14(&VAR_6->i_data_sem);
  }
 } else
  FUNC_14(&VAR_6->i_data_sem);

 VAR_3 = FUNC_1(VAR_1, VAR_2);
out:
 FUNC_7(VAR_5);

 if (VAR_3 > 0) {
  FUNC_9(VAR_5);
  VAR_3 = FUNC_5(VAR_1, VAR_3);
 }

 return VAR_3;
}
