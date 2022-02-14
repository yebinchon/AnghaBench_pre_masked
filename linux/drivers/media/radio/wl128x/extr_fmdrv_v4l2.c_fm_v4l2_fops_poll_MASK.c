
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct fmdev {int mutex; } ;
struct file {int dummy; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fmdev*,struct file*,struct poll_table_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct fmdev* FUNC_3 (struct file*) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_2, struct poll_table_struct *VAR_3)
{
 int VAR_4;
 struct fmdev *VAR_5;

 VAR_5 = FUNC_3(VAR_2);
 FUNC_1(&VAR_5->mutex);
 VAR_4 = FUNC_0(VAR_5, VAR_2, VAR_3);
 FUNC_2(&VAR_5->mutex);
 if (VAR_4 < 0)
  return VAR_0 | VAR_1;

 return 0;
}
