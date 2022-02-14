
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int dummy; } ;
struct tun_file {int dummy; } ;
struct kiocb {struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct file {int f_flags; struct tun_file* private_data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct tun_struct* FUNC_0 (struct tun_file*) ;
 int FUNC_1 (struct tun_struct*,struct tun_file*,int *,struct iov_iter*,int,int) ;
 int FUNC_2 (struct tun_struct*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kiocb *VAR_2, struct iov_iter *VAR_3)
{
 struct file *VAR_4 = VAR_2->ki_filp;
 struct tun_file *VAR_5 = VAR_4->private_data;
 struct tun_struct *VAR_6 = FUNC_0(VAR_5);
 ssize_t VAR_7;

 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_6, VAR_5, ((void*)0), VAR_3,
         VAR_4->f_flags & VAR_1, 0);

 FUNC_2(VAR_6);
 return VAR_7;
}
