
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;

int FUNC_2(struct inode *VAR_0, int VAR_1)
{
 int VAR_2;
 int VAR_3;


 if (FUNC_0(VAR_0))
  return 1;

 VAR_3 = FUNC_1(VAR_0);

 if (VAR_1 <= 1)
  VAR_2 = VAR_3 * 2;
 else
  VAR_2 = VAR_3 * 3;

 return VAR_2;
}
