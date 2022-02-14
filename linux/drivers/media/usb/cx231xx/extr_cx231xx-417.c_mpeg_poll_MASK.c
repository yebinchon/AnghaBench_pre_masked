
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct poll_table_struct {int dummy; } ;
struct file {struct cx231xx_fh* private_data; } ;
struct TYPE_2__ {int wait; } ;
struct cx231xx_fh {int vidq; TYPE_1__ fh; struct cx231xx* dev; } ;
struct cx231xx {int lock; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct poll_table_struct*) ;
 int FUNC_3 (struct file*,int *,struct poll_table_struct*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct file*,int *,struct poll_table_struct*) ;

__attribute__((used)) static __poll_t FUNC_6(struct file *VAR_3,
 struct poll_table_struct *VAR_4)
{
 __poll_t VAR_5 = FUNC_2(VAR_4);
 struct cx231xx_fh *VAR_6 = VAR_3->private_data;
 struct cx231xx *VAR_7 = VAR_6->dev;
 __poll_t VAR_8 = 0;

 if (FUNC_4(&VAR_6->fh))
  VAR_8 |= VAR_1;
 else
  FUNC_3(VAR_3, &VAR_6->fh.wait, VAR_4);

 if (!(VAR_5 & (VAR_0 | VAR_2)))
  return VAR_8;

 FUNC_0(&VAR_7->lock);
 VAR_8 |= FUNC_5(VAR_3, &VAR_6->vidq, VAR_4);
 FUNC_1(&VAR_7->lock);
 return VAR_8;
}
