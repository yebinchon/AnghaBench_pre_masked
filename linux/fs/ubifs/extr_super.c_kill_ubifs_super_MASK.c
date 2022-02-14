
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int dummy; } ;
struct super_block {struct ubifs_info* s_fs_info; } ;


 int FUNC_0 (struct ubifs_info*) ;
 int FUNC_1 (struct super_block*) ;

__attribute__((used)) static void FUNC_2(struct super_block *VAR_0)
{
 struct ubifs_info *VAR_1 = VAR_0->s_fs_info;
 FUNC_1(VAR_0);
 FUNC_0(VAR_1);
}
