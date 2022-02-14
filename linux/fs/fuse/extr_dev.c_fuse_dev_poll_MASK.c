
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fuse_iqueue {int lock; int connected; int waitq; } ;
struct fuse_dev {TYPE_1__* fc; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_2__ {struct fuse_iqueue iq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fuse_dev* FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,int *,int *) ;
 scalar_t__ FUNC_2 (struct fuse_iqueue*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static __poll_t FUNC_5(struct file *VAR_5, poll_table *VAR_6)
{
 __poll_t VAR_7 = VAR_2 | VAR_4;
 struct fuse_iqueue *VAR_8;
 struct fuse_dev *VAR_9 = FUNC_0(VAR_5);

 if (!VAR_9)
  return VAR_0;

 VAR_8 = &VAR_9->fc->iq;
 FUNC_1(VAR_5, &VAR_8->waitq, VAR_6);

 FUNC_3(&VAR_8->lock);
 if (!VAR_8->connected)
  VAR_7 = VAR_0;
 else if (FUNC_2(VAR_8))
  VAR_7 |= VAR_1 | VAR_3;
 FUNC_4(&VAR_8->lock);

 return VAR_7;
}
