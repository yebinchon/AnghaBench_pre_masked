
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_inode {int lowerdata; int lower; int __upperdentry; } ;
struct inode {int i_mode; } ;


 struct ovl_inode* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_0)
{
 struct ovl_inode *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1->__upperdentry);
 FUNC_3(VAR_1->lower);
 if (FUNC_1(VAR_0->i_mode))
  FUNC_4(VAR_0);
 else
  FUNC_3(VAR_1->lowerdata);
}
