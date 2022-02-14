
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tap_queue {int dummy; } ;
struct kiocb {struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct file {int f_flags; struct tap_queue* private_data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct tap_queue*,int *,struct iov_iter*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct kiocb *VAR_1, struct iov_iter *VAR_2)
{
 struct file *VAR_3 = VAR_1->ki_filp;
 struct tap_queue *VAR_4 = VAR_3->private_data;

 return FUNC_0(VAR_4, ((void*)0), VAR_2, VAR_3->f_flags & VAR_0);
}
