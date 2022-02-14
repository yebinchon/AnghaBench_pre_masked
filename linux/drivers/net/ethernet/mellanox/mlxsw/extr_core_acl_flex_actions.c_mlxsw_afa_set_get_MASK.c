
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_afa_set {int ref_count; int ht_key; } ;
struct mlxsw_afa {int set_ht; } ;


 struct mlxsw_afa_set* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct mlxsw_afa*,struct mlxsw_afa_set*) ;
 int FUNC_2 (struct mlxsw_afa*,struct mlxsw_afa_set*) ;
 struct mlxsw_afa_set* FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static struct mlxsw_afa_set *FUNC_4(struct mlxsw_afa *VAR_1,
            struct mlxsw_afa_set *VAR_2)
{
 struct mlxsw_afa_set *VAR_3;
 int VAR_4;





 VAR_3 = FUNC_3(&VAR_1->set_ht, &VAR_2->ht_key,
         VAR_0);
 if (VAR_3) {
  VAR_3->ref_count++;
  FUNC_1(VAR_1, VAR_2);
 } else {
  VAR_3 = VAR_2;
  VAR_4 = FUNC_2(VAR_1, VAR_3);
  if (VAR_4)
   return FUNC_0(VAR_4);
 }
 return VAR_3;
}
