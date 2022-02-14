
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

bool FUNC_3(struct inode *VAR_1)
{
 if (!FUNC_2(FUNC_0(VAR_1), VAR_0))
  return 0;

 if (!FUNC_1(VAR_1->i_mode))
  return 0;

 return 1;
}
