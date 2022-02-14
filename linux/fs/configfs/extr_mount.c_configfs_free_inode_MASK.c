
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_link; int i_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_0)
{
 if (FUNC_0(VAR_0->i_mode))
  FUNC_2(VAR_0->i_link);
 FUNC_1(VAR_0);
}
