
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_nlink; int i_data; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct inode *VAR_0)
{
 FUNC_5(&VAR_0->i_data, 0);

 if (!VAR_0->i_nlink)
  FUNC_2(VAR_0, 0);
 FUNC_3(VAR_0);
 FUNC_0(VAR_0);
 FUNC_1(VAR_0);

 FUNC_4(VAR_0);
}
