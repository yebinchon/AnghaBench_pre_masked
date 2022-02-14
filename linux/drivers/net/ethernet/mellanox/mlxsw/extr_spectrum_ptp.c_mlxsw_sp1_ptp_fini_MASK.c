
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_ptp_state {int unmatched_ht; int ht_gc_dw; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlxsw_sp_ptp_state*) ;
 int FUNC_2 (struct mlxsw_sp*,int ,int ) ;
 int FUNC_3 (struct mlxsw_sp*,int) ;
 int VAR_2 ;
 int FUNC_4 (struct mlxsw_sp*,int ,int ) ;
 int FUNC_5 (int *,int *,int *) ;

void FUNC_6(struct mlxsw_sp_ptp_state *VAR_3)
{
 struct mlxsw_sp *VAR_4 = VAR_3->mlxsw_sp;

 FUNC_0(&VAR_3->ht_gc_dw);
 FUNC_2(VAR_4, 0, 0);
 FUNC_3(VAR_4, 0);
 FUNC_4(VAR_4, VAR_1, 0);
 FUNC_4(VAR_4, VAR_0, 0);
 FUNC_5(&VAR_3->unmatched_ht,
      &VAR_2, ((void*)0));
 FUNC_1(VAR_3);
}
