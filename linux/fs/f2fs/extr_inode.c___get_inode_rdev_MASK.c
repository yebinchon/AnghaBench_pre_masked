
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_rdev; int i_mode; } ;
struct f2fs_inode {scalar_t__* i_addr; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct inode *VAR_0, struct f2fs_inode *VAR_1)
{
 int VAR_2 = FUNC_4(VAR_0);

 if (FUNC_1(VAR_0->i_mode) || FUNC_0(VAR_0->i_mode) ||
   FUNC_2(VAR_0->i_mode) || FUNC_3(VAR_0->i_mode)) {
  if (VAR_1->i_addr[VAR_2])
   VAR_0->i_rdev = FUNC_7(
    FUNC_5(VAR_1->i_addr[VAR_2]));
  else
   VAR_0->i_rdev = FUNC_6(
    FUNC_5(VAR_1->i_addr[VAR_2 + 1]));
 }
}
