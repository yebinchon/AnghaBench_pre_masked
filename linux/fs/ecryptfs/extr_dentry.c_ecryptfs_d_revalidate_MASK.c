
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_nlink; } ;
struct dentry {int d_flags; TYPE_1__* d_op; } ;
struct TYPE_2__ {int (* d_revalidate ) (struct dentry*,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct inode* FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct dentry*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct dentry *VAR_3, unsigned int VAR_4)
{
 struct dentry *VAR_5 = FUNC_2(VAR_3);
 int VAR_6 = 1;

 if (VAR_4 & VAR_2)
  return -VAR_1;

 if (VAR_5->d_flags & VAR_0)
  VAR_6 = VAR_5->d_op->d_revalidate(VAR_5, VAR_4);

 if (FUNC_1(VAR_3)) {
  struct inode *VAR_7 = FUNC_0(VAR_3);

  FUNC_4(VAR_7, FUNC_3(VAR_7));
  if (!VAR_7->i_nlink)
   return 0;
 }
 return VAR_6;
}
