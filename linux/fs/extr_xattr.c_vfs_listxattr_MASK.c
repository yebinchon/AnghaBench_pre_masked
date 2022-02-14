
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_opflags; TYPE_1__* i_op; } ;
struct dentry {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {size_t (* listxattr ) (struct dentry*,char*,size_t) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (struct dentry*) ;
 size_t FUNC_1 (struct inode*,char*,size_t) ;
 size_t FUNC_2 (struct dentry*) ;
 size_t FUNC_3 (struct dentry*,char*,size_t) ;

ssize_t
FUNC_4(struct dentry *VAR_2, char *VAR_3, size_t VAR_4)
{
 struct inode *VAR_5 = FUNC_0(VAR_2);
 ssize_t VAR_6;

 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6)
  return VAR_6;
 if (VAR_5->i_op->listxattr && (VAR_5->i_opflags & VAR_1)) {
  VAR_6 = VAR_5->i_op->listxattr(VAR_2, VAR_3, VAR_4);
 } else {
  VAR_6 = FUNC_1(VAR_5, VAR_3, VAR_4);
  if (VAR_4 && VAR_6 > VAR_4)
   VAR_6 = -VAR_0;
 }
 return VAR_6;
}
