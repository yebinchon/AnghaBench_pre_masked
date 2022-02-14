
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmsg_eptdev {int ept_lock; int ept; } ;
struct kiocb {struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct file {int f_flags; struct rpmsg_eptdev* private_data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*,size_t,struct iov_iter*) ;
 size_t FUNC_1 (struct iov_iter*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (size_t,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,void*,size_t) ;
 int FUNC_7 (int ,void*,size_t) ;

__attribute__((used)) static ssize_t FUNC_8(struct kiocb *VAR_6,
           struct iov_iter *VAR_7)
{
 struct file *VAR_8 = VAR_6->ki_filp;
 struct rpmsg_eptdev *VAR_9 = VAR_8->private_data;
 size_t VAR_10 = FUNC_1(VAR_7);
 void *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_3(VAR_10, VAR_4);
 if (!VAR_11)
  return -VAR_1;

 if (!FUNC_0(VAR_11, VAR_10, VAR_7))
  return -VAR_0;

 if (FUNC_4(&VAR_9->ept_lock)) {
  VAR_12 = -VAR_3;
  goto free_kbuf;
 }

 if (!VAR_9->ept) {
  VAR_12 = -VAR_2;
  goto unlock_eptdev;
 }

 if (VAR_8->f_flags & VAR_5)
  VAR_12 = FUNC_7(VAR_9->ept, VAR_11, VAR_10);
 else
  VAR_12 = FUNC_6(VAR_9->ept, VAR_11, VAR_10);

unlock_eptdev:
 FUNC_5(&VAR_9->ept_lock);

free_kbuf:
 FUNC_2(VAR_11);
 return VAR_12 < 0 ? VAR_12 : VAR_10;
}
