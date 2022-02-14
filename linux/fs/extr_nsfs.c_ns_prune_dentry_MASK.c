
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ns_common {int stashed; } ;
struct inode {struct ns_common* i_private; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 struct inode* FUNC_1 (struct dentry*) ;

__attribute__((used)) static void FUNC_2(struct dentry *VAR_0)
{
 struct inode *VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  struct ns_common *VAR_2 = VAR_1->i_private;
  FUNC_0(&VAR_2->stashed, 0);
 }
}
