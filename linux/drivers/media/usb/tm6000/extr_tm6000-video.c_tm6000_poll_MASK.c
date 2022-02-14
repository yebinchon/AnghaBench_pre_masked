
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm6000_fh {struct tm6000_core* dev; } ;
struct tm6000_core {int lock; } ;
struct poll_table_struct {int dummy; } ;
struct file {struct tm6000_fh* private_data; } ;
typedef int __poll_t ;


 int FUNC_0 (struct file*,struct poll_table_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_0, struct poll_table_struct *VAR_1)
{
 struct tm6000_fh *VAR_2 = VAR_0->private_data;
 struct tm6000_core *VAR_3 = VAR_2->dev;
 __poll_t VAR_4;

 FUNC_1(&VAR_3->lock);
 VAR_4 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_3->lock);
 return VAR_4;
}
