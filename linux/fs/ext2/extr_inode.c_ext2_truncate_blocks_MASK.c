
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
typedef int loff_t ;


 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct inode*) ;

__attribute__((used)) static void FUNC_8(struct inode *VAR_0, loff_t VAR_1)
{
 if (!(FUNC_3(VAR_0->i_mode) || FUNC_1(VAR_0->i_mode) ||
     FUNC_2(VAR_0->i_mode)))
  return;
 if (FUNC_7(VAR_0))
  return;

 FUNC_5(FUNC_0(VAR_0));
 FUNC_4(VAR_0, VAR_1);
 FUNC_6(FUNC_0(VAR_0));
}
