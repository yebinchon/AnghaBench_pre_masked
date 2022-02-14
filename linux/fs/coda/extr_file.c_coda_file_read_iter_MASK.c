
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int ki_pos; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int i_sb; } ;
struct file {int dummy; } ;
struct coda_file_info {int cfi_access_intent; int cfi_container; } ;
typedef scalar_t__ ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct coda_file_info* FUNC_0 (struct file*) ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct file*) ;
 size_t FUNC_3 (struct iov_iter*) ;
 scalar_t__ FUNC_4 (int ,int ,int *,size_t,int ,int ) ;
 scalar_t__ FUNC_5 (int ,struct iov_iter*,int *,int ) ;

__attribute__((used)) static ssize_t
FUNC_6(struct kiocb *VAR_2, struct iov_iter *VAR_3)
{
 struct file *VAR_4 = VAR_2->ki_filp;
 struct inode *VAR_5 = FUNC_2(VAR_4);
 struct coda_file_info *VAR_6 = FUNC_0(VAR_4);
 loff_t VAR_7 = VAR_2->ki_pos;
 size_t VAR_8 = FUNC_3(VAR_3);
 ssize_t VAR_9;

 VAR_9 = FUNC_4(VAR_5->i_sb, FUNC_1(VAR_5),
      &VAR_6->cfi_access_intent,
      VAR_8, VAR_7, VAR_0);
 if (VAR_9)
  goto finish_read;

 VAR_9 = FUNC_5(VAR_6->cfi_container, VAR_3, &VAR_2->ki_pos, 0);

finish_read:
 FUNC_4(VAR_5->i_sb, FUNC_1(VAR_5),
       &VAR_6->cfi_access_intent,
       VAR_8, VAR_7, VAR_1);
 return VAR_9;
}
