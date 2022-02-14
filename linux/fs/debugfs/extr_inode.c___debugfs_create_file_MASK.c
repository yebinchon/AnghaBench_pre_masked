
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int i_mode; struct file_operations const* i_fop; int * i_op; void* i_private; } ;
struct file_operations {int dummy; } ;
struct dentry {int d_parent; void* d_fsdata; int d_sb; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 int VAR_3 ;
 struct inode* FUNC_5 (int ) ;
 struct dentry* FUNC_6 (struct dentry*) ;
 struct dentry* FUNC_7 (struct dentry*) ;
 int FUNC_8 (int ,struct dentry*) ;
 int FUNC_9 (char*,char const*) ;
 struct dentry* FUNC_10 (char const*,struct dentry*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static struct dentry *FUNC_12(const char *VAR_4, umode_t VAR_5,
    struct dentry *VAR_6, void *VAR_7,
    const struct file_operations *VAR_8,
    const struct file_operations *VAR_9)
{
 struct dentry *VAR_10;
 struct inode *VAR_11;

 if (!(VAR_5 & VAR_1))
  VAR_5 |= VAR_2;
 FUNC_0(!FUNC_2(VAR_5));
 VAR_10 = FUNC_10(VAR_4, VAR_6);

 if (FUNC_1(VAR_10))
  return VAR_10;

 VAR_11 = FUNC_5(VAR_10->d_sb);
 if (FUNC_11(!VAR_11)) {
  FUNC_9("out of free dentries, can not create file '%s'\n",
         VAR_4);
  return FUNC_7(VAR_10);
 }

 VAR_11->i_mode = VAR_5;
 VAR_11->i_private = VAR_7;

 VAR_11->i_op = &VAR_3;
 VAR_11->i_fop = VAR_8;
 VAR_10->d_fsdata = (void *)((unsigned long)VAR_9 |
    VAR_0);

 FUNC_4(VAR_10, VAR_11);
 FUNC_8(FUNC_3(VAR_10->d_parent), VAR_10);
 return FUNC_6(VAR_10);
}
