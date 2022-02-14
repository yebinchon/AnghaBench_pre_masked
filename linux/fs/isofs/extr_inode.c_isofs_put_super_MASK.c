
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int * s_fs_info; } ;
struct isofs_sb_info {int s_nls_iocharset; } ;


 struct isofs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct isofs_sb_info*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_0)
{
 struct isofs_sb_info *VAR_1 = FUNC_0(VAR_0);





 FUNC_1(VAR_1);
 VAR_0->s_fs_info = ((void*)0);
 return;
}
