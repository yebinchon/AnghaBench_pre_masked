
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct inode*) ;

bool FUNC_3(struct inode *VAR_1, loff_t VAR_2)
{
 loff_t VAR_3 = FUNC_2(VAR_1);

 if (!FUNC_0(VAR_1))
  return 0;


 if (VAR_2 <= VAR_3)
  return 0;

 return FUNC_1(VAR_1, VAR_0, (VAR_2 - VAR_3));
}
