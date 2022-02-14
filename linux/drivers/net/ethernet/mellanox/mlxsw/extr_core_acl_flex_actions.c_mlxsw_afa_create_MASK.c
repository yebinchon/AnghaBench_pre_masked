
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_afa_ops {int dummy; } ;
struct mlxsw_afa {unsigned int max_acts_per_set; int set_ht; void* ops_priv; struct mlxsw_afa_ops const* ops; int fwd_entry_ht; } ;


 int VAR_0 ;
 struct mlxsw_afa* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct mlxsw_afa*) ;
 struct mlxsw_afa* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

struct mlxsw_afa *FUNC_5(unsigned int VAR_4,
       const struct mlxsw_afa_ops *VAR_5,
       void *VAR_6)
{
 struct mlxsw_afa *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);
 VAR_8 = FUNC_4(&VAR_7->set_ht, &VAR_3);
 if (VAR_8)
  goto err_set_rhashtable_init;
 VAR_8 = FUNC_4(&VAR_7->fwd_entry_ht,
         &VAR_2);
 if (VAR_8)
  goto err_fwd_entry_rhashtable_init;
 VAR_7->max_acts_per_set = VAR_4;
 VAR_7->ops = VAR_5;
 VAR_7->ops_priv = VAR_6;
 return VAR_7;

err_fwd_entry_rhashtable_init:
 FUNC_3(&VAR_7->set_ht);
err_set_rhashtable_init:
 FUNC_1(VAR_7);
 return FUNC_0(VAR_8);
}
