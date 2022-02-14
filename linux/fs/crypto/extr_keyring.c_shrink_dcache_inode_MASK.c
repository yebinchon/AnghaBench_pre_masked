
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct dentry* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_0)
{
 struct dentry *VAR_1;

 if (FUNC_0(VAR_0->i_mode)) {
  VAR_1 = FUNC_1(VAR_0);
  if (VAR_1) {
   FUNC_4(VAR_1);
   FUNC_3(VAR_1);
  }
 }
 FUNC_2(VAR_0);
}
