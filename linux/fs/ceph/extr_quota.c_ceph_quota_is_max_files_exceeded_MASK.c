
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int ,int ) ;

bool FUNC_4(struct inode *VAR_1)
{
 if (!FUNC_2(VAR_1))
  return 0;

 FUNC_1(!FUNC_0(VAR_1->i_mode));

 return FUNC_3(VAR_1, VAR_0, 0);
}
