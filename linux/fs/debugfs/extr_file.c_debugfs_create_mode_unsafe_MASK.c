
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (char const*,int,struct dentry*,void*,struct file_operations const*) ;

__attribute__((used)) static struct dentry *FUNC_1(const char *VAR_2, umode_t VAR_3,
     struct dentry *VAR_4, void *VAR_5,
     const struct file_operations *VAR_6,
     const struct file_operations *VAR_7,
     const struct file_operations *VAR_8)
{

 if (!(VAR_3 & VAR_1))
  return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_7);

 if (!(VAR_3 & VAR_0))
  return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_8);

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
