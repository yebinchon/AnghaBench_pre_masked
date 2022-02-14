
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp2_acl_tcam_entry {int act_block; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (int ,int*) ;

__attribute__((used)) static int
FUNC_1(struct mlxsw_sp *VAR_0,
          void *VAR_1, void *VAR_2,
          bool *VAR_3)
{
 struct mlxsw_sp2_acl_tcam_entry *VAR_4 = VAR_2;

 return FUNC_0(VAR_4->act_block, VAR_3);
}
