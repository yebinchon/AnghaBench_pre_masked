
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parman_prio {int dummy; } ;
struct parman {int dummy; } ;
struct mlxsw_sp1_mr_tcam_region {int rtar_key_type; struct parman_prio* parman_prios; struct parman* parman; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_reg_rtar_key_type { ____Placeholder_mlxsw_reg_rtar_key_type } mlxsw_reg_rtar_key_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct parman_prio* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct mlxsw_sp1_mr_tcam_region*) ;
 int FUNC_2 (struct mlxsw_sp1_mr_tcam_region*) ;
 int VAR_3 ;
 struct parman* FUNC_3 (int *,struct mlxsw_sp1_mr_tcam_region*) ;
 int FUNC_4 (struct parman*) ;
 int FUNC_5 (struct parman*,struct parman_prio*,int) ;

__attribute__((used)) static int
FUNC_6(struct mlxsw_sp *VAR_4,
         struct mlxsw_sp1_mr_tcam_region *VAR_5,
         enum mlxsw_reg_rtar_key_type VAR_6)
{
 struct parman_prio *VAR_7;
 struct parman *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_5->rtar_key_type = VAR_6;
 VAR_5->mlxsw_sp = VAR_4;

 VAR_9 = FUNC_1(VAR_5);
 if (VAR_9)
  return VAR_9;

 VAR_8 = FUNC_3(&VAR_3,
          VAR_5);
 if (!VAR_8) {
  VAR_9 = -VAR_0;
  goto err_parman_create;
 }
 VAR_5->parman = VAR_8;

 VAR_7 = FUNC_0(VAR_2 + 1,
         sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  VAR_9 = -VAR_0;
  goto err_parman_prios_alloc;
 }
 VAR_5->parman_prios = VAR_7;

 for (VAR_10 = 0; VAR_10 < VAR_2 + 1; VAR_10++)
  FUNC_5(VAR_5->parman,
     &VAR_5->parman_prios[VAR_10], VAR_10);
 return 0;

err_parman_prios_alloc:
 FUNC_4(VAR_8);
err_parman_create:
 FUNC_2(VAR_5);
 return VAR_9;
}
