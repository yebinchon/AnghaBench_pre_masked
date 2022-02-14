
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct super_block {int dummy; } ;
struct inode {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct super_block*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_2, struct inode *VAR_3, int VAR_4)
{
 if (FUNC_4(VAR_4 & VAR_1)) {
  umode_t VAR_5 = VAR_3->i_mode;


  if (FUNC_3(VAR_2) && (FUNC_2(VAR_5) || FUNC_0(VAR_5) || FUNC_1(VAR_5)))
   return -VAR_0;
 }
 return 0;
}
