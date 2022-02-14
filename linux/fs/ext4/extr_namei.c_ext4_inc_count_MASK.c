
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_nlink; } ;
typedef int handle_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int) ;

__attribute__((used)) static void FUNC_3(handle_t *VAR_1, struct inode *VAR_2)
{
 FUNC_0(VAR_2);
 if (FUNC_1(VAR_2) &&
     (VAR_2->i_nlink > VAR_0 || VAR_2->i_nlink == 2))
  FUNC_2(VAR_2, 1);
}
