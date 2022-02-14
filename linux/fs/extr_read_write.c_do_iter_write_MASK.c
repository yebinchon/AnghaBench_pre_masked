
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iov_iter {int dummy; } ;
struct file {int f_mode; TYPE_1__* f_op; } ;
typedef scalar_t__ ssize_t ;
typedef int rwf_t ;
typedef int loff_t ;
struct TYPE_2__ {scalar_t__ write_iter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct file*,struct iov_iter*,int *,int ,int ) ;
 scalar_t__ FUNC_1 (struct file*,struct iov_iter*,int *,int ,int ) ;
 int FUNC_2 (struct file*) ;
 size_t FUNC_3 (struct iov_iter*) ;
 scalar_t__ FUNC_4 (int ,struct file*,int *,size_t) ;

__attribute__((used)) static ssize_t FUNC_5(struct file *VAR_5, struct iov_iter *VAR_6,
  loff_t *VAR_7, rwf_t VAR_8)
{
 size_t VAR_9;
 ssize_t VAR_10 = 0;

 if (!(VAR_5->f_mode & VAR_3))
  return -VAR_0;
 if (!(VAR_5->f_mode & VAR_2))
  return -VAR_1;

 VAR_9 = FUNC_3(VAR_6);
 if (!VAR_9)
  return 0;
 VAR_10 = FUNC_4(VAR_4, VAR_5, VAR_7, VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_5->f_op->write_iter)
  VAR_10 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_4, VAR_8);
 else
  VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_4, VAR_8);
 if (VAR_10 > 0)
  FUNC_2(VAR_5);
 return VAR_10;
}
