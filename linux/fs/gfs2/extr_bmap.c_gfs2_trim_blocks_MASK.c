
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*,int ) ;

void FUNC_2(struct inode *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0, VAR_0->i_size);
 FUNC_0(VAR_1 != 0);
}
