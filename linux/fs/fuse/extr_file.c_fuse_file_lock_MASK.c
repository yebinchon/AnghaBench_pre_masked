
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fuse_conn {scalar_t__ no_lock; } ;
struct file_lock {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,struct file_lock*) ;
 int FUNC_2 (struct file*,struct file_lock*,int ) ;
 struct fuse_conn* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct file*,struct file_lock*,int *) ;
 int FUNC_5 (struct file*,struct file_lock*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_2, int VAR_3, struct file_lock *VAR_4)
{
 struct inode *VAR_5 = FUNC_0(VAR_2);
 struct fuse_conn *VAR_6 = FUNC_3(VAR_5);
 int VAR_7;

 if (VAR_3 == VAR_0) {
  VAR_7 = 0;
 } else if (VAR_3 == VAR_1) {
  if (VAR_6->no_lock) {
   FUNC_5(VAR_2, VAR_4);
   VAR_7 = 0;
  } else
   VAR_7 = FUNC_1(VAR_2, VAR_4);
 } else {
  if (VAR_6->no_lock)
   VAR_7 = FUNC_4(VAR_2, VAR_4, ((void*)0));
  else
   VAR_7 = FUNC_2(VAR_2, VAR_4, 0);
 }
 return VAR_7;
}
