
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_operations {int dummy; } ;
struct file {int f_mapping; int f_path; } ;


 int FUNC_0 (struct file*) ;
 struct file* FUNC_1 (int *,int,struct file_operations const*) ;
 int FUNC_2 (int *) ;

struct file *FUNC_3(struct file *VAR_0, int VAR_1,
    const struct file_operations *VAR_2)
{
 struct file *VAR_3 = FUNC_1(&VAR_0->f_path, VAR_1, VAR_2);
 if (!FUNC_0(VAR_3)) {
  FUNC_2(&VAR_3->f_path);
  VAR_3->f_mapping = VAR_0->f_mapping;
 }
 return VAR_3;
}
