
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {scalar_t__ ki_pos; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct kiocb*,struct inode*,struct iov_iter*,int ) ;
 size_t FUNC_1 (struct iov_iter*) ;
 scalar_t__ FUNC_2 (struct iov_iter*) ;
 int VAR_1 ;
 int FUNC_3 (struct address_space*,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static ssize_t FUNC_5(struct kiocb *VAR_2, struct iov_iter *VAR_3)
{
 struct file *VAR_4 = VAR_2->ki_filp;
 struct address_space *VAR_5 = VAR_4->f_mapping;
 struct inode *VAR_6 = VAR_5->host;
 size_t VAR_7 = FUNC_1(VAR_3);
 ssize_t VAR_8;

 VAR_8 = FUNC_0(VAR_2, VAR_6, VAR_3, VAR_1);
 if (FUNC_4(VAR_8 < 0 && FUNC_2(VAR_3) == VAR_0))
  FUNC_3(VAR_5, VAR_2->ki_pos + VAR_7);
 return VAR_8;
}
