
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int d_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*) ;

int FUNC_4(struct inode *VAR_4, struct dentry *VAR_5,
        struct inode *VAR_6, struct dentry *VAR_7,
        unsigned int VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_3(VAR_4);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_3(VAR_6);
 if (VAR_9)
  return VAR_9;


 if ((VAR_5->d_flags | VAR_7->d_flags) &
     VAR_0)
  return -VAR_1;

 if (VAR_4 != VAR_6) {
  if (FUNC_0(VAR_6) &&
      !FUNC_2(VAR_6,
         FUNC_1(VAR_5)))
   return -VAR_2;

  if ((VAR_8 & VAR_3) &&
      FUNC_0(VAR_4) &&
      !FUNC_2(VAR_4,
         FUNC_1(VAR_7)))
   return -VAR_2;
 }
 return 0;
}
