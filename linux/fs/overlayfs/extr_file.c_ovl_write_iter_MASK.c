
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int ki_pos; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int i_sb; } ;
struct file {int dummy; } ;
struct fd {int file; } ;
struct cred {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (struct fd) ;
 int FUNC_1 (int ) ;
 struct inode* FUNC_2 (struct file*) ;
 scalar_t__ FUNC_3 (struct file*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct iov_iter*) ;
 int FUNC_8 (int ,struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct kiocb*) ;
 struct cred* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (struct file*,struct fd*) ;
 int FUNC_13 (struct cred const*) ;
 scalar_t__ FUNC_14 (int ,struct iov_iter*,int *,int ) ;

__attribute__((used)) static ssize_t FUNC_15(struct kiocb *VAR_0, struct iov_iter *VAR_1)
{
 struct file *VAR_2 = VAR_0->ki_filp;
 struct inode *VAR_3 = FUNC_2(VAR_2);
 struct fd VAR_4;
 const struct cred *VAR_5;
 ssize_t VAR_6;

 if (!FUNC_7(VAR_1))
  return 0;

 FUNC_5(VAR_3);

 FUNC_8(FUNC_9(VAR_3), VAR_3);
 VAR_6 = FUNC_3(VAR_2);
 if (VAR_6)
  goto out_unlock;

 VAR_6 = FUNC_12(VAR_2, &VAR_4);
 if (VAR_6)
  goto out_unlock;

 VAR_5 = FUNC_11(FUNC_2(VAR_2)->i_sb);
 FUNC_4(VAR_4.file);
 VAR_6 = FUNC_14(VAR_4.file, VAR_1, &VAR_0->ki_pos,
        FUNC_10(VAR_0));
 FUNC_1(VAR_4.file);
 FUNC_13(VAR_5);


 FUNC_8(FUNC_9(VAR_3), VAR_3);

 FUNC_0(VAR_4);

out_unlock:
 FUNC_6(VAR_3);

 return VAR_6;
}
