
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int dummy; } ;
struct file {int f_mode; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (struct dentry*) ;
 int VAR_4 ;
 struct dentry* FUNC_3 (struct inode*,struct dentry*,struct file*) ;
 int FUNC_4 (struct dentry*) ;
 scalar_t__ FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct file*,struct dentry*) ;
 int FUNC_8 (struct inode*,struct dentry*,struct file*,int,int ,int *,int ,int) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_5, struct dentry *VAR_6,
       struct file *VAR_7, unsigned VAR_8,
       umode_t VAR_9)
{
 struct dentry *VAR_10;
 bool VAR_11 = !!(VAR_8 & VAR_3);

 if (!FUNC_4(VAR_6))
  goto skip_lookup;

 VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_7);
 if (FUNC_1(VAR_10))
  return FUNC_2(VAR_10);
 if (VAR_10 != ((void*)0))
  VAR_6 = VAR_10;
 if (FUNC_5(VAR_6)) {
  if (!(VAR_7->f_mode & VAR_1))
   return FUNC_7(VAR_7, VAR_10);
  FUNC_6(VAR_10);
  return 0;
 }

 FUNC_0(VAR_10 != ((void*)0));

skip_lookup:
 if (!(VAR_8 & VAR_2))
  return -VAR_0;

 return FUNC_8(VAR_5, VAR_6, VAR_7, VAR_4 | VAR_9, 0, ((void*)0), 0, VAR_11);
}
