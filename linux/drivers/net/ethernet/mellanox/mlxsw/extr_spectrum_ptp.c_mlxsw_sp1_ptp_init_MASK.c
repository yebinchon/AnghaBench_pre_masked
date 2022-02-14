
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp_ptp_state {int unmatched_ht; int ht_gc_dw; int unmatched_lock; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct mlxsw_sp_ptp_state* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct mlxsw_sp_ptp_state*) ;
 struct mlxsw_sp_ptp_state* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int ) ;
 int VAR_9 ;
 int FUNC_6 (struct mlxsw_sp*,int) ;
 int FUNC_7 (struct mlxsw_sp*) ;
 int VAR_10 ;
 int FUNC_8 (struct mlxsw_sp*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;

struct mlxsw_sp_ptp_state *FUNC_12(struct mlxsw_sp *VAR_11)
{
 struct mlxsw_sp_ptp_state *VAR_12;
 u16 VAR_13;
 int VAR_14;

 VAR_14 = FUNC_7(VAR_11);
 if (VAR_14)
  return FUNC_1(VAR_14);

 VAR_12 = FUNC_4(sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return FUNC_1(-VAR_0);
 VAR_12->mlxsw_sp = VAR_11;

 FUNC_11(&VAR_12->unmatched_lock);

 VAR_14 = FUNC_10(&VAR_12->unmatched_ht,
       &VAR_10);
 if (VAR_14)
  goto err_hashtable_init;


 VAR_13 = FUNC_0(VAR_8) |
         FUNC_0(VAR_5) |
         FUNC_0(VAR_6) |
         FUNC_0(VAR_7);
 VAR_14 = FUNC_8(VAR_11, VAR_2,
          VAR_13);
 if (VAR_14)
  goto err_mtptpt_set;


 VAR_13 = ~VAR_13;
 VAR_14 = FUNC_8(VAR_11, VAR_3,
          VAR_13);
 if (VAR_14)
  goto err_mtptpt1_set;

 VAR_14 = FUNC_6(VAR_11, 1);
 if (VAR_14)
  goto err_fifo_clr;

 FUNC_2(&VAR_12->ht_gc_dw, VAR_9);
 FUNC_5(&VAR_12->ht_gc_dw,
          VAR_4);
 return VAR_12;

err_fifo_clr:
 FUNC_8(VAR_11, VAR_3, 0);
err_mtptpt1_set:
 FUNC_8(VAR_11, VAR_2, 0);
err_mtptpt_set:
 FUNC_9(&VAR_12->unmatched_ht);
err_hashtable_init:
 FUNC_3(VAR_12);
 return FUNC_1(VAR_14);
}
