
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int ki_pos; } ;
struct iov_iter {int dummy; } ;
struct file {int dummy; } ;
typedef int ssize_t ;
typedef int rwf_t ;
typedef int loff_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct file*,struct kiocb*,struct iov_iter*) ;
 int FUNC_2 (struct file*,struct kiocb*,struct iov_iter*) ;
 int FUNC_3 (struct kiocb*,struct file*) ;
 int FUNC_4 (struct kiocb*,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct file *VAR_2, struct iov_iter *VAR_3,
  loff_t *VAR_4, int VAR_5, rwf_t VAR_6)
{
 struct kiocb VAR_7;
 ssize_t VAR_8;

 FUNC_3(&VAR_7, VAR_2);
 VAR_8 = FUNC_4(&VAR_7, VAR_6);
 if (VAR_8)
  return VAR_8;
 VAR_7.ki_pos = (VAR_4 ? *VAR_4 : 0);

 if (VAR_5 == VAR_1)
  VAR_8 = FUNC_1(VAR_2, &VAR_7, VAR_3);
 else
  VAR_8 = FUNC_2(VAR_2, &VAR_7, VAR_3);
 FUNC_0(VAR_8 == -VAR_0);
 if (VAR_4)
  *VAR_4 = VAR_7.ki_pos;
 return VAR_8;
}
