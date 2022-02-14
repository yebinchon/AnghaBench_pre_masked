
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct cx231xx_fh* private_data; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {int lock; } ;


 int FUNC_0 (struct file*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0)
{
 struct cx231xx_fh *VAR_1 = VAR_0->private_data;
 struct cx231xx *VAR_2 = VAR_1->dev;
 int VAR_3;

 FUNC_1(&VAR_2->lock);
 VAR_3 = FUNC_0(VAR_0);
 FUNC_2(&VAR_2->lock);
 return VAR_3;
}
