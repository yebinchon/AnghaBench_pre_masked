
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef unsigned int loff_t ;


 unsigned int FUNC_0 (struct inode*) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (struct inode*,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_3(struct inode *VAR_0, loff_t VAR_1, unsigned VAR_2)
{
 loff_t VAR_3 = FUNC_0(VAR_0);





 if (VAR_1 + VAR_2 > VAR_3)
  FUNC_2(VAR_0, FUNC_1(VAR_1, VAR_3), VAR_1 + VAR_2);
}
