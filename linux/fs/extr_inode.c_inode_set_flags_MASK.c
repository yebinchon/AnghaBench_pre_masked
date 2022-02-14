
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_flags; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,unsigned int,unsigned int) ;

void FUNC_2(struct inode *VAR_0, unsigned int VAR_1,
       unsigned int VAR_2)
{
 FUNC_0(VAR_1 & ~VAR_2);
 FUNC_1(&VAR_0->i_flags, VAR_2, VAR_1);
}
