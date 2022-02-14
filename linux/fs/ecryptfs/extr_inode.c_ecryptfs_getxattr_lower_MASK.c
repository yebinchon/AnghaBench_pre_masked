
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_opflags; } ;
struct dentry {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*,struct inode*,char const*,void*,size_t) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;

ssize_t
FUNC_3(struct dentry *VAR_2, struct inode *VAR_3,
   const char *VAR_4, void *VAR_5, size_t VAR_6)
{
 int VAR_7;

 if (!(VAR_3->i_opflags & VAR_1)) {
  VAR_7 = -VAR_0;
  goto out;
 }
 FUNC_1(VAR_3);
 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_2(VAR_3);
out:
 return VAR_7;
}
