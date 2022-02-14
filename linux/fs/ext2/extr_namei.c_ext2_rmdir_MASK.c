
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_size; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,struct dentry*) ;
 int FUNC_3 (struct inode*) ;

__attribute__((used)) static int FUNC_4 (struct inode * VAR_1, struct dentry *VAR_2)
{
 struct inode * VAR_3 = FUNC_0(VAR_2);
 int VAR_4 = -VAR_0;

 if (FUNC_1(VAR_3)) {
  VAR_4 = FUNC_2(VAR_1, VAR_2);
  if (!VAR_4) {
   VAR_3->i_size = 0;
   FUNC_3(VAR_3);
   FUNC_3(VAR_1);
  }
 }
 return VAR_4;
}
