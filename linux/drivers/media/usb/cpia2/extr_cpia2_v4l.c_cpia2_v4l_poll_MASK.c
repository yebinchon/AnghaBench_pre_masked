
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct file {int dummy; } ;
struct camera_data {int v4l2_lock; } ;
typedef int __poll_t ;


 int FUNC_0 (struct camera_data*,struct file*,struct poll_table_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct camera_data* FUNC_3 (struct file*) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_0, struct poll_table_struct *VAR_1)
{
 struct camera_data *VAR_2 = FUNC_3(VAR_0);
 __poll_t VAR_3;

 FUNC_1(&VAR_2->v4l2_lock);
 VAR_3 = FUNC_0(VAR_2, VAR_0, VAR_1);
 FUNC_2(&VAR_2->v4l2_lock);
 return VAR_3;
}
