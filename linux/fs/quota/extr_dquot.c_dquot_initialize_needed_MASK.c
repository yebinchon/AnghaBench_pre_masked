
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct dquot {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 struct dquot** FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ,int) ;

bool FUNC_3(struct inode *VAR_1)
{
 struct dquot **VAR_2;
 int VAR_3;

 if (!FUNC_0(VAR_1))
  return 0;

 VAR_2 = FUNC_1(VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (!VAR_2[VAR_3] && FUNC_2(VAR_1->i_sb, VAR_3))
   return 1;
 return 0;
}
