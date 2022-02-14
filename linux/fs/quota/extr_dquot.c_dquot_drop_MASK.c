
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dquot {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 struct dquot** FUNC_2 (struct inode*) ;

void FUNC_3(struct inode *VAR_1)
{
 struct dquot * const *VAR_2;
 int VAR_3;

 if (FUNC_0(VAR_1))
  return;
 VAR_2 = FUNC_2(VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2[VAR_3])
   break;
 }

 if (VAR_3 < VAR_0)
  FUNC_1(VAR_1);
}
