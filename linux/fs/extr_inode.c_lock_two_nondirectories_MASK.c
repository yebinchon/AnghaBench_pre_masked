
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*,struct inode*) ;

void FUNC_4(struct inode *VAR_1, struct inode *VAR_2)
{
 if (VAR_1 > VAR_2)
  FUNC_3(VAR_1, VAR_2);

 if (VAR_1 && !FUNC_0(VAR_1->i_mode))
  FUNC_1(VAR_1);
 if (VAR_2 && !FUNC_0(VAR_2->i_mode) && VAR_2 != VAR_1)
  FUNC_2(VAR_2, VAR_0);
}
