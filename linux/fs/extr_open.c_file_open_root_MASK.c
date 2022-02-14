
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct vfsmount {int dummy; } ;
struct open_flags {int dummy; } ;
struct file {int dummy; } ;
struct dentry {int dummy; } ;


 struct file* FUNC_0 (int) ;
 int FUNC_1 (int,int ,struct open_flags*) ;
 struct file* FUNC_2 (struct dentry*,struct vfsmount*,char const*,struct open_flags*) ;

struct file *FUNC_3(struct dentry *VAR_0, struct vfsmount *VAR_1,
       const char *VAR_2, int VAR_3, umode_t VAR_4)
{
 struct open_flags VAR_5;
 int VAR_6 = FUNC_1(VAR_3, VAR_4, &VAR_5);
 if (VAR_6)
  return FUNC_0(VAR_6);
 return FUNC_2(VAR_0, VAR_1, VAR_2, &VAR_5);
}
