
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct file_operations {int (* poll ) (struct file*,struct poll_table_struct*) ;} ;
struct file {int dummy; } ;
struct dentry {int dummy; } ;
typedef int __poll_t ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct file*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 struct file_operations* FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*,struct poll_table_struct*) ;

__attribute__((used)) static __poll_t FUNC_5(struct file *VAR_1,
    struct poll_table_struct *VAR_2)
{
 struct dentry *VAR_3 = FUNC_0(VAR_1);
 __poll_t VAR_4 = 0;
 const struct file_operations *VAR_5;

 if (FUNC_1(VAR_3))
  return VAR_0;

 VAR_5 = FUNC_3(VAR_1);
 VAR_4 = VAR_5->poll(VAR_1, VAR_2);
 FUNC_2(VAR_3);
 return VAR_4;
}
