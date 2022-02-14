
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_nlink; int i_mode; } ;
typedef int handle_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;

__attribute__((used)) static void FUNC_2(handle_t *VAR_0, struct inode *VAR_1)
{
 if (!FUNC_0(VAR_1->i_mode) || VAR_1->i_nlink > 2)
  FUNC_1(VAR_1);
}
