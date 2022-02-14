
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int ) ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 (struct inode*) ;

int
FUNC_3(struct inode *VAR_1, bool VAR_2)
{
 int VAR_3;

 if (!FUNC_2(VAR_1))
  return 0;
 VAR_3 = FUNC_0(VAR_1, VAR_0);
 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_2)
  return 0;
 return FUNC_1(VAR_1, 1);
}
