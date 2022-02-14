
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct ovl_fs* s_fs_info; } ;
struct ovl_fs {int creator_cred; } ;
struct cred {int dummy; } ;


 struct cred const* FUNC_0 (int ) ;

const struct cred *FUNC_1(struct super_block *VAR_0)
{
 struct ovl_fs *VAR_1 = VAR_0->s_fs_info;

 return FUNC_0(VAR_1->creator_cred);
}
