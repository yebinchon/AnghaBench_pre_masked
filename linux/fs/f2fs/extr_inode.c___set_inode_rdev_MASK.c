
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_rdev; int i_mode; } ;
struct f2fs_inode {void** i_addr; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct inode *VAR_0, struct f2fs_inode *VAR_1)
{
 int VAR_2 = FUNC_3(VAR_0);

 if (FUNC_1(VAR_0->i_mode) || FUNC_0(VAR_0->i_mode)) {
  if (FUNC_6(VAR_0->i_rdev)) {
   VAR_1->i_addr[VAR_2] =
    FUNC_2(FUNC_5(VAR_0->i_rdev));
   VAR_1->i_addr[VAR_2 + 1] = 0;
  } else {
   VAR_1->i_addr[VAR_2] = 0;
   VAR_1->i_addr[VAR_2 + 1] =
    FUNC_2(FUNC_4(VAR_0->i_rdev));
   VAR_1->i_addr[VAR_2 + 2] = 0;
  }
 }
}
