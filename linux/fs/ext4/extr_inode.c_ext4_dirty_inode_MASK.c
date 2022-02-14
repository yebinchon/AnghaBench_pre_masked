
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int * FUNC_1 (struct inode*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct inode*) ;

void FUNC_4(struct inode *VAR_2, int VAR_3)
{
 handle_t *VAR_4;

 if (VAR_3 == VAR_1)
  return;
 VAR_4 = FUNC_1(VAR_2, VAR_0, 2);
 if (FUNC_0(VAR_4))
  goto out;

 FUNC_3(VAR_4, VAR_2);

 FUNC_2(VAR_4);
out:
 return;
}
