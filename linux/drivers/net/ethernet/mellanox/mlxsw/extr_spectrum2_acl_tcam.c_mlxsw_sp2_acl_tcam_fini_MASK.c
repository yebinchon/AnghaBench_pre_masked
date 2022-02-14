
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp2_acl_tcam {int kvdl_index; int kvdl_count; int atcam; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp*,int *) ;
 int FUNC_1 (struct mlxsw_sp*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp *VAR_1, void *VAR_2)
{
 struct mlxsw_sp2_acl_tcam *VAR_3 = VAR_2;

 FUNC_0(VAR_1, &VAR_3->atcam);
 FUNC_1(VAR_1, VAR_0,
      VAR_3->kvdl_count, VAR_3->kvdl_index);
}
