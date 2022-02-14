
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {scalar_t__ s_fs_info; } ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct super_block*) ;

__attribute__((used)) static void
FUNC_4(struct super_block *VAR_0)
{
 FUNC_0();

 FUNC_3(VAR_0);
 if (VAR_0->s_fs_info) {
  FUNC_2(VAR_0->s_fs_info);
  FUNC_1(VAR_0->s_fs_info);
 }
}
