
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dquot {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_0 ;
 struct dquot** FUNC_1 (struct inode*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, int VAR_2)
{
 struct dquot * const *VAR_3;
 int VAR_4;

 if (FUNC_0(VAR_1))
  return 0;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_2 != -1)
  return !VAR_3[VAR_2];
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (!VAR_3[VAR_4])
   return 1;
 return 0;
}
