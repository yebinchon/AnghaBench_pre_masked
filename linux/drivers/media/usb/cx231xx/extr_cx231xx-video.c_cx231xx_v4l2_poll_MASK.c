
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {struct cx231xx_fh* private_data; } ;
struct TYPE_2__ {int wait; } ;
struct cx231xx_fh {scalar_t__ type; int vb_vidq; TYPE_1__ fh; struct cx231xx* dev; } ;
struct cx231xx {int lock; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct cx231xx*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct file*,int *,int *) ;
 int FUNC_5 (struct cx231xx_fh*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_9(struct file *VAR_6, poll_table *VAR_7)
{
 __poll_t VAR_8 = FUNC_3(VAR_7);
 struct cx231xx_fh *VAR_9 = VAR_6->private_data;
 struct cx231xx *VAR_10 = VAR_9->dev;
 __poll_t VAR_11 = 0;
 int VAR_12;

 VAR_12 = FUNC_0(VAR_10);
 if (VAR_12 < 0)
  return VAR_0;

 VAR_12 = FUNC_5(VAR_9);

 if (FUNC_6(VAR_12 < 0))
  return VAR_0;

 if (FUNC_7(&VAR_9->fh))
  VAR_11 |= VAR_2;
 else
  FUNC_4(VAR_6, &VAR_9->fh.wait, VAR_7);

 if (!(VAR_8 & (VAR_1 | VAR_3)))
  return VAR_11;

 if ((VAR_5 == VAR_9->type) ||
     (VAR_4 == VAR_9->type)) {
  FUNC_1(&VAR_10->lock);
  VAR_11 |= FUNC_8(VAR_6, &VAR_9->vb_vidq, VAR_7);
  FUNC_2(&VAR_10->lock);
  return VAR_11;
 }
 return VAR_11 | VAR_0;
}
