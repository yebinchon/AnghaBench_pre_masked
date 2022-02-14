
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;

__attribute__((used)) static bool FUNC_4(struct inode *VAR_0, struct dentry *VAR_1,
        struct dentry *VAR_2, bool VAR_3)
{






 if (FUNC_0(VAR_0->i_mode) && VAR_3) {

  if (!VAR_1 && FUNC_2(VAR_0))
   return 0;


  if (!VAR_2 && FUNC_3(VAR_0))
   return 0;
 }







 if (VAR_1 && FUNC_2(VAR_0) != FUNC_1(VAR_1))
  return 0;





 if (VAR_2 && FUNC_3(VAR_0) != FUNC_1(VAR_2))
  return 0;

 return 1;
}
