
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {int i_size; } ;


 TYPE_1__* FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (char const*,int ,struct dentry*,void*,struct file_operations const*) ;

struct dentry *FUNC_2(const char *VAR_0, umode_t VAR_1,
     struct dentry *VAR_2, void *VAR_3,
     const struct file_operations *VAR_4,
     loff_t VAR_5)
{
 struct dentry *VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 if (VAR_6)
  FUNC_0(VAR_6)->i_size = VAR_5;
 return VAR_6;
}
