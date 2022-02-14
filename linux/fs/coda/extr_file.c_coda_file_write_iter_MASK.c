
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int ki_pos; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int i_size; int i_blocks; int i_sb; int i_ctime; int i_mtime; } ;
struct file {int dummy; } ;
struct coda_file_info {int cfi_access_intent; struct file* cfi_container; } ;
typedef scalar_t__ ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct coda_file_info* FUNC_0 (struct file*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct file*) ;
 struct inode* FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 size_t FUNC_8 (struct iov_iter*) ;
 scalar_t__ FUNC_9 (int ,int ,int *,size_t,int ,int ) ;
 scalar_t__ FUNC_10 (struct file*,struct iov_iter*,int *,int ) ;

__attribute__((used)) static ssize_t
FUNC_11(struct kiocb *VAR_2, struct iov_iter *VAR_3)
{
 struct file *VAR_4 = VAR_2->ki_filp;
 struct inode *VAR_5 = FUNC_4(VAR_4);
 struct coda_file_info *VAR_6 = FUNC_0(VAR_4);
 struct file *VAR_7 = VAR_6->cfi_container;
 loff_t VAR_8 = VAR_2->ki_pos;
 size_t VAR_9 = FUNC_8(VAR_3);
 ssize_t VAR_10;

 VAR_10 = FUNC_9(VAR_5->i_sb, FUNC_1(VAR_5),
      &VAR_6->cfi_access_intent,
      VAR_9, VAR_8, VAR_0);
 if (VAR_10)
  goto finish_write;

 FUNC_5(VAR_7);
 FUNC_6(VAR_5);
 VAR_10 = FUNC_10(VAR_6->cfi_container, VAR_3, &VAR_2->ki_pos, 0);
 VAR_5->i_size = FUNC_4(VAR_7)->i_size;
 VAR_5->i_blocks = (VAR_5->i_size + 511) >> 9;
 VAR_5->i_mtime = VAR_5->i_ctime = FUNC_2(VAR_5);
 FUNC_7(VAR_5);
 FUNC_3(VAR_7);

finish_write:
 FUNC_9(VAR_5->i_sb, FUNC_1(VAR_5),
       &VAR_6->cfi_access_intent,
       VAR_9, VAR_8, VAR_1);
 return VAR_10;
}
